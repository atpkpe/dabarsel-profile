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
  $field_group->identifier = 'group_infocus|node|section|1_1_l';
  $field_group->group_name = 'group_infocus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = '1_1_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus',
    'weight' => '0',
    'children' => array(
      0 => 'field_section_image',
      1 => 'group_section_image_overlay',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Focus',
      'instance_settings' => array(
        'classes' => 'focus',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_infocus|node|section|1_1_l'] = $field_group;

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
      1 => 'field_section_image',
      2 => 'field_section_summary',
      3 => 'title_field',
      4 => 'language',
      5 => 'workbench_access',
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
  $field_group->identifier = 'group_section_facts|node|section|form';
  $field_group->group_name = 'group_section_facts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Facts',
    'weight' => '3',
    'children' => array(
      0 => 'field_section_facts',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section-facts field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_section_facts|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|section|1_1_l';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = '1_1_l';
  $field_group->parent_name = 'group_infocus';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '2',
    'children' => array(
      0 => 'field_section_body',
      1 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|section|1_1_l'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|section|1_2_h';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = '1_2_h';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_summary',
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
  $export['group_section_image_overlay|node|section|1_2_h'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|section|1_2_l';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = '1_2_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_summary',
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
  $export['group_section_image_overlay|node|section|1_2_l'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|section|1_4_l';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
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
  $export['group_section_image_overlay|node|section|1_4_l'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_txt|node|section|1_2_square';
  $field_group->group_name = 'group_txt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = '1_2_square';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '14',
    'children' => array(
      0 => 'field_section_summary',
      1 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_txt|node|section|1_2_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|section|1_2_square';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = '1_2_square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_section_image',
      1 => 'group_txt',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|node|section|1_2_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|section|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '8',
    'children' => array(
      0 => 'field_section_summary',
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
  $export['group_wrapper|node|section|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|section|teaser_with_img';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'teaser_with_img';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_section_image',
      1 => 'field_section_summary',
      2 => 'title_field',
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
  $export['group_wrapper|node|section|teaser_with_img'] = $field_group;

  return $export;
}
