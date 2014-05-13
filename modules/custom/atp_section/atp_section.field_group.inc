<?php
/**
 * @file
 * atp_section.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_section_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_content|node|section|form';
  $field_group->group_name = 'group_section_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_section_body',
      1 => 'field_section_manchet',
      2 => 'language',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_section_content|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_related|node|section|form';
  $field_group->group_name = 'group_section_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section-related field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_section_related|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_slides|node|section|form';
  $field_group->group_name = 'group_section_slides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slides',
    'weight' => '2',
    'children' => array(
      0 => 'field_section_slides',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section-slides field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_section_slides|node|section|form'] = $field_group;

  return $export;
}
