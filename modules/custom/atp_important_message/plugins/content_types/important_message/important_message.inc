<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Important message'),
  'description' => t('Renders important message div and js.'),
  'category' => array('ATP'),
  'render callback' => 'atp_important_message_render',
);

/**
 * Content pane render function.
 */
function atp_important_message_render($subtype, $conf, $panel_args, &$context) {
  drupal_add_library('system', 'jquery.cookie');
  ctools_add_js('important_message', 'atp_important_message');
  $block = new stdClass();
  $block->content = '<div id="important-message" class="important-message"><div class="content"></div><div class="close">×</div></div>';
  return $block;
}