<?php
/**
 * @file
 * atp_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function atp_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_page_body'
  $field_instances['node-page-field_page_body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_2_l' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_2_square' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      '1_4_h' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '1_4_l' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      '3_4_h' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      '3_8_h' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser_with_img' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_body',
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

  // Exported field_instance: 'node-page-field_page_contacts'
  $field_instances['node-page-field_page_contacts'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '3_4_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      '3_8_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_with_img' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_contacts',
    'label' => 'Contacts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page-field_page_image'
  $field_instances['node-page-field_page_image'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => 'content',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'styles' => array(
            'breakpoint_1' => 640,
            'breakpoint_2' => '',
            'breakpoint_3' => '',
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '470x272',
            'max_style' => '470x272',
            'style_1' => '640x360',
            'style_2' => '',
            'style_3' => '',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 0,
      ),
      '1_2_l' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => 'content',
          'image_style' => '470x126',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 0,
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
        'weight' => 2,
      ),
      '1_4_h' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_wrapper' => 0,
          'file_view_mode' => '1_4_h',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'file_rendered',
        'weight' => 2,
      ),
      '1_4_l' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => 'content',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'styles' => array(
            'breakpoint_1' => 640,
            'breakpoint_2' => '',
            'breakpoint_3' => '',
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '225x126',
            'max_style' => '225x126',
            'style_1' => '640x360',
            'style_2' => '',
            'style_3' => '',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 0,
      ),
      '3_4_h' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => 'content',
          'image_style' => '720x272',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      '3_8_h' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => 'content',
          'image_style' => '360x272',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_image',
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

  // Exported field_instance: 'node-page-field_page_relations'
  $field_instances['node-page-field_page_relations'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '3_4_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      '3_8_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_with_img' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_relations',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page-field_page_relations_right'
  $field_instances['node-page-field_page_relations_right'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '3_4_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '3_8_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_with_img' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_relations_right',
    'label' => 'Related - right column',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page-field_page_relations_title'
  $field_instances['node-page-field_page_relations_title'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '3_4_h' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      '3_8_h' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h2',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_with_img' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_relations_title',
    'label' => 'Related title',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page-field_page_summary'
  $field_instances['node-page-field_page_summary'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'plain_text',
      ),
    ),
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
          'more_link' => 2,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 180,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
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
          'trim_length' => 70,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
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
          'trim_length' => 100,
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 5,
      ),
      '1_4_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      '3_4_h' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 2,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 280,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
      ),
      '3_8_h' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 2,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 120,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
      ),
      'default' => array(
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
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 1,
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
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
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
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_summary',
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
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page-field_page_twt'
  $field_instances['node-page-field_page_twt'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These fields are used in contact overview, and FAQ. The items can be reordered.',
    'display' => array(
      '1_2_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_2_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '3_4_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '3_8_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'multifield',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_with_img' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_twt',
    'label' => 'Text with title',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(),
      'type' => 'multifield_default',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page-title_field'
  $field_instances['node-page-title_field'] = array(
    'bundle' => 'page',
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
        'weight' => 2,
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
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 'h3',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 50,
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 4,
      ),
      '1_4_h' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 'h3',
          'label_wrapper' => 0,
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 1,
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
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 0,
      ),
      '3_4_h' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h2',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      '3_8_h' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h2',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 'h3',
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 'h3',
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser_with_img' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h3',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 2,
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
  t('Contacts');
  t('Image');
  t('Related');
  t('Related - right column');
  t('Related title');
  t('Summary');
  t('Text with title');
  t('These fields are used in contact overview, and FAQ. The items can be reordered.');
  t('Titel');

  return $field_instances;
}
