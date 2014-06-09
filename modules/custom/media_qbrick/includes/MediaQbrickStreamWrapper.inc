<?php

/**
 *  @file media_youtube/includes/MediaYouTubeStreamWrapper.inc
 *
 *  Create a YouTube Stream Wrapper class for the Media/Resource module.
 */

/**
 *  Create an instance like this:
 *  $youtube = new MediaYouTubeStreamWrapper('youtube://v/[video-code]');
 */
class MediaQbrickStreamWrapper extends MediaReadOnlyStreamWrapper {

  // Overrides $base_url defined in MediaReadOnlyStreamWrapper.
  protected $base_url = 'http://player.qbrick.com/player.aspx';

  /**
   * Returns a url in the format "http://youtube.com/watch?v=qsPQN4MiTeE".
   *
   * Overrides interpolateUrl() defined in MediaReadOnlyStreamWrapper.
   * This is an exact copy of the function in MediaReadOnlyStreamWrapper,
   * here in case that example is redefined or removed.
   *
   */
  function interpolateUrl() {
    if ($parameters = $this->get_parameters()) {
      return $this->base_url . '?' . http_build_query($parameters);
    }
  }

  static function getMimeType($uri, $mapping = NULL) {
    return 'video/qbrick';
  }

  function getTarget($f) {
    return FALSE;
  }

  function getOriginalThumbnailPath() {
    $parts = $this->get_parameters();
    $mid = substr($parts['mcid'], 0, 8);
    $image = $this->getMediaInfo($mid);
    return $image;
  }

  function getLocalThumbnailPath() {
    $parts = $this->get_parameters();
    $local_path = file_default_scheme() . '://media-qbrick/' . check_plain($parts['mcid']) . '.jpg';
    if (!file_exists($local_path)) {
      $dirname = drupal_dirname($local_path);
      file_prepare_directory($dirname, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
      $response = drupal_http_request($this->getOriginalThumbnailPath());
      if (!isset($response->error)) {
        file_unmanaged_save_data($response->data, $local_path, TRUE);
      }
      else {
        @copy($this->getOriginalThumbnailPath(), $local_path);
      }
    }
    return $local_path;
  }

  private function getMediaInfo($mid) {
    $result = drupal_http_request('http://vms.api.qbrick.com/rest/v3/GetMedia/' . $mid);
    if ($result->code == 200) {
      $xml = simplexml_load_string($result->data);
      if (!empty($xml->media->item->images->image)) {
        $image = (string) $xml->media->item->images->image;
        return $image;
      }
    }
    return '';
  }
}
