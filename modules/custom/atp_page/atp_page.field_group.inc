<?php
/**
 * @file
 * atp_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_page_body',
      1 => 'field_page_image',
      2 => 'field_page_summary',
      3 => 'title_field',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|page|1_2_h';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = '1_2_h';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_page_summary',
      1 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|page|1_2_h'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|page|1_2_l';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = '1_2_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_page_summary',
      1 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|page|1_2_l'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|page|1_4_h';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = '1_4_h';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'classes' => 'group-section-image-overlay field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|page|1_4_h'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|page|1_4_l';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = '1_4_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|page|1_4_l'] = $field_group;

  return $export;
}
