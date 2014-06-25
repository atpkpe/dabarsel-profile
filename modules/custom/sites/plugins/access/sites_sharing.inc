<?php

/**
 * @file
 * Plugin to provide sharing links access control based upon sites.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Current site - sharing links'),
  'description' => t('Control display of sharing links by site.'),
  'callback' => 'sites_sharing_links_ctools_access_check',
  'summary' => 'sites_sharing_links_summary',
);

/**
 * Check for access.
 */
function sites_sharing_links_ctools_access_check($conf, $context) {
  $current_site = SiteController::getCurrentSite();
  return $current_site->sharing_links == 1;
}

/**
 * Summary
 */
function sites_sharing_links_summary() {
  return t('Current sites shows sharing links');
}
