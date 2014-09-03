<?php
/**
 * @file
 * atp_faktum.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function atp_faktum_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:faktum:standard_2_col:default';
  $panelizer->title = 'standard_2_col';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'faktum';
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
  $display->layout = 'atp_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'row1' => NULL,
      'row2' => NULL,
      'row3' => NULL,
      'row4' => NULL,
      'row5' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8695b45d-839a-4ef5-a494-472d52635245';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1517fdba-5203-411e-bd03-7b87ef3983c8';
    $pane->panel = 'left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '3',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '1517fdba-5203-411e-bd03-7b87ef3983c8';
    $display->content['new-1517fdba-5203-411e-bd03-7b87ef3983c8'] = $pane;
    $display->panels['left'][0] = 'new-1517fdba-5203-411e-bd03-7b87ef3983c8';
    $pane = new stdClass();
    $pane->pid = 'new-57c3b5d3-f1b5-42c4-9a97-ec78c3767f81';
    $pane->panel = 'left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-top';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-top',
      'parent_mlid' => 0,
      'parent' => 'menu-top:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '3',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '57c3b5d3-f1b5-42c4-9a97-ec78c3767f81';
    $display->content['new-57c3b5d3-f1b5-42c4-9a97-ec78c3767f81'] = $pane;
    $display->panels['left'][1] = 'new-57c3b5d3-f1b5-42c4-9a97-ec78c3767f81';
    $pane = new stdClass();
    $pane->pid = 'new-f5a0e7ed-7d9f-411a-a23b-1ccd5c35b33e';
    $pane->panel = 'row1';
    $pane->type = 'tools';
    $pane->subtype = 'tools';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5a0e7ed-7d9f-411a-a23b-1ccd5c35b33e';
    $display->content['new-f5a0e7ed-7d9f-411a-a23b-1ccd5c35b33e'] = $pane;
    $display->panels['row1'][0] = 'new-f5a0e7ed-7d9f-411a-a23b-1ccd5c35b33e';
    $pane = new stdClass();
    $pane->pid = 'new-8a716ae5-4b8f-4945-9181-30a5904d849a';
    $pane->panel = 'row1';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a716ae5-4b8f-4945-9181-30a5904d849a';
    $display->content['new-8a716ae5-4b8f-4945-9181-30a5904d849a'] = $pane;
    $display->panels['row1'][1] = 'new-8a716ae5-4b8f-4945-9181-30a5904d849a';
    $pane = new stdClass();
    $pane->pid = 'new-053f773e-d534-4c36-a947-d7fac77e2840';
    $pane->panel = 'row2';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '053f773e-d534-4c36-a947-d7fac77e2840';
    $display->content['new-053f773e-d534-4c36-a947-d7fac77e2840'] = $pane;
    $display->panels['row2'][0] = 'new-053f773e-d534-4c36-a947-d7fac77e2840';
    $pane = new stdClass();
    $pane->pid = 'new-e1233d3c-8cc5-4566-ae96-c8948ea7ef4c';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_faktum_published_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => 0,
        'format_type' => 'adapt_long',
        'fromto' => 'both',
        'item_wrapper' => 0,
        'label_wrapper' => 0,
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
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
    $pane->uuid = 'e1233d3c-8cc5-4566-ae96-c8948ea7ef4c';
    $display->content['new-e1233d3c-8cc5-4566-ae96-c8948ea7ef4c'] = $pane;
    $display->panels['row2'][1] = 'new-e1233d3c-8cc5-4566-ae96-c8948ea7ef4c';
    $pane = new stdClass();
    $pane->pid = 'new-6fa7ec0d-ff59-412f-b9dd-b994fbcccaeb';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_faktum_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '6fa7ec0d-ff59-412f-b9dd-b994fbcccaeb';
    $display->content['new-6fa7ec0d-ff59-412f-b9dd-b994fbcccaeb'] = $pane;
    $display->panels['row2'][2] = 'new-6fa7ec0d-ff59-412f-b9dd-b994fbcccaeb';
    $pane = new stdClass();
    $pane->pid = 'new-1d74d69f-606c-432e-ba9e-0ebcac72f0e7';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_faktum_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '1d74d69f-606c-432e-ba9e-0ebcac72f0e7';
    $display->content['new-1d74d69f-606c-432e-ba9e-0ebcac72f0e7'] = $pane;
    $display->panels['row2'][3] = 'new-1d74d69f-606c-432e-ba9e-0ebcac72f0e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:faktum:standard_2_col:default'] = $panelizer;

  return $export;
}
