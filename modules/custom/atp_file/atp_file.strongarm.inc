<?php
/**
 * @file
 * atp_file.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atp_file_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      '2_wide' => array(
        'custom_settings' => TRUE,
      ),
      '1_wide' => array(
        'custom_settings' => TRUE,
      ),
      'original' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      '2_wide_text' => array(
        'custom_settings' => TRUE,
      ),
      '1_wide_text' => array(
        'custom_settings' => TRUE,
      ),
      'inline' => array(
        'custom_settings' => FALSE,
      ),
      'overlay' => array(
        'custom_settings' => FALSE,
      ),
      'overlay-open' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '-10',
        ),
        'preview' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '2_wide' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '1_wide' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'original' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '2_wide_text' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          '1_wide_text' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'inline' => array(
        'custom_settings' => TRUE,
      ),
      'overlay' => array(
        'custom_settings' => TRUE,
      ),
      'overlay-open' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      '2_wide' => array(
        'custom_settings' => FALSE,
      ),
      '1_wide' => array(
        'custom_settings' => FALSE,
      ),
      '2_wide_text' => array(
        'custom_settings' => FALSE,
      ),
      '1_wide_text' => array(
        'custom_settings' => FALSE,
      ),
      'original' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'inline' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'overlay' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'overlay-open' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm zip';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_file_type';
  $strongarm->value = 1;
  $export['file_entity_file_upload_wizard_skip_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_scheme';
  $strongarm->value = 1;
  $export['file_entity_file_upload_wizard_skip_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_max_filesize';
  $strongarm->value = '30 MB';
  $export['file_entity_max_filesize'] = $strongarm;

  return $export;
}
