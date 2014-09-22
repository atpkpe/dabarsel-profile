<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Page anchors'),
  'description' => t('List with anchors in page.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'atp_page_anchors_render',
);

/**
 * Content pane render function.
 */
function atp_page_anchors_render($subtype, $conf, $panel_args, &$context) {

  ctools_add_js('atp_page_anchors', 'atp_page');
  // Render the anchor list
  $block = new stdClass();
  $block->title = 'Anchors on this page';
  $block->content = '<div><ul id="anchors"></ul></div>';
  return $block;
}