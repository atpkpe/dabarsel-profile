<?php
/**
 * @file
 * atp_section.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atp_section_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_section';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_section';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_section';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_section';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__section';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      '1_4_L' => array(
        'custom_settings' => TRUE,
      ),
      '1_4_H' => array(
        'custom_settings' => TRUE,
      ),
      '3_8_H' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_L' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_H' => array(
        'custom_settings' => TRUE,
      ),
      '3_4_H' => array(
        'custom_settings' => TRUE,
      ),
      '1_1_L' => array(
        'custom_settings' => TRUE,
      ),
      '1_4_l' => array(
        'custom_settings' => TRUE,
      ),
      '1_4_h' => array(
        'custom_settings' => TRUE,
      ),
      '3_8_h' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_l' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_h' => array(
        'custom_settings' => TRUE,
      ),
      '3_4_h' => array(
        'custom_settings' => TRUE,
      ),
      '1_1_l' => array(
        'custom_settings' => TRUE,
      ),
      '1_4_fact' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '-4',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'xmlsitemap' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          '1_4_L' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_4_H' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '3_8_H' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_2_L' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_2_H' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '3_4_H' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_1_L' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_4_l' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_4_h' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '3_8_h' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_2_l' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_2_h' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '3_4_h' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          '1_1_l' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_section';
  $strongarm->value = '1';
  $export['i18n_node_extended_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_section';
  $strongarm->value = array(
    0 => 'required',
  );
  $export['i18n_node_options_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_section';
  $strongarm->value = '2';
  $export['language_content_type_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_section';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-top',
  );
  $export['menu_options_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_section';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_section';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_section';
  $strongarm->value = '1';
  $export['node_preview_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_section';
  $strongarm->value = 0;
  $export['node_submitted_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_section';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'default display' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 1,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'default display' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:section:default_selection';
  $strongarm->value = 'node:section:frontpage:default';
  $export['panelizer_node:section:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:section_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:22:"panelizer_node:section";s:23:"allowed_layout_settings";a:10:{s:8:"flexible";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:13:"site_template";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:section_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:section_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:section_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:section_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:section_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:section_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:section_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_section';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_allow_state_section';
  $strongarm->value = 'approved';
  $export['scheduler_publish_allow_state_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_section';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_section';
  $strongarm->value = 'published';
  $export['scheduler_publish_moderation_state_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_section';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_section';
  $strongarm->value = 0;
  $export['scheduler_publish_required_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_section';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_section';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_default_time_section';
  $strongarm->value = '';
  $export['scheduler_unpublish_default_time_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_section';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_section';
  $strongarm->value = 'published';
  $export['scheduler_unpublish_moderation_state_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_section';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_section';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_section';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_section';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_section'] = $strongarm;

  return $export;
}
