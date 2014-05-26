<?php
/**
 * @file
 * atp_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function atp_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:category_layout_a:default';
  $panelizer->title = 'Category layout A';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
      'center' => NULL,
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
  $display->uuid = '20b88c24-8bb0-4e4b-bd9a-5a7a5164609f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a795505c-7453-470a-aac5-7e2f3470055a';
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
    $pane->uuid = 'a795505c-7453-470a-aac5-7e2f3470055a';
    $display->content['new-a795505c-7453-470a-aac5-7e2f3470055a'] = $pane;
    $display->panels['left'][0] = 'new-a795505c-7453-470a-aac5-7e2f3470055a';
    $pane = new stdClass();
    $pane->pid = 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
    $display->content['new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923'] = $pane;
    $display->panels['row1'][0] = 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
    $pane = new stdClass();
    $pane->pid = 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $pane->panel = 'row2';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $display->content['new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f'] = $pane;
    $display->panels['row2'][0] = 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $pane = new stdClass();
    $pane->pid = 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => '0',
        'item_wrapper' => '0',
        'label_wrapper' => '0',
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
    $pane->uuid = '0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $display->content['new-0889e315-62a4-4384-b5bc-550e9bfac0f0'] = $pane;
    $display->panels['row2'][1] = 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $pane = new stdClass();
    $pane->pid = 'new-658ff852-c137-4d20-ab15-832d4f974813';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => '0',
        'item_wrapper' => '0',
        'label_wrapper' => '0',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '658ff852-c137-4d20-ab15-832d4f974813';
    $display->content['new-658ff852-c137-4d20-ab15-832d4f974813'] = $pane;
    $display->panels['row2'][2] = 'new-658ff852-c137-4d20-ab15-832d4f974813';
    $pane = new stdClass();
    $pane->pid = 'new-531e8ab7-4a2d-43fa-994f-ddc528e7f553';
    $pane->panel = 'row3';
    $pane->type = 'views_panes';
    $pane->subtype = 'category_related-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '531e8ab7-4a2d-43fa-994f-ddc528e7f553';
    $display->content['new-531e8ab7-4a2d-43fa-994f-ddc528e7f553'] = $pane;
    $display->panels['row3'][0] = 'new-531e8ab7-4a2d-43fa-994f-ddc528e7f553';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-658ff852-c137-4d20-ab15-832d4f974813';
  $panelizer->display = $display;
  $export['node:page:category_layout_a:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:category_layout_d:default';
  $panelizer->title = 'Category layout D';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
      'center' => NULL,
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
  $display->uuid = '20b88c24-8bb0-4e4b-bd9a-5a7a5164609f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a795505c-7453-470a-aac5-7e2f3470055a';
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
    $pane->uuid = 'a795505c-7453-470a-aac5-7e2f3470055a';
    $display->content['new-a795505c-7453-470a-aac5-7e2f3470055a'] = $pane;
    $display->panels['left'][0] = 'new-a795505c-7453-470a-aac5-7e2f3470055a';
    $pane = new stdClass();
    $pane->pid = 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
    $display->content['new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923'] = $pane;
    $display->panels['row1'][0] = 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
    $pane = new stdClass();
    $pane->pid = 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $pane->panel = 'row2';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $display->content['new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f'] = $pane;
    $display->panels['row2'][0] = 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $pane = new stdClass();
    $pane->pid = 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => '0',
        'item_wrapper' => '0',
        'label_wrapper' => '0',
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
    $pane->uuid = '0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $display->content['new-0889e315-62a4-4384-b5bc-550e9bfac0f0'] = $pane;
    $display->panels['row2'][1] = 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $pane = new stdClass();
    $pane->pid = 'new-658ff852-c137-4d20-ab15-832d4f974813';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => '0',
        'item_wrapper' => '0',
        'label_wrapper' => '0',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '658ff852-c137-4d20-ab15-832d4f974813';
    $display->content['new-658ff852-c137-4d20-ab15-832d4f974813'] = $pane;
    $display->panels['row2'][2] = 'new-658ff852-c137-4d20-ab15-832d4f974813';
    $pane = new stdClass();
    $pane->pid = 'new-f4f5f88f-88e3-498d-ac69-00e0dc7f8b57';
    $pane->panel = 'row3';
    $pane->type = 'views_panes';
    $pane->subtype = 'category_related-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4f5f88f-88e3-498d-ac69-00e0dc7f8b57';
    $display->content['new-f4f5f88f-88e3-498d-ac69-00e0dc7f8b57'] = $pane;
    $display->panels['row3'][0] = 'new-f4f5f88f-88e3-498d-ac69-00e0dc7f8b57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-658ff852-c137-4d20-ab15-832d4f974813';
  $panelizer->display = $display;
  $export['node:page:category_layout_d:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:standard_2_column:default';
  $panelizer->title = 'Standard 2 column';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
      'center' => NULL,
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
  $display->uuid = '20b88c24-8bb0-4e4b-bd9a-5a7a5164609f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a795505c-7453-470a-aac5-7e2f3470055a';
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
    $pane->uuid = 'a795505c-7453-470a-aac5-7e2f3470055a';
    $display->content['new-a795505c-7453-470a-aac5-7e2f3470055a'] = $pane;
    $display->panels['left'][0] = 'new-a795505c-7453-470a-aac5-7e2f3470055a';
    $pane = new stdClass();
    $pane->pid = 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
    $display->content['new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923'] = $pane;
    $display->panels['row1'][0] = 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923';
    $pane = new stdClass();
    $pane->pid = 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $pane->panel = 'row2';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $display->content['new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f'] = $pane;
    $display->panels['row2'][0] = 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f';
    $pane = new stdClass();
    $pane->pid = 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => '0',
        'item_wrapper' => '0',
        'label_wrapper' => '0',
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
    $pane->uuid = '0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $display->content['new-0889e315-62a4-4384-b5bc-550e9bfac0f0'] = $pane;
    $display->panels['row2'][1] = 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0';
    $pane = new stdClass();
    $pane->pid = 'new-658ff852-c137-4d20-ab15-832d4f974813';
    $pane->panel = 'row2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_wrapper' => '0',
        'item_wrapper' => '0',
        'label_wrapper' => '0',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '658ff852-c137-4d20-ab15-832d4f974813';
    $display->content['new-658ff852-c137-4d20-ab15-832d4f974813'] = $pane;
    $display->panels['row2'][2] = 'new-658ff852-c137-4d20-ab15-832d4f974813';
    $pane = new stdClass();
    $pane->pid = 'new-ed8b4b9b-d34e-45d4-9359-21c5cc8adc2c';
    $pane->panel = 'row3';
    $pane->type = 'news_list';
    $pane->subtype = 'news_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'list_type' => 'filtered',
      'categories' => array(
        3 => 0,
        4 => 0,
        1 => 0,
        2 => 0,
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
    $pane->uuid = 'ed8b4b9b-d34e-45d4-9359-21c5cc8adc2c';
    $display->content['new-ed8b4b9b-d34e-45d4-9359-21c5cc8adc2c'] = $pane;
    $display->panels['row3'][0] = 'new-ed8b4b9b-d34e-45d4-9359-21c5cc8adc2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-658ff852-c137-4d20-ab15-832d4f974813';
  $panelizer->display = $display;
  $export['node:page:standard_2_column:default'] = $panelizer;

  return $export;
}
