<?php
/**
 * @file
 * atp_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_layouts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function atp_layouts_image_default_styles() {
  $styles = array();

  // Exported image style: 225x126.
  $styles['225x126'] = array(
    'name' => '225x126',
    'label' => '225x126',
    'effects' => array(
      10 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 126,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 360x126.
  $styles['360x126'] = array(
    'name' => '360x126',
    'label' => '360x126',
    'effects' => array(
      2 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 126,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 470x126.
  $styles['470x126'] = array(
    'name' => '470x126',
    'label' => '470x126',
    'effects' => array(
      12 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 470,
          'height' => 126,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 470x272.
  $styles['470x272'] = array(
    'name' => '470x272',
    'label' => '470x272',
    'effects' => array(
      14 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 470,
          'height' => 272,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 715x300.
  $styles['715x300'] = array(
    'name' => '715x300',
    'label' => '715x300',
    'effects' => array(
      2 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 715,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 720x126.
  $styles['720x126'] = array(
    'name' => '720x126',
    'label' => '720x126',
    'effects' => array(
      1 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 126,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 960x126.
  $styles['960x126'] = array(
    'name' => '960x126',
    'label' => '960x126',
    'effects' => array(
      16 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 126,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 960x300.
  $styles['960x300'] = array(
    'name' => '960x300',
    'label' => '960x300',
    'effects' => array(
      3 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
