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
  'title' => t('Current site - show search field'),
  'description' => t('Control display of search field by site.'),
  'callback' => 'sites_search_ctools_access_check',
  'summary' => 'sites_search_summary',
);

/**
 * Check for access.
 */
function sites_search_ctools_access_check($conf, $context) {
  $current_site = SiteController::getCurrentSite();
  $lang = $GLOBALS['language']->language;
  if ($current_site->sid > 1 && empty($current_site->gss_api_key[$lang])) {
  	return FALSE;
  } else {
    return TRUE;
  }
}

/**
 * Summary
 */
function sites_search_summary() {
  return t('Current site shows language switcher');
}
