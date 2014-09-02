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
  'edit form' => 'tools_content_type_edit_form',
  'defaults' => array(
    'rss_view_name' => 'news_list',
    'rss_view_display' => 'feed',
  ),
  'required context' => new ctools_context_required(t('News'), 'news'),
);

/**
 * Content pane render function.
 */
function tools_content_type_render($subtype, $conf, $panel_args, &$context) {
  $feed_url = '';
  $view = views_get_view($conf['rss_view_name']);
  if (is_object($view)) {
    $view->set_display($conf['rss_view_display']);
    $path = $view->get_path();
    if (!empty($path)) {
      $feed_url = sprintf('/%s', $view->get_path());
    }
  }

  $block = new stdClass();
  $block->content = theme('toolbar', array('feed_url' => $feed_url));
  return $block;
}

/**
 * Content pane configuration form function.
 */
function tools_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $conf += $form_state['plugin']['defaults'];

  $form['rss_view_name'] = array(
    '#type' => 'textfield',
    '#title' => t('RSS View name.'),
    '#description' => t('The view name of the rss feed.'),
    '#size' => 60,
    '#maxlength' => 60,
    '#default_value' => $conf['rss_view_name'],
  );
  $form['rss_view_display'] = array(
    '#type' => 'textfield',
    '#title' => t('RSS View display.'),
    '#description' => t('The view display of the rss feed.'),
    '#size' => 60,
    '#maxlength' => 60,
    '#default_value' => $conf['rss_view_display'],
  );

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function tools_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
