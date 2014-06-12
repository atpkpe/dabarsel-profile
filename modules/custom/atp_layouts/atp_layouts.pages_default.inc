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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ca7cb6c0-cb12-4d2e-95f9-d57f4c748070';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3c22c84e-8070-48b7-87a4-f7bc819ad4a5';
    $pane->panel = 'footer';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c22c84e-8070-48b7-87a4-f7bc819ad4a5';
    $display->content['new-3c22c84e-8070-48b7-87a4-f7bc819ad4a5'] = $pane;
    $display->panels['footer'][0] = 'new-3c22c84e-8070-48b7-87a4-f7bc819ad4a5';
    $pane = new stdClass();
    $pane->pid = 'new-9d6986fe-dde2-4e03-99f9-ecfa5148a703';
    $pane->panel = 'footer';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-footer',
      'parent_mlid' => 0,
      'parent' => 'menu-footer:0',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9d6986fe-dde2-4e03-99f9-ecfa5148a703';
    $display->content['new-9d6986fe-dde2-4e03-99f9-ecfa5148a703'] = $pane;
    $display->panels['footer'][1] = 'new-9d6986fe-dde2-4e03-99f9-ecfa5148a703';
    $pane = new stdClass();
    $pane->pid = 'new-0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'languages',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03';
    $display->content['new-0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03'] = $pane;
    $display->panels['header'][0] = 'new-0c8f6d3b-8d9d-432c-b8fe-0ad51073ea03';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8957f3f3-3afc-46d7-98e0-c7a8d4d0d5c5';
    $display->content['new-8957f3f3-3afc-46d7-98e0-c7a8d4d0d5c5'] = $pane;
    $display->panels['header'][1] = 'new-8957f3f3-3afc-46d7-98e0-c7a8d4d0d5c5';
    $pane = new stdClass();
    $pane->pid = 'new-715c5776-932e-4d54-b580-5e80c3111971';
    $pane->panel = 'header';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '715c5776-932e-4d54-b580-5e80c3111971';
    $display->content['new-715c5776-932e-4d54-b580-5e80c3111971'] = $pane;
    $display->panels['header'][2] = 'new-715c5776-932e-4d54-b580-5e80c3111971';
    $pane = new stdClass();
    $pane->pid = 'new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
    $pane->panel = 'header';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
    $display->content['new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84'] = $pane;
    $display->panels['header'][3] = 'new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
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
    $pane->pid = 'new-426a25ca-67c2-4e31-a89e-1e58bc64e41b';
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
      'level' => '1',
      'follow' => 'child',
      'depth' => '3',
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
      'css_class' => 'level-2-3 show-mobile',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '426a25ca-67c2-4e31-a89e-1e58bc64e41b';
    $display->content['new-426a25ca-67c2-4e31-a89e-1e58bc64e41b'] = $pane;
    $display->panels['header-bottom'][2] = 'new-426a25ca-67c2-4e31-a89e-1e58bc64e41b';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-715c5776-932e-4d54-b580-5e80c3111971';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
