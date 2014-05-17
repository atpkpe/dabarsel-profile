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
  $display->layout = 'atp_section';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'row1' => NULL,
      'row3' => NULL,
      'row4' => NULL,
      'row5' => NULL,
      'row2' => NULL,
    ),
    'row2' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5fc08c84-30ee-4420-87e9-603b983d68a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ffc63af1-f51d-490b-87aa-6f930921c714';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_facts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => '1_4_fact',
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
    $pane->uuid = 'ffc63af1-f51d-490b-87aa-6f930921c714';
    $display->content['new-ffc63af1-f51d-490b-87aa-6f930921c714'] = $pane;
    $display->panels['row2'][0] = 'new-ffc63af1-f51d-490b-87aa-6f930921c714';
    $pane = new stdClass();
    $pane->pid = 'new-f754e3f7-0b3f-4395-922e-bccc6b844be6';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_facts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '1',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => '1_4_fact',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f754e3f7-0b3f-4395-922e-bccc6b844be6';
    $display->content['new-f754e3f7-0b3f-4395-922e-bccc6b844be6'] = $pane;
    $display->panels['row2'][1] = 'new-f754e3f7-0b3f-4395-922e-bccc6b844be6';
    $pane = new stdClass();
    $pane->pid = 'new-5759cabd-8bf3-482a-a308-b74d067b4e39';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_facts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '2',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => '1_4_fact',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5759cabd-8bf3-482a-a308-b74d067b4e39';
    $display->content['new-5759cabd-8bf3-482a-a308-b74d067b4e39'] = $pane;
    $display->panels['row2'][2] = 'new-5759cabd-8bf3-482a-a308-b74d067b4e39';
    $pane = new stdClass();
    $pane->pid = 'new-aa4678c9-1089-4125-a1c1-19fb073bd6c4';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_facts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '3',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => '1_4_fact',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'aa4678c9-1089-4125-a1c1-19fb073bd6c4';
    $display->content['new-aa4678c9-1089-4125-a1c1-19fb073bd6c4'] = $pane;
    $display->panels['row2'][3] = 'new-aa4678c9-1089-4125-a1c1-19fb073bd6c4';
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
  $display->layout = 'atp_section';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'area1' => NULL,
      'area2' => NULL,
      'area3' => NULL,
      'quickfacts' => NULL,
      'row1' => NULL,
      'row2' => NULL,
      'row3' => NULL,
      'row4' => NULL,
      'row5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5fc08c84-30ee-4420-87e9-603b983d68a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5e09ba24-8488-455a-8dbb-8e4de167ae60';
    $pane->panel = 'row1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => '1_2_h',
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
    $pane->uuid = '5e09ba24-8488-455a-8dbb-8e4de167ae60';
    $display->content['new-5e09ba24-8488-455a-8dbb-8e4de167ae60'] = $pane;
    $display->panels['row1'][0] = 'new-5e09ba24-8488-455a-8dbb-8e4de167ae60';
    $pane = new stdClass();
    $pane->pid = 'new-aa842a83-c45d-4e13-8e5f-b8e936f3068e';
    $pane->panel = 'row1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '1',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => '1_2_l',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aa842a83-c45d-4e13-8e5f-b8e936f3068e';
    $display->content['new-aa842a83-c45d-4e13-8e5f-b8e936f3068e'] = $pane;
    $display->panels['row1'][1] = 'new-aa842a83-c45d-4e13-8e5f-b8e936f3068e';
    $pane = new stdClass();
    $pane->pid = 'new-6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31';
    $pane->panel = 'row1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_section_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '1',
      'delta_offset' => '2',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => '1_2_l',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31';
    $display->content['new-6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31'] = $pane;
    $display->panels['row1'][2] = 'new-6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31';
    $pane = new stdClass();
    $pane->pid = 'new-28fdbc20-75d8-4c5d-89ba-d735434ce473';
    $pane->panel = 'row2';
    $pane->type = 'panels_mini';
    $pane->subtype = 'four_facts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
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
    $pane->uuid = '28fdbc20-75d8-4c5d-89ba-d735434ce473';
    $display->content['new-28fdbc20-75d8-4c5d-89ba-d735434ce473'] = $pane;
    $display->panels['row2'][0] = 'new-28fdbc20-75d8-4c5d-89ba-d735434ce473';
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
  $display->layout = 'atp_section';
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
    $pane->panel = 'row1';
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
    $display->panels['row1'][0] = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
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
  $display->layout = 'atp_section';
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
    $pane->panel = 'row1';
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
    $display->panels['row1'][0] = 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:section:section_a5:default'] = $panelizer;

  return $export;
}
