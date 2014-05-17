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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ca7cb6c0-cb12-4d2e-95f9-d57f4c748070';
  $display->content = array();
  $display->panels = array();
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
      'depth' => '0',
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
    $pane->uuid = '9d6986fe-dde2-4e03-99f9-ecfa5148a703';
    $display->content['new-9d6986fe-dde2-4e03-99f9-ecfa5148a703'] = $pane;
    $display->panels['footer'][0] = 'new-9d6986fe-dde2-4e03-99f9-ecfa5148a703';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '715c5776-932e-4d54-b580-5e80c3111971';
    $display->content['new-715c5776-932e-4d54-b580-5e80c3111971'] = $pane;
    $display->panels['header'][0] = 'new-715c5776-932e-4d54-b580-5e80c3111971';
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
      'depth' => '0',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
    $display->content['new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84'] = $pane;
    $display->panels['header'][1] = 'new-c5ea4bc0-2c36-4dad-bb7e-e04e0c9ecb84';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4057484-8fc3-4f2a-9276-57d382645c93';
    $display->content['new-e4057484-8fc3-4f2a-9276-57d382645c93'] = $pane;
    $display->panels['main'][0] = 'new-e4057484-8fc3-4f2a-9276-57d382645c93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-715c5776-932e-4d54-b580-5e80c3111971';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
