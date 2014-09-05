<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Print and sharing tools (news context)'),
  'description' => t('Shows the print and sharing toolbar. NB: Depends on news context.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'tools_news_content_type_render',
  'required context' => new ctools_context_required(t('News'), 'news'),
);

/**
 * Content pane render function.
 */
function tools_news_content_type_render($subtype, $conf, $panel_args, &$context) {
  $plugin = ctools_get_content_type('tools');
  return $plugin['render callback']('tools', $conf, $panel_args, $context);
}