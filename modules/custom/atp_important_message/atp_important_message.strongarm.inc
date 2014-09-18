<?php
/**
 * @file
 * atp_important_message.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atp_important_message_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_important_message';
  $strongarm->value = 'edit-scheduler';
  $export['additional_settings__active_tab_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_important_message';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_important_message';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_important_message';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__important_message';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      '1_4_fact' => array(
        'custom_settings' => FALSE,
      ),
      '1_4_l' => array(
        'custom_settings' => FALSE,
      ),
      '1_4_compressed' => array(
        'custom_settings' => FALSE,
      ),
      '3_8_h' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_l' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_square' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_h' => array(
        'custom_settings' => FALSE,
      ),
      '3_4_h' => array(
        'custom_settings' => FALSE,
      ),
      '1_1_l' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_with_img' => array(
        'custom_settings' => FALSE,
      ),
      'menu_box' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'workbench_access' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_important_message';
  $strongarm->value = '0';
  $export['language_content_type_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_important_message';
  $strongarm->value = array();
  $export['menu_options_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_important_message';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_important_message';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_important_message';
  $strongarm->value = '0';
  $export['node_preview_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_important_message';
  $strongarm->value = 0;
  $export['node_submitted_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_allow_state_important_message';
  $strongarm->value = 'approved';
  $export['scheduler_publish_allow_state_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_important_message';
  $strongarm->value = 'published';
  $export['scheduler_publish_moderation_state_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_default_time_important_message';
  $strongarm->value = '';
  $export['scheduler_unpublish_default_time_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_important_message';
  $strongarm->value = 'draft';
  $export['scheduler_unpublish_moderation_state_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_important_message';
  $strongarm->value = 1;
  $export['workbench_access_node_type_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_important_message';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_important_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_important_message';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_important_message'] = $strongarm;

  return $export;
}
