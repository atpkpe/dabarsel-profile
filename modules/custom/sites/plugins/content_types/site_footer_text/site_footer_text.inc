<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Site footer text'),
  'description' => t('Shows the site footer text for the main site.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'site_footer_text_content_type_render',
);

/**
 * Content pane render function.
 */
function site_footer_text_content_type_render($subtype, $conf, $panel_args, &$context) {
  $current_site = SiteController::getCurrentSite();
  if ($current_site->sid != 1) return;

  global $language;
  $block = new stdClass();
  $block->content = array(
    'view' => array(
      '#type' => 'markup',
      '#markup' => '<div class="site-footer-text">' . $current_site->footer[$language->language] . '</div>',
    ),
  );
  return $block;
}
