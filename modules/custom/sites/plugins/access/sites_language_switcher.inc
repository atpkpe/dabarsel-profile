<?php

/**
 * @file
 * Plugin to provide language switcher access control based upon sites.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Current site - show language switcher'),
  'description' => t('Control display of language switcher by site.'),
  'callback' => 'sites_language_switcher_ctools_access_check',
  'summary' => 'sites_language_switcher_summary',
);

/**
 * Check for access.
 */
function sites_language_switcher_ctools_access_check($conf, $context) {
  $current_site = SiteController::getCurrentSite();
  return $current_site->language_switcher == 1;
}

/**
 * Summary
 */
function sites_language_switcher_summary() {
  return t('Current site shows language switcher');
}
