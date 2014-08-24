<?php
/**
 * @file
 * atp_notifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_notifications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function atp_notifications_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function atp_notifications_flag_default_flags() {
  $flags = array();
  // Exported flag: "Notify me about unpublishing".
  $flags['notification_node_auto_unpublish'] = array(
    'entity_type' => 'node',
    'title' => 'Notify me about unpublishing',
    'global' => 0,
    'types' => array(
      0 => 'news',
      1 => 'section',
      2 => 'page',
    ),
    'flag_short' => 'Notify me about unpublishing',
    'flag_long' => 'If some content is scheduled for unpublishing please let me know',
    'flag_message' => 'You will be noticed',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      '1_4_fact' => 0,
      '1_4_l' => 0,
      '1_4_compressed' => 0,
      '1_2_l' => 0,
      '1_2_square' => 0,
      '1_2_h' => 0,
      '1_1_l' => 0,
      'teaser_with_img' => 0,
      'menu_box' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'atp_notifications',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Notify me about changed content".
  $flags['notification_node_changed'] = array(
    'entity_type' => 'node',
    'title' => 'Notify me about changed content',
    'global' => 0,
    'types' => array(
      0 => 'news',
      1 => 'section',
      2 => 'page',
    ),
    'flag_short' => 'Notify me about changed state of node',
    'flag_long' => 'If a node is changed and published please let me know',
    'flag_message' => 'Changed',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      '1_4_fact' => 0,
      '1_4_l' => 0,
      '1_4_compressed' => 0,
      '1_2_l' => 0,
      '1_2_square' => 0,
      '1_2_h' => 0,
      '1_1_l' => 0,
      'teaser_with_img' => 0,
      'menu_box' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'atp_notifications',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Notify me about expiration".
  $flags['notification_node_expiration'] = array(
    'entity_type' => 'node',
    'title' => 'Notify me about expiration',
    'global' => 0,
    'types' => array(
      0 => 'news',
      1 => 'section',
      2 => 'page',
    ),
    'flag_short' => 'Notify me about expiration',
    'flag_long' => 'If some content is expiring please let me know',
    'flag_message' => 'You will be noticed',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => 'You have unsubscribed getting further notices',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      '1_4_fact' => 0,
      '1_4_l' => 0,
      '1_4_compressed' => 0,
      '1_2_l' => 0,
      '1_2_square' => 0,
      '1_2_h' => 0,
      '1_1_l' => 0,
      'teaser_with_img' => 0,
      'menu_box' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'atp_notifications',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
