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
    $pane->pid = 'new-21980f8a-b76a-4684-97e9-c732f803a3e6';
    $pane->panel = 'row1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '21980f8a-b76a-4684-97e9-c732f803a3e6';
    $display->content['new-21980f8a-b76a-4684-97e9-c732f803a3e6'] = $pane;
    $display->panels['row1'][1] = 'new-21980f8a-b76a-4684-97e9-c732f803a3e6';
    $pane = new stdClass();
    $pane->pid = 'new-34f6df6e-5adf-42c8-ba47-7ab69367c5c8';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_publishdate';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34f6df6e-5adf-42c8-ba47-7ab69367c5c8';
    $display->content['new-34f6df6e-5adf-42c8-ba47-7ab69367c5c8'] = $pane;
    $display->panels['row2'][0] = 'new-34f6df6e-5adf-42c8-ba47-7ab69367c5c8';
    $pane = new stdClass();
    $pane->pid = 'new-4ea42f67-5e3b-4506-9239-4650d552990f';
    $pane->panel = 'row2';
    $pane->type = 'token';
    $pane->subtype = 'node:field-page-summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4ea42f67-5e3b-4506-9239-4650d552990f';
    $display->content['new-4ea42f67-5e3b-4506-9239-4650d552990f'] = $pane;
    $display->panels['row2'][1] = 'new-4ea42f67-5e3b-4506-9239-4650d552990f';
    $pane = new stdClass();
    $pane->pid = 'new-ef2c6489-b099-4570-b568-f51634d9da92';
    $pane->panel = 'row2';
    $pane->type = 'token';
    $pane->subtype = 'node:field-news-body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
    $pane->uuid = 'ef2c6489-b099-4570-b568-f51634d9da92';
    $display->content['new-ef2c6489-b099-4570-b568-f51634d9da92'] = $pane;
    $display->panels['row2'][2] = 'new-ef2c6489-b099-4570-b568-f51634d9da92';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:standard_2_col:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:standard_2_column:default';
  $panelizer->title = 'standard_2_column';
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
  $display->uuid = 'd5949dd9-05ed-4296-9c99-d45732150395';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ba384395-f52e-4b12-a212-d278ffd20f55';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba384395-f52e-4b12-a212-d278ffd20f55';
    $display->content['new-ba384395-f52e-4b12-a212-d278ffd20f55'] = $pane;
    $display->panels['left'][0] = 'new-ba384395-f52e-4b12-a212-d278ffd20f55';
    $pane = new stdClass();
    $pane->pid = 'new-ed573dbd-6ff3-4645-bd1b-fe16cb6b7cfb';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ed573dbd-6ff3-4645-bd1b-fe16cb6b7cfb';
    $display->content['new-ed573dbd-6ff3-4645-bd1b-fe16cb6b7cfb'] = $pane;
    $display->panels['left'][1] = 'new-ed573dbd-6ff3-4645-bd1b-fe16cb6b7cfb';
    $pane = new stdClass();
    $pane->pid = 'new-24e76028-d1ec-4495-813d-17870a8703f3';
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
    $pane->uuid = '24e76028-d1ec-4495-813d-17870a8703f3';
    $display->content['new-24e76028-d1ec-4495-813d-17870a8703f3'] = $pane;
    $display->panels['row1'][0] = 'new-24e76028-d1ec-4495-813d-17870a8703f3';
    $pane = new stdClass();
    $pane->pid = 'new-e2c28735-ac1b-49b3-bedb-910889320f7b';
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
    $pane->uuid = 'e2c28735-ac1b-49b3-bedb-910889320f7b';
    $display->content['new-e2c28735-ac1b-49b3-bedb-910889320f7b'] = $pane;
    $display->panels['row1'][1] = 'new-e2c28735-ac1b-49b3-bedb-910889320f7b';
    $pane = new stdClass();
    $pane->pid = 'new-df5e1a55-b850-4e41-ad4f-6be5e637694e';
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
    $pane->uuid = 'df5e1a55-b850-4e41-ad4f-6be5e637694e';
    $display->content['new-df5e1a55-b850-4e41-ad4f-6be5e637694e'] = $pane;
    $display->panels['row2'][0] = 'new-df5e1a55-b850-4e41-ad4f-6be5e637694e';
    $pane = new stdClass();
    $pane->pid = 'new-9625ba9e-c7e5-43c4-849a-9a32b8e6ef8c';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_publishdate';
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
        'format_type' => 'atp_long',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'date',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9625ba9e-c7e5-43c4-849a-9a32b8e6ef8c';
    $display->content['new-9625ba9e-c7e5-43c4-849a-9a32b8e6ef8c'] = $pane;
    $display->panels['row2'][1] = 'new-9625ba9e-c7e5-43c4-849a-9a32b8e6ef8c';
    $pane = new stdClass();
    $pane->pid = 'new-ef95f54e-2d00-42f8-8893-00f2c9034173';
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
      'formatter_settings' => array(
        'field_wrapper' => 0,
        'item_wrapper' => 0,
        'label_wrapper' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
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
    $pane->uuid = 'ef95f54e-2d00-42f8-8893-00f2c9034173';
    $display->content['new-ef95f54e-2d00-42f8-8893-00f2c9034173'] = $pane;
    $display->panels['row2'][2] = 'new-ef95f54e-2d00-42f8-8893-00f2c9034173';
    $pane = new stdClass();
    $pane->pid = 'new-df95ddae-e384-4029-9821-8330ecbeebfa';
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
      'formatter_settings' => array(
        'field_wrapper' => 0,
        'item_wrapper' => 0,
        'label_wrapper' => 0,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'df95ddae-e384-4029-9821-8330ecbeebfa';
    $display->content['new-df95ddae-e384-4029-9821-8330ecbeebfa'] = $pane;
    $display->panels['row2'][3] = 'new-df95ddae-e384-4029-9821-8330ecbeebfa';
    $pane = new stdClass();
    $pane->pid = 'new-77a8d05e-1cb3-44ad-ab74-7c91ad13b9cd';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_image';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => 0,
        'image_link' => '',
        'image_style' => '',
        'item_wrapper' => 0,
        'label_wrapper' => 0,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '77a8d05e-1cb3-44ad-ab74-7c91ad13b9cd';
    $display->content['new-77a8d05e-1cb3-44ad-ab74-7c91ad13b9cd'] = $pane;
    $display->panels['row2'][4] = 'new-77a8d05e-1cb3-44ad-ab74-7c91ad13b9cd';
    $pane = new stdClass();
    $pane->pid = 'new-5c9cb62b-99f4-44ef-931d-efad6eded157';
    $pane->panel = 'row2';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5c9cb62b-99f4-44ef-931d-efad6eded157';
    $display->content['new-5c9cb62b-99f4-44ef-931d-efad6eded157'] = $pane;
    $display->panels['row2'][5] = 'new-5c9cb62b-99f4-44ef-931d-efad6eded157';
    $pane = new stdClass();
    $pane->pid = 'new-b149e17c-d6e2-4c23-b98e-d8e71893ae3b';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_categories';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => 0,
        'item_wrapper' => 0,
        'label_wrapper' => 0,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b149e17c-d6e2-4c23-b98e-d8e71893ae3b';
    $display->content['new-b149e17c-d6e2-4c23-b98e-d8e71893ae3b'] = $pane;
    $display->panels['row2'][6] = 'new-b149e17c-d6e2-4c23-b98e-d8e71893ae3b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:standard_2_column:default'] = $panelizer;

  return $export;
}
