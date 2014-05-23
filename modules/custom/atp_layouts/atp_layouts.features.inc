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
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
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
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 470,
          'height' => 126,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 470x272.
  $styles['470x272'] = array(
    'name' => '470x272',
    'label' => '470x272',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 470,
          'height' => 272,
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
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 126,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
