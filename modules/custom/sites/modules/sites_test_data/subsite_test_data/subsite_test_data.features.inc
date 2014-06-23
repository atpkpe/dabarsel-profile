<?php
/**
 * @file
 * subsite_test_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subsite_test_data_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
}
