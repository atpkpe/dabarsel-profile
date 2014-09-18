<?php
/**
 * @file
 * atp_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function atp_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:standard_2_col:default';
  $panelizer->title = 'standard_2_col';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
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
  $display->uuid = 'bad13f06-8667-4db2-b4f9-f57c77954cf3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5bddf054-9bde-4f92-af2f-0fcec2bf29f2';
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
    $pane->uuid = '5bddf054-9bde-4f92-af2f-0fcec2bf29f2';
    $display->content['new-5bddf054-9bde-4f92-af2f-0fcec2bf29f2'] = $pane;
    $display->panels['left'][0] = 'new-5bddf054-9bde-4f92-af2f-0fcec2bf29f2';
    $pane = new stdClass();
    $pane->pid = 'new-d7df40e6-ae88-485e-8a25-3e3219f164c1';
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
    $pane->uuid = 'd7df40e6-ae88-485e-8a25-3e3219f164c1';
    $display->content['new-d7df40e6-ae88-485e-8a25-3e3219f164c1'] = $pane;
    $display->panels['left'][1] = 'new-d7df40e6-ae88-485e-8a25-3e3219f164c1';
    $pane = new stdClass();
    $pane->pid = 'new-2917205d-b393-4459-b46c-d8f29d979d79';
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
    $pane->uuid = '2917205d-b393-4459-b46c-d8f29d979d79';
    $display->content['new-2917205d-b393-4459-b46c-d8f29d979d79'] = $pane;
    $display->panels['row1'][0] = 'new-2917205d-b393-4459-b46c-d8f29d979d79';
    $pane = new stdClass();
    $pane->pid = 'new-a9c20e87-f889-473f-baed-e77137e25e15';
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
    $pane->uuid = 'a9c20e87-f889-473f-baed-e77137e25e15';
    $display->content['new-a9c20e87-f889-473f-baed-e77137e25e15'] = $pane;
    $display->panels['row1'][1] = 'new-a9c20e87-f889-473f-baed-e77137e25e15';
    $pane = new stdClass();
    $pane->pid = 'new-21980f8a-b76a-4684-97e9-c732f803a3e6';
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
    $pane->uuid = '21980f8a-b76a-4684-97e9-c732f803a3e6';
    $display->content['new-21980f8a-b76a-4684-97e9-c732f803a3e6'] = $pane;
    $display->panels['row2'][0] = 'new-21980f8a-b76a-4684-97e9-c732f803a3e6';
    $pane = new stdClass();
    $pane->pid = 'new-34f6df6e-5adf-42c8-ba47-7ab69367c5c8';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_published_date';
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
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'date',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '34f6df6e-5adf-42c8-ba47-7ab69367c5c8';
    $display->content['new-34f6df6e-5adf-42c8-ba47-7ab69367c5c8'] = $pane;
    $display->panels['row2'][1] = 'new-34f6df6e-5adf-42c8-ba47-7ab69367c5c8';
    $pane = new stdClass();
    $pane->pid = 'new-df776a77-b7b3-41e0-84df-86fdf7b94438';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_summary';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'summary',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df776a77-b7b3-41e0-84df-86fdf7b94438';
    $display->content['new-df776a77-b7b3-41e0-84df-86fdf7b94438'] = $pane;
    $display->panels['row2'][2] = 'new-df776a77-b7b3-41e0-84df-86fdf7b94438';
    $pane = new stdClass();
    $pane->pid = 'new-bb23791d-8137-4773-9165-b0f99bbc7d88';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_body';
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
    $pane->uuid = 'bb23791d-8137-4773-9165-b0f99bbc7d88';
    $display->content['new-bb23791d-8137-4773-9165-b0f99bbc7d88'] = $pane;
    $display->panels['row2'][3] = 'new-bb23791d-8137-4773-9165-b0f99bbc7d88';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:standard_2_col:default'] = $panelizer;

  return $export;
}
