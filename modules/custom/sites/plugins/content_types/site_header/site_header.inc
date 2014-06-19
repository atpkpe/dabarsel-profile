<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Site header'),
  'description' => t('Shows the site name.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'site_header_content_type_render',
);

/**
 * Content pane render function.
 */
function site_header_content_type_render($subtype, $conf, $panel_args, &$context) {

  $current_site = SiteController::getCurrentSite();

  if ($current_site->sid == 1) return;

  global $language;

  $block = new stdClass();

  $block->content = array(
    'view' => array(
      '#type' => 'markup',
      '#markup' => '<h1>' . $current_site->name[$language->language] . '</h1>',
    ),
  );

  return $block;
}
