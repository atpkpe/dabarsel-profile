<?php
/**
 * @file
 * atp_notifications.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atp_notifications_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_date_entry_elements';
  $strongarm->value = '1';
  $export['node_expire_date_entry_elements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_enabled_news';
  $strongarm->value = 1;
  $export['node_expire_enabled_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_enabled_page';
  $strongarm->value = 1;
  $export['node_expire_enabled_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_enabled_section';
  $strongarm->value = 1;
  $export['node_expire_enabled_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_handle_content_expiry';
  $strongarm->value = '1';
  $export['node_expire_handle_content_expiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_max_news';
  $strongarm->value = '';
  $export['node_expire_max_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_max_page';
  $strongarm->value = '';
  $export['node_expire_max_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_max_section';
  $strongarm->value = '';
  $export['node_expire_max_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_news';
  $strongarm->value = '';
  $export['node_expire_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_ntypes';
  $strongarm->value = array(
    'page' => array(
      'enabled' => 1,
      'default' => '',
      'max' => '',
      'required' => 0,
      'update_expiry_start' => '1',
      'update_expiry_interval' => '4',
      'update_expiry_multiplier' => '1',
    ),
    'section' => array(
      'enabled' => 1,
      'default' => '',
      'max' => '',
      'required' => 0,
      'update_expiry_start' => '1',
      'update_expiry_interval' => '4',
      'update_expiry_multiplier' => '1',
    ),
    'news' => array(
      'enabled' => 1,
      'default' => '',
      'max' => '',
      'required' => 0,
      'update_expiry_start' => '1',
      'update_expiry_interval' => '4',
      'update_expiry_multiplier' => '1',
    ),
  );
  $export['node_expire_ntypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_page';
  $strongarm->value = '';
  $export['node_expire_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_past_date_allowed';
  $strongarm->value = 1;
  $export['node_expire_past_date_allowed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_required_news';
  $strongarm->value = 0;
  $export['node_expire_required_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_required_page';
  $strongarm->value = 0;
  $export['node_expire_required_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_required_section';
  $strongarm->value = 0;
  $export['node_expire_required_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_section';
  $strongarm->value = '';
  $export['node_expire_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_interval_news';
  $strongarm->value = '4';
  $export['node_expire_update_expiry_interval_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_interval_page';
  $strongarm->value = '4';
  $export['node_expire_update_expiry_interval_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_interval_section';
  $strongarm->value = '4';
  $export['node_expire_update_expiry_interval_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_multiplier_news';
  $strongarm->value = '1';
  $export['node_expire_update_expiry_multiplier_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_multiplier_page';
  $strongarm->value = '1';
  $export['node_expire_update_expiry_multiplier_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_multiplier_section';
  $strongarm->value = '1';
  $export['node_expire_update_expiry_multiplier_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_start_news';
  $strongarm->value = '1';
  $export['node_expire_update_expiry_start_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_start_page';
  $strongarm->value = '1';
  $export['node_expire_update_expiry_start_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_expire_update_expiry_start_section';
  $strongarm->value = '1';
  $export['node_expire_update_expiry_start_section'] = $strongarm;

  return $export;
}
