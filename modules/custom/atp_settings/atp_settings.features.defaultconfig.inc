<?php
/**
 * @file
 * atp_settings.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function atp_settings_defaultconfig_features() {
  return array(
    'atp_settings' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function atp_settings_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_atp_long';
  $strongarm->value = 'd. F Y \\k\\l. G:i';
  $export['date_format_atp_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_atp_short';
  $strongarm->value = '\\<\\s\\p\\a\\n\\>d F\\<\\/\\s\\p\\a\\n\\> Y';
  $export['date_format_atp_short'] = $strongarm;

  return $export;
}
