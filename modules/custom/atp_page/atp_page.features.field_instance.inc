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

  // Exported field_instance: 'multifield-tagged_entity_reference-field_ter_category'
  $field_instances['multifield-tagged_entity_reference-field_ter_category'] = array(
    'bundle' => 'tagged_entity_reference',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_ter_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'multifield-tagged_entity_reference-field_ter_related'
  $field_instances['multifield-tagged_entity_reference-field_ter_related'] = array(
    'bundle' => 'tagged_entity_reference',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_ter_related',
    'label' => 'Page',
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
      'weight' => 1,
    ),
  );

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
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-page-field_page_image'
  $field_instances['node-page-field_page_image'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => 'content',
          'image_style' => '470x272',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'image',
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
        'module' => 'image',
        'settings' => array(
          'field_wrapper' => 0,
          'image_link' => 'content',
          'image_style' => '225x126',
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
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images',
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
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-page-field_page_related'
  $field_instances['node-page-field_page_related'] = array(
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
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(),
      'type' => 'multifield_default',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-page-field_page_summary'
  $field_instances['node-page-field_page_summary'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '1_2_h' => array(
        'label' => 'hidden',
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
        'weight' => 3,
      ),
      '1_2_l' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 100,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 3,
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
          'trim_options' => array(
            'text' => 0,
          ),
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
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
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
      'weight' => -2,
    ),
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
        'weight' => 2,
      ),
      '1_2_l' => array(
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
        'weight' => 2,
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
        'module' => 'title',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'title_class' => '',
          'title_link' => '',
          'title_style' => 'h3',
        ),
        'type' => 'title_linked',
        'weight' => 0,
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
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Category');
  t('Image');
  t('Page');
  t('Related');
  t('Summary');
  t('Titel');

  return $field_instances;
}
