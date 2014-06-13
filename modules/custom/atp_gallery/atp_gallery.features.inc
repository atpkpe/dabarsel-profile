<?php
/**
 * @file
 * atp_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atp_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function atp_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function atp_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_large.
  $styles['gallery_large'] = array(
    'name' => 'gallery_large',
    'label' => 'Gallery large',
    'effects' => array(
      6 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => ' 625',
          'height' => 375,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: gallery_thumb.
  $styles['gallery_thumb'] = array(
    'name' => 'gallery_thumb',
    'label' => 'Gallery thumb',
    'effects' => array(
      8 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function atp_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
