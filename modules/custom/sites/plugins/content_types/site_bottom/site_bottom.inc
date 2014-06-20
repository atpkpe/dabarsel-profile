<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Subsite bottom'),
  'description' => t('Shows the site bottom for subsites.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'site_bottom_content_type_render',
);

/**
 * Content pane render function.
 */
function site_bottom_content_type_render($subtype, $conf, $panel_args, &$context) {
  $current_site = SiteController::getCurrentSite();
  if ($current_site->sid == 1) return;

  global $language;
  $block = new stdClass();
  $block->content = array(
    'view' => array(
      '#type' => 'markup',
      '#markup' => $current_site->footer[$language->language],
    ),
  );
  return $block;
}
