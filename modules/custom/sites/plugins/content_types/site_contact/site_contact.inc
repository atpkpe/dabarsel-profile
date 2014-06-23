<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Subsite contact'),
  'description' => t('Shows the site contact for subsites.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'site_contact_content_type_render',
);

/**
 * Content pane render function.
 */
function site_contact_content_type_render($subtype, $conf, $panel_args, &$context) {
  $current_site = SiteController::getCurrentSite();
  if ($current_site->sid == 1) return;

  global $language;

  $block = new stdClass();
  $block->content = array(
    'view' => array(
      '#type' => 'markup',
      '#markup' => '<div class="subsite-contact">' . l(t('Contact'), $current_site->contact_page) . '</div>',
    ),
  );
  return $block;
}
