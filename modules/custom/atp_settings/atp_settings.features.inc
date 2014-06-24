<?php
/**
 * @file
 * atp_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_date_formats().
 */
function atp_settings_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['d. F Y'] = 'd. F Y';
  $custom_date_formats['d. F Y - G:i'] = 'd. F Y - G:i';
  $custom_date_formats['d. F Y \\k\\l. G:i'] = 'd. F Y \\k\\l. G:i';
  $custom_date_formats['d/m/Y'] = 'd/m/Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function atp_settings_date_format_types() {
  $format_types = array();
  // Exported date format type: atp_long
  $format_types['atp_long'] = 'ATP - long';
  // Exported date format type: atp_short
  $format_types['atp_short'] = 'ATP - short';
  return $format_types;
}

/**
 * Implements hook_image_default_styles().
 */
function atp_settings_image_default_styles() {
  $styles = array();

  // Exported image style: 126x126.
  $styles['126x126'] = array(
    'name' => '126x126',
    'label' => '126x126',
    'effects' => array(
      18 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 126,
          'height' => 126,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 1600x300.
  $styles['1600x300'] = array(
    'name' => '1600x300',
    'label' => '1600x300',
    'effects' => array(
      21 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
