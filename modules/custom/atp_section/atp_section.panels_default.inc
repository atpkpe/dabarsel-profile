<?php
/**
 * @file
 * atp_section.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function atp_section_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'four_facts';
  $mini->category = 'ATP';
  $mini->admin_title = 'Four facts';
  $mini->admin_description = 'Four facts in a row';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Indhold',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = '';
  $display->uuid = '5de7c989-f349-44e8-b6f7-b9c94662cfc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a8df9747-7d8c-4a04-abf1-ef91116a0280';
    $pane->panel = 'middle';
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
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = 'a8df9747-7d8c-4a04-abf1-ef91116a0280';
    $display->content['new-a8df9747-7d8c-4a04-abf1-ef91116a0280'] = $pane;
    $display->panels['middle'][0] = 'new-a8df9747-7d8c-4a04-abf1-ef91116a0280';
    $pane = new stdClass();
    $pane->pid = 'new-d237977e-881d-44ad-8fc6-05c0a74815d3';
    $pane->panel = 'middle';
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
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = 'd237977e-881d-44ad-8fc6-05c0a74815d3';
    $display->content['new-d237977e-881d-44ad-8fc6-05c0a74815d3'] = $pane;
    $display->panels['middle'][1] = 'new-d237977e-881d-44ad-8fc6-05c0a74815d3';
    $pane = new stdClass();
    $pane->pid = 'new-f77f9b9a-1a85-4474-acf9-8085ee33e2a9';
    $pane->panel = 'middle';
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
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = 'f77f9b9a-1a85-4474-acf9-8085ee33e2a9';
    $display->content['new-f77f9b9a-1a85-4474-acf9-8085ee33e2a9'] = $pane;
    $display->panels['middle'][2] = 'new-f77f9b9a-1a85-4474-acf9-8085ee33e2a9';
    $pane = new stdClass();
    $pane->pid = 'new-2ad883cc-1b07-4daf-8499-0794dcef3546';
    $pane->panel = 'middle';
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
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = '2ad883cc-1b07-4daf-8499-0794dcef3546';
    $display->content['new-2ad883cc-1b07-4daf-8499-0794dcef3546'] = $pane;
    $display->panels['middle'][3] = 'new-2ad883cc-1b07-4daf-8499-0794dcef3546';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a8df9747-7d8c-4a04-abf1-ef91116a0280';
  $mini->display = $display;
  $export['four_facts'] = $mini;

  return $export;
}
