<?php
/**
 * @file
 * atp_multifields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_multifields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
