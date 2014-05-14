<?php
/**
 * @file
 * atp_slide.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_slide_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_content|node|slide|form';
  $field_group->group_name = 'group_slide_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_slide_body',
      1 => 'field_slide_link',
      2 => 'field_slide_image',
      3 => 'language',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slide-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide_content|node|slide|form'] = $field_group;

  return $export;
}