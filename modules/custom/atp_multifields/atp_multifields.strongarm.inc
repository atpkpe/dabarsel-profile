<?php
/**
 * @file
 * atp_multifields.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atp_multifields_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_multifield__tagged_entity_reference';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_multifield__tagged_entity_reference'] = $strongarm;

  return $export;
}
