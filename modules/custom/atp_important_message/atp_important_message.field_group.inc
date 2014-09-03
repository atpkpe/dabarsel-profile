<?php
/**
 * @file
 * atp_important_message.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_important_message_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_danish_message|node|important_message|default';
  $field_group->group_name = 'group_danish_message';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'important_message';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Danish message',
    'weight' => '0',
    'children' => array(
      0 => 'field_important_message_body',
      1 => 'field_important_message_title',
      2 => 'field_important_message_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Danish message',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'important-message',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_danish_message|node|important_message|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_english_message|node|important_message|default';
  $field_group->group_name = 'group_english_message';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'important_message';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'English message',
    'weight' => '1',
    'children' => array(
      0 => 'field_important_message_body_en',
      1 => 'field_important_message_title_en',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'English message',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'important-message',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_english_message|node|important_message|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_important_message_da|node|important_message|form';
  $field_group->group_name = 'group_important_message_da';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'important_message';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Danish message',
    'weight' => '2',
    'children' => array(
      0 => 'field_important_message_body',
      1 => 'field_important_message_title',
      2 => 'field_important_message_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_important_message_da|node|important_message|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_important_message_en|node|important_message|form';
  $field_group->group_name = 'group_important_message_en';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'important_message';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'English message',
    'weight' => '3',
    'children' => array(
      0 => 'field_important_message_body_en',
      1 => 'field_important_message_title_en',
      2 => 'field_important_message_link_en',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_important_message_en|node|important_message|form'] = $field_group;

  return $export;
}
