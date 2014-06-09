<?php

/**
 * @file media_youtube/includes/themes/media_youtube.theme.inc
 *
 * Theme and preprocess functions for Media: YouTube.
 */

/**
 * Preprocess function for theme('media_youtube_video').
 */
function media_qbrick_preprocess_media_qbrick_video(&$variables) {

  // Build the URI.
  $wrapper = file_stream_wrapper_get_instance_by_uri($variables['uri']);
  $parts = $wrapper->get_parameters();
  $variables['video_id'] = check_plain($parts['mcid']);

  // Make the file object available.
  $file_object = file_uri_to_object($variables['uri']);

  // Parse options and build the query string. Only add the option to the query
  // array if the option value is not default. Be careful, depending on the
  // wording in media_youtube.formatters.inc, TRUE may be query=0.
  // @see https://developers.google.com/youtube/player_parameters#Parameters
  $query = array();
  $query['mcid'] = $variables['video_id'];

  // These queries default to 0. If the option is true, set value to 1.
  if ($variables['options']['autoplay']) {
    $query['autoplay'] = 1;
  }

  // Non-query options.
  $url_base = 'player.qbrick.com';

  $protocol = $variables['options']['protocol'];

  // Add some options as their own template variables.
  foreach (array('width', 'height') as $theme_var) {
    $variables[$theme_var] = $variables['options'][$theme_var];
  }

  // Add template variables for accessibility.
  $variables['title'] = check_plain($file_object->filename);
  // @TODO: Find an easy/ not too expensive way to get the YouTube description
  // to use for the alternative content.
  $variables['alternative_content'] = t('Video of @title', array('@title' => $variables['title']));

  // Build the iframe URL with options query string.
  $variables['url'] = url($protocol . '//www.' . $url_base, array('query' => $query, 'external' => TRUE));
}
