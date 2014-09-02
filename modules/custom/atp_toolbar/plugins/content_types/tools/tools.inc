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
  'required context' => new ctools_context_required(t('News'), 'news'),
);

/**
 * Content pane render function.
 */
function tools_content_type_render($subtype, $conf, $panel_args, &$context) {
  $data = $context->data;
  // Construct feed url.
  $feed_url = '';
  $view = views_get_view($data['view_name']);
  if (is_object($view)) {
    $view->set_display($conf['view_rss_display']);
    $path = $view->get_path();
    if (!empty($path)) {
      $view_params = array();
      if (!empty($data['categories'])) {
        $view_params = array('tid' => $data['categories']);
      }
      $feed_url = url(
        $view->get_path(),
        array('query' => $view_params)
      );
    }
  }
  // Render the toolbar
  $block = new stdClass();
  $block->content = array(
    '#theme' => 'toolbar',
    '#feed_url' => $feed_url,
  );
  return $block;
}