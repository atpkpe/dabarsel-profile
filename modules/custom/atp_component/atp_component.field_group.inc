<?php
/**
 * @file
 * atp_component.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_component_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_component_content|node|component|form';
  $field_group->group_name = 'group_component_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '34',
    'children' => array(
      0 => 'field_component_body',
      1 => 'field_component_summary',
      2 => 'field_component_image',
      3 => 'field_component_link',
      4 => 'language',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-component-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_component_content|node|component|form'] = $field_group;

  return $export;
}
