<?php
/**
 * @file
 * atp_faktum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_faktum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function atp_faktum_node_info() {
  $items = array(
    'faktum' => array(
      'name' => t('Faktum'),
      'base' => 'node_content',
      'description' => t('Indholdstype der bruges til nyhedsbrevet Faktum.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
