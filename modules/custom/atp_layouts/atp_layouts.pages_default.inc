<?php
/**
 * @file
 * atp_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function atp_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Gallery preview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'atp_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1' => NULL,
      'row2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'eb8d5fd7-6699-4efd-a4c2-701d6bed7788';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-717c701a-5733-4ab5-9df7-4a87e3aad248';
    $pane->panel = 'row1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Vis galleri',
      'body' => '<p>[[gallery:%node:nid]]</p><p>&nbsp;</p>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '717c701a-5733-4ab5-9df7-4a87e3aad248';
    $display->content['new-717c701a-5733-4ab5-9df7-4a87e3aad248'] = $pane;
    $display->panels['row1'][0] = 'new-717c701a-5733-4ab5-9df7-4a87e3aad248';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-717c701a-5733-4ab5-9df7-4a87e3aad248';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'header-bottom' => NULL,
      'bottom' => NULL,
      'mobile-menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ca7cb6c0-cb12-4d2e-95f9-d57f4c748070';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3f98bad1-e744-4cf3-afeb-a4f92f707a72';
    $pane->panel = 'bottom';
    $pane->type = 'site_bottom';
    $pane->subtype = 'site_bottom';
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
    $pane->uuid = '3f98bad1-e744-4cf3-afeb-a4f92f707a72';
    $display->content['new-3f98bad1-e744-4cf3-afeb-a4f92f707a72'] = $pane;
    $display->panels['bottom'][0] = 'new-3f98bad1-e744-4cf3-afeb-a4f92f707a72';
    $pane = new stdClass();
    $pane->pid = 'new-7c335331-d116-4f75-938e-cf613c87f493';
    $pane->panel = 'bottom';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-bottom-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sites_subsite',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'menu-bottom-menu',
      'parent_mlid' => 0,
      'parent' => 'menu-bottom-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bottom-menu',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c335331-d116-4f75-938e-cf613c87f493';
    $display->content['new-7c335331-d116-4f75-938e-cf613c87f493'] = $pane;
    $display->panels['bottom'][1] = 'new-7c335331-d116-4f75-938e-cf613c87f493';
    $pane = new stdClass();
    $pane->pid = 'new-0207cc58-2f42-4508-a661-a58414527c06';
    $pane->panel = 'footer';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sites_subsite',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0207cc58-2f42-4508-a661-a58414527c06';
    $display->content['new-0207cc58-2f42-4508-a661-a58414527c06'] = $pane;
    $display->panels['footer'][0] = 'new-0207cc58-2f42-4508-a661-a58414527c06';
    $pane = new stdClass();
    $pane->pid = 'new-9942472e-1bdc-4d66-bfc1-48260c5b7bdf';
    $pane->panel = 'footer';
    $pane->type = 'site_footer_text';
    $pane->subtype = 'site_footer_text';
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
    $pane->uuid = '9942472e-1bdc-4d66-bfc1-48260c5b7bdf';
    $display->content['new-9942472e-1bdc-4d66-bfc1-48260c5b7bdf'] = $pane;
    $display->panels['footer'][1] = 'new-9942472e-1bdc-4d66-bfc1-48260c5b7bdf';
    $pane = new stdClass();
    $pane->pid = 'new-9d6986fe-dde2-4e03-99f9-ecfa5148a703';
    $pane->panel = 'footer';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-footer';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sites_subsite',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'menu-footer',
      'parent_mlid' => 0,
      'parent' => 'menu-footer:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'shortcuts',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9d6986fe-dde2-4e03-99f9-ecfa5148a703';
    $display->content['new-9d6986fe-dde2-4e03-99f9-ecfa5148a703'] = $pane;
    $display->panels['footer'][2] = 'new-9d6986fe-dde2-4e03-99f9-ecfa5148a703';
    $pane = new stdClass();
    $pane->pid = 'new-5c8dd74f-5eba-4a46-b233-d2a7a88e7715';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '5c8dd74f-5eba-4a46-b233-d2a7a88e7715';
    $display->content['new-5c8dd74f-5eba-4a46-b233-d2a7a88e7715'] = $pane;
    $display->panels['header'][0] = 'new-5c8dd74f-5eba-4a46-b233-d2a7a88e7715';
    $pane = new stdClass();
    $pane->pid = 'new-0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sites_language_switcher',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'languages',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03';
    $display->content['new-0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03'] = $pane;
    $display->panels['header'][1] = 'new-0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03';
    $pane = new stdClass();
    $pane->pid = 'new-dc7776ed-32a3-43c8-8ab6-3fd5567b121e';
    $pane->panel = 'header';
    $pane->type = 'site_contact';
    $pane->subtype = 'site_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dc7776ed-32a3-43c8-8ab6-3fd5567b121e';
    $display->content['new-dc7776ed-32a3-43c8-8ab6-3fd5567b121e'] = $pane;
    $display->panels['header'][2] = 'new-dc7776ed-32a3-43c8-8ab6-3fd5567b121e';
    $pane = new stdClass();
    $pane->pid = 'new-8957f3f3-3afc-46d7-98e0-c7a8d4d0d5c5';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8957f3f3-3afc-46d7-98e0-c7a8d4d0d5c5';
    $display->content['new-8957f3f3-3afc-46d7-98e0-c7a8d4d0d5c5'] = $pane;
    $display->panels['header'][3] = 'new-8957f3f3-3afc-46d7-98e0-c7a8d4d0d5c5';
    $pane = new stdClass();
    $pane->pid = 'new-715c5776-932e-4d54-b580-5e80c3111971';
    $pane->panel = 'header';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-top';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sites_subsite',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'menu-top',
      'parent_mlid' => 0,
      'parent' => 'menu-top:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
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
    $pane->css = array(
      'css_id' => 'top-menu',
      'css_class' => 'top-menu',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '715c5776-932e-4d54-b580-5e80c3111971';
    $display->content['new-715c5776-932e-4d54-b580-5e80c3111971'] = $pane;
    $display->panels['header'][4] = 'new-715c5776-932e-4d54-b580-5e80c3111971';
    $pane = new stdClass();
    $pane->pid = 'new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
    $pane->panel = 'header';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sites_subsite',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
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
    $pane->css = array(
      'css_id' => 'main-menu',
      'css_class' => 'main-menu',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
    $display->content['new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84'] = $pane;
    $display->panels['header'][5] = 'new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
    $pane = new stdClass();
    $pane->pid = 'new-ac2cc5e7-af62-4f23-99dc-12b78444913e';
    $pane->panel = 'header';
    $pane->type = 'site_header';
    $pane->subtype = 'site_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ac2cc5e7-af62-4f23-99dc-12b78444913e';
    $display->content['new-ac2cc5e7-af62-4f23-99dc-12b78444913e'] = $pane;
    $display->panels['header'][6] = 'new-ac2cc5e7-af62-4f23-99dc-12b78444913e';
    $pane = new stdClass();
    $pane->pid = 'new-17a620bf-0997-4e75-ac1f-3381aec47aa5';
    $pane->panel = 'header-bottom';
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
      'level' => '2',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'level-2',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17a620bf-0997-4e75-ac1f-3381aec47aa5';
    $display->content['new-17a620bf-0997-4e75-ac1f-3381aec47aa5'] = $pane;
    $display->panels['header-bottom'][0] = 'new-17a620bf-0997-4e75-ac1f-3381aec47aa5';
    $pane = new stdClass();
    $pane->pid = 'new-fb0a8b59-9943-447f-8cc9-38d4e35c9acd';
    $pane->panel = 'header-bottom';
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
      'level' => '2',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'level-2',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb0a8b59-9943-447f-8cc9-38d4e35c9acd';
    $display->content['new-fb0a8b59-9943-447f-8cc9-38d4e35c9acd'] = $pane;
    $display->panels['header-bottom'][1] = 'new-fb0a8b59-9943-447f-8cc9-38d4e35c9acd';
    $pane = new stdClass();
    $pane->pid = 'new-99d0f6c5-35ec-491b-98b0-9953a5f28c5c';
    $pane->panel = 'header-bottom';
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
      'level' => '2',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'show-mobile level-2-3',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '99d0f6c5-35ec-491b-98b0-9953a5f28c5c';
    $display->content['new-99d0f6c5-35ec-491b-98b0-9953a5f28c5c'] = $pane;
    $display->panels['header-bottom'][2] = 'new-99d0f6c5-35ec-491b-98b0-9953a5f28c5c';
    $pane = new stdClass();
    $pane->pid = 'new-8faca364-aa62-4782-9f05-b16ac67320b4';
    $pane->panel = 'main';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
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
    $pane->uuid = '8faca364-aa62-4782-9f05-b16ac67320b4';
    $display->content['new-8faca364-aa62-4782-9f05-b16ac67320b4'] = $pane;
    $display->panels['main'][0] = 'new-8faca364-aa62-4782-9f05-b16ac67320b4';
    $pane = new stdClass();
    $pane->pid = 'new-e4057484-8fc3-4f2a-9276-57d382645c93';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
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
    $pane->uuid = 'e4057484-8fc3-4f2a-9276-57d382645c93';
    $display->content['new-e4057484-8fc3-4f2a-9276-57d382645c93'] = $pane;
    $display->panels['main'][1] = 'new-e4057484-8fc3-4f2a-9276-57d382645c93';
    $pane = new stdClass();
    $pane->pid = 'new-3c22c84e-8070-48b7-87a4-f7bc819ad4a5';
    $pane->panel = 'main';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
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
    $pane->uuid = '3c22c84e-8070-48b7-87a4-f7bc819ad4a5';
    $display->content['new-3c22c84e-8070-48b7-87a4-f7bc819ad4a5'] = $pane;
    $display->panels['main'][2] = 'new-3c22c84e-8070-48b7-87a4-f7bc819ad4a5';
    $pane = new stdClass();
    $pane->pid = 'new-33237ca7-4c27-44ca-90ac-b22c2c298e43';
    $pane->panel = 'mobile-menu';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => 'Mobil main menu',
      'level' => '1',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-main',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33237ca7-4c27-44ca-90ac-b22c2c298e43';
    $display->content['new-33237ca7-4c27-44ca-90ac-b22c2c298e43'] = $pane;
    $display->panels['mobile-menu'][0] = 'new-33237ca7-4c27-44ca-90ac-b22c2c298e43';
    $pane = new stdClass();
    $pane->pid = 'new-2de66bf1-9366-4de5-b5f5-3bd8c655cad9';
    $pane->panel = 'mobile-menu';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-top';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-top',
      'parent_mlid' => 0,
      'parent' => 'menu-top:0',
      'title_link' => 0,
      'admin_title' => 'Mobil topmenu',
      'level' => '1',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-top',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2de66bf1-9366-4de5-b5f5-3bd8c655cad9';
    $display->content['new-2de66bf1-9366-4de5-b5f5-3bd8c655cad9'] = $pane;
    $display->panels['mobile-menu'][1] = 'new-2de66bf1-9366-4de5-b5f5-3bd8c655cad9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-715c5776-932e-4d54-b580-5e80c3111971';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
