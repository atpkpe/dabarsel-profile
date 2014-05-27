<?php
/**
 * @file
 * atp_multifields.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function atp_multifields_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'tagged_entity_reference';
  $multifield->label = 'tagged_entity_reference';
  $multifield->description = 'tagged_entity_reference';
  $export['tagged_entity_reference'] = $multifield;

  return $export;
}
