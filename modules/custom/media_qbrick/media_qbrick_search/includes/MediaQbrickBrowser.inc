<?php

/**
 * @file media_youtube/includes/MediaYouTubeBrowser.inc
 *
 * Definition of MediaYouTubeBrowser.
 */

/**
 * Media browser plugin for displaying a specific view and display.
 */
class MediaQbrickBrowser extends MediaBrowserPlugin {
  /**
   * Implements MediaBrowserPluginInterface::access().
   */
  public function access($account = NULL) {
    // @TODO: media_access() is a wrapper for file_entity_access(). Switch to the
    // new function when Media 1.x is deprecated.
    return user_access('add media from remote sources');
  }

  /**
   * Implements MediaBrowserPlugin::view().
   */
  public function view() {
    // Check if the user is able to add remote media.
    if (user_access('add media from remote sources')) {
      $build['form'] = drupal_get_form('media_qbrick_search_add', $this->params['types'], $this->params['multiselect']);
      return $build;
    }
  }
}
