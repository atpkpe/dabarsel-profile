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
