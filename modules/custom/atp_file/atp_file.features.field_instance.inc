<?php
/**
 * @file
 * atp_file.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function atp_file_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'file-image-field_file_description'
  $field_instances['file-image-field_file_description'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text inserted under the image in some view modes',
    'display' => array(
      '1_wide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '1_wide_text' => array(
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
      '2_wide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '2_wide_text' => array(
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
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
      'wysiwyg_override' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'file-image-field_file_image_alt_text'
  $field_instances['file-image-field_file_image_alt_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative text is used by screen readers, search engines, and when the image cannot be loaded. By adding alt text you improve accessibility and search engine optimization.',
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
      '1_4_h' => array(
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
      '1_wide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      '1_wide_text' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      '2_wide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      '2_wide_text' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_alt_text',
    'label' => 'Alt Text',
    'required' => 0,
    'settings' => array(
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_title_text'
  $field_instances['file-image-field_file_image_title_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Title text is used in the tool tip when a user hovers their mouse over the image. Adding title text makes it easier to understand the context of an image and improves usability.',
    'display' => array(
      '1_2_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      '1_2_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      '1_4_h' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      '1_4_l' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      '1_wide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      '1_wide_text' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      '2_wide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      '2_wide_text' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_title_text',
    'label' => 'Title Text',
    'required' => 0,
    'settings' => array(
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
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'file-sas-field_folder'
  $field_instances['file-sas-field_folder'] = array(
    'active' => 1,
    'bundle' => 'sas',
    'bundles' => array(
      'file' => array(
        0 => 'image',
        1 => 'video',
        2 => 'audio',
        3 => 'document',
        4 => 'zip_archive',
      ),
    ),
    'cardinality' => 1,
    'columns' => array(
      'tid' => array(
        'not null' => FALSE,
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'entity_types' => array(),
    'field_name' => 'field_folder',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'label' => 'Media Folder',
    'locked' => 0,
    'module' => 'taxonomy',
    'required' => TRUE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'media_folders',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
      'user_register_form' => FALSE,
    ),
    'storage' => array(
      'active' => 1,
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_folder' => array(
              'tid' => 'field_folder_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_folder' => array(
              'tid' => 'field_folder_tid',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'file-video-field_file_video_description'
  $field_instances['file-video-field_file_video_description'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'inline' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'overlay' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'p',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'overlay-open' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'smart_trim',
        'settings' => array(
          'field_wrapper' => '',
          'item_wrapper' => '',
          'label_wrapper' => '',
          'more_link' => FALSE,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_link' => FALSE,
          'trim_options' => array(),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_video_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
      'wysiwyg_override' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'file-video-field_file_video_title'
  $field_instances['file-video-field_file_video_title'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_wrapper' => 'h2',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 1,
      ),
      'inline' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'overlay' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 'h2',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'overlay-open' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_video_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
      'wysiwyg_override' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'file-zip_archive-field_folder'
  $field_instances['file-zip_archive-field_folder'] = array(
    'active' => 1,
    'bundle' => 'zip_archive',
    'bundles' => array(
      'file' => array(
        0 => 'image',
        1 => 'video',
        2 => 'audio',
        3 => 'document',
      ),
    ),
    'cardinality' => 1,
    'columns' => array(
      'tid' => array(
        'not null' => FALSE,
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'entity_types' => array(),
    'field_name' => 'field_folder',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'label' => 'Media Folder',
    'locked' => 0,
    'module' => 'taxonomy',
    'required' => TRUE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'media_folders',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
      'user_register_form' => FALSE,
    ),
    'storage' => array(
      'active' => 1,
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_folder' => array(
              'tid' => 'field_folder_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_folder' => array(
              'tid' => 'field_folder_tid',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alt Text');
  t('Alternative text is used by screen readers, search engines, and when the image cannot be loaded. By adding alt text you improve accessibility and search engine optimization.');
  t('Description');
  t('Media Folder');
  t('Text inserted under the image in some view modes');
  t('Title');
  t('Title Text');
  t('Title text is used in the tool tip when a user hovers their mouse over the image. Adding title text makes it easier to understand the context of an image and improves usability.');

  return $field_instances;
}
