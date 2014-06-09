<?php

/**
 * @file media_youtube/includes/MediaInterenetYouTubeHandler.inc
 *
 * Contains MediaInternetYouTubeHandler.
 */

/**
 * Implementation of MediaInternetBaseHandler.
 *
 * @see hook_media_internet_providers().
 */
class MediaInternetQbrickHandler extends MediaInternetBaseHandler {

  /**
   * @return
   *   Boolean.
   */
  static public function validId($id) {
    $url = 'http://player.qbrick.com/player.aspx?mcid='. $id;
    $response = drupal_http_request($url, array('method' => 'HEAD'));
    return TRUE;
    if ($response->code == 401) {
      throw new MediaInternetValidationException("Embedding has been disabled for this video.");
    }
    elseif ($response->code != 200) {
      throw new MediaInternetValidationException("The qbrick video ID is invalid or the video was deleted.");
    }
    return TRUE;
  }

  public function parse($embedCode) {
    $patterns = array(
      '@player\.qbrick\.com/player\.aspx\?mcid\=([A-Z0-9]+)@i',
      '@qbrick://([A-Z0-9]+)@i',
    );
    foreach ($patterns as $pattern) {
      preg_match($pattern, $embedCode, $matches);
      // @TODO: Parse is called often. Refactor so that valid ID is checked
      // when a video is added, but not every time the embedCode is parsed.
      if (isset($matches[1]) && self::validId($matches[1])) {
        return file_stream_wrapper_uri_normalize('qbrick://mcid/' . $matches[1]);
      }
    }
  }

  public function claim($embedCode) {
    if ($this->parse($embedCode)) {
      return TRUE;
    }
  }

  public function getFileObject() {
    $uri = $this->parse($this->embedCode);
    $file = file_uri_to_object($uri, TRUE);

    // if (empty($file->fid) && $info = $this->getOEmbed()) {
    //   $file->filename = truncate_utf8($info['title'], 255);
    // }

    return $file;
  }
}
