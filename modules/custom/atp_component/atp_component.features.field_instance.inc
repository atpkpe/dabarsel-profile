<?php
/**
 * @file
 * atp_component.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function atp_component_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-component-field_component_body'
  $field_instances['node-component-field_component_body'] = array(
    'bundle' => 'component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_2_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_4_compressed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_4_fact' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_4_h' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'menu_box' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'div',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_with_img' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_component_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-component-field_component_image'
  $field_instances['node-component-field_component_image'] = array(
    'bundle' => 'component',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => '',
          'image_style' => '470x272',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      '1_2_l' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => '',
          'image_style' => '470x126',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      '1_2_square' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => '',
          'image_style' => '126x126',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      '1_4_compressed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      '1_4_fact' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      '1_4_h' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => '',
          'image_style' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      '1_4_l' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => '',
          'image_style' => '225x126',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => '',
          'image_style' => '470x272',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'menu_box' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser_with_img' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => '',
          'image_style' => '126x126',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_component_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'media',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-component-field_component_link'
  $field_instances['node-component-field_component_link'] = array(
    'bundle' => 'component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_wrapper' => 'div',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'link_title_plain',
        'weight' => 7,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      '1_2_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      '1_4_compressed' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_wrapper' => 'div',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'link_title_plain',
        'weight' => 2,
      ),
      '1_4_fact' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_wrapper' => 'div',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'link_title_plain',
        'weight' => 3,
      ),
      '1_4_h' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'menu_box' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser_with_img' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_component_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'fields',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-component-field_component_summary'
  $field_instances['node-component-field_component_summary'] = array(
    'bundle' => 'component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 6,
      ),
      '1_2_l' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 100,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
      ),
      '1_2_square' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 70,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 4,
      ),
      '1_4_compressed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      '1_4_fact' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 60,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      '1_4_h' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => FALSE,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_options' => array(),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 6,
      ),
      'menu_box' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 200,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'teaser_with_img' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 200,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_component_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-component-title_field'
  $field_instances['node-component-title_field'] = array(
    'bundle' => 'component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h2',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      '1_2_l' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h3',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      '1_2_square' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h3',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      '1_4_compressed' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      '1_4_fact' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'h3',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 30,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 1,
      ),
      '1_4_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_4_l' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 60,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => '',
          'item_wrapper' => '',
          'label_wrapper' => '',
        ),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'menu_box' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h3',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h3',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser_with_img' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 'h3',
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Titel',
    'required' => TRUE,
    'settings' => array(
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image');
  t('Link');
  t('Summary');
  t('Titel');

  return $field_instances;
}
