<?php
/**
 * @file
 * atp_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_gallery_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_content|node|gallery|form';
  $field_group->group_name = 'group_gallery_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_gallery_images',
      1 => 'title_field',
      2 => 'workbench_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_content|node|gallery|form'] = $field_group;

  return $export;
}
