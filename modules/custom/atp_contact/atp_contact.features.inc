<?php
/**
 * @file
 * atp_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_contact_ctools_plugin_api($module = NULL, $api = NULL) {
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
function atp_contact_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Kontakt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
