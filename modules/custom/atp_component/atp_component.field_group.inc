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
      1 => 'field_component_image',
      2 => 'field_component_link',
      3 => 'field_component_summary',
      4 => 'title_field',
      5 => 'language',
      6 => 'workbench_access',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_component_link|node|component|1_4_fact';
  $field_group->group_name = 'group_component_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_4_fact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_component_link',
      1 => 'field_component_summary',
      2 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-component-link field-group-link',
      ),
    ),
  );
  $export['group_component_link|node|component|1_4_fact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|component|1_2_h';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_2_h';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_component_link',
      1 => 'field_component_summary',
      2 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => 'group-section-image-overlay field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|component|1_2_h'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|component|1_2_l';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_2_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '2',
    'children' => array(
      0 => 'field_component_summary',
      1 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => 'group-section-image-overlay field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|component|1_2_l'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|component|1_2_square';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_2_square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '0',
    'children' => array(
      0 => 'field_component_image',
      1 => 'group_txt',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => 'group-section-image-overlay field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|component|1_2_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image_overlay|node|component|1_4_l';
  $field_group->group_name = 'group_section_image_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_4_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image overlay',
    'weight' => '3',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image overlay',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image_overlay|node|component|1_4_l'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_link|node|component|1_2_h';
  $field_group->group_name = 'group_section_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_2_h';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_component_image',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link wrapper',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_link|node|component|1_2_h'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_link|node|component|1_2_l';
  $field_group->group_name = 'group_section_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_2_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_component_image',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link wrapper',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_link|node|component|1_2_l'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_link|node|component|1_4_l';
  $field_group->group_name = 'group_section_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_4_l';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_component_image',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link wrapper',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_link|node|component|1_4_l'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_txt|node|component|1_2_square';
  $field_group->group_name = 'group_txt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = '1_2_square';
  $field_group->parent_name = 'group_section_image_overlay';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_component_summary',
      1 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_txt|node|component|1_2_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|component|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_component_summary',
      1 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => 'group-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|node|component|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|component|teaser_with_img';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'component';
  $field_group->mode = 'teaser_with_img';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_component_image',
      1 => 'field_component_summary',
      2 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'link_to' => 'field_component_link',
        'classes' => 'group-wrapper field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|node|component|teaser_with_img'] = $field_group;

  return $export;
}
