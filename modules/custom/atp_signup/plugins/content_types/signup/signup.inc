<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Newsletter signup'),
  'description' => t('Shows newsletter signup form.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'signup_content_type_render',
);

/**
 * Content pane render function.
 */
function signup_content_type_render($subtype, $conf, $panel_args, &$context) {

  $block = new stdClass();

  $block->content = theme('signup', array());

  return $block;
}
