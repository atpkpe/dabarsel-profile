<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Print and sharing tools'),
  'description' => t('Shows the print and sharing toolbar.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'tools_content_type_render',
);

/**
 * Content pane render function.
 */
function tools_content_type_render($subtype, $conf, $panel_args, &$context) {
  $data = is_object($context) ? $context->data : array();

  // Render the toolbar
  $block = new stdClass();
  $block->content = array(
    '#theme' => 'toolbar',
    '#feed_url' => !empty($data['rss_path']) ? $data['rss_path'] : '',
  );
  return $block;
}