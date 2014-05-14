<?php
/**
 * @file
 * atp_data_deployment.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atp_data_deployment_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/11';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
