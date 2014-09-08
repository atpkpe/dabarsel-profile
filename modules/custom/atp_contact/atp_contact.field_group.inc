<?php
/**
 * @file
 * atp_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_contact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_content|node|contact|form';
  $field_group->group_name = 'group_contact_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_contact_email',
      1 => 'field_contact_image',
      2 => 'field_contact_jobtitle',
      3 => 'field_contact_mobile',
      4 => 'field_contact_phone',
      5 => 'title_field',
      6 => 'workbench_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_content|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_wrapper|node|contact|teaser';
  $field_group->group_name = 'group_contact_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '0',
    'children' => array(
      0 => 'field_contact_email',
      1 => 'field_contact_image',
      2 => 'field_contact_jobtitle',
      3 => 'field_contact_mobile',
      4 => 'field_contact_phone',
      5 => 'title_field',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'contact',
        'wrapper' => 'article',
      ),
    ),
  );
  $export['group_contact_wrapper|node|contact|teaser'] = $field_group;

  return $export;
}
