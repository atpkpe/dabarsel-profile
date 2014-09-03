<?php
/**
 * @file
 * atp_faktum.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_faktum_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faktum_content|node|faktum|form';
  $field_group->group_name = 'group_faktum_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faktum';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indhold',
    'weight' => '0',
    'children' => array(
      0 => 'field_faktum_body',
      1 => 'field_faktum_image',
      2 => 'field_faktum_summary',
      3 => 'title_field',
      4 => 'field_published_date',
      5 => 'language',
      6 => 'workbench_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faktum-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_faktum_content|node|faktum|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|faktum|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faktum';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_faktum_summary',
      1 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-wrapper field-group-link',
      ),
    ),
  );
  $export['group_wrapper|node|faktum|teaser'] = $field_group;

  return $export;
}
