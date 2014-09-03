<?php
/**
 * @file
 * atp_important_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_important_message_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function atp_important_message_node_info() {
  $items = array(
    'important_message' => array(
      'name' => t('Important message'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => '',
    ),
  );
  return $items;
}
