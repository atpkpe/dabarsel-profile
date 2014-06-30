<?php
/**
 * @file
 * atp_page.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function atp_page_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'text_with_title';
  $multifield->label = 'Text with title';
  $multifield->description = '';
  $export['text_with_title'] = $multifield;

  return $export;
}
