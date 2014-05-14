<?php
/**
 * @file
 * atp_section.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function atp_section_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:section:frontpage:default';
  $panelizer->title = 'Frontpage';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5fc08c84-30ee-4420-87e9-603b983d68a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '4',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $display->content['new-e92df8fe-fbe5-4871-bff1-c8c3452b6508'] = $pane;
    $display->panels['middle'][0] = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:section:frontpage:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:section:section_a3:default';
  $panelizer->title = 'Section A3';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5fc08c84-30ee-4420-87e9-603b983d68a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $display->content['new-e92df8fe-fbe5-4871-bff1-c8c3452b6508'] = $pane;
    $display->panels['middle'][0] = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:section:section_a3:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:section:section_a4:default';
  $panelizer->title = 'Section A4';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5fc08c84-30ee-4420-87e9-603b983d68a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $display->content['new-e92df8fe-fbe5-4871-bff1-c8c3452b6508'] = $pane;
    $display->panels['middle'][0] = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:section:section_a4:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:section:section_a5:default';
  $panelizer->title = 'Section A5';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5fc08c84-30ee-4420-87e9-603b983d68a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e92df8fe-fbe5-4871-bff1-c8c3452b6508';
    $display->content['new-e92df8fe-fbe5-4871-bff1-c8c3452b6508'] = $pane;
    $display->panels['middle'][0] = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:section:section_a5:default'] = $panelizer;

  return $export;
}
