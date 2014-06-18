<?php

/**
 * @file
 * Plugin to provide subsite access control based upon sites.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Current site - subsite'),
  'description' => t('Check if site is a susbsite.'),
  'callback' => 'sites_subsite_ctools_access_check',
  'summary' => 'sites_subsite_summary',
);

/**
 * Check for access.
 */
function sites_subsite_ctools_access_check($conf, $context) {
  $current_site = SiteController::getCurrentSite();
  return $current_site->sid > 1;
}

/**
 * Summary
 */
function sites_subsite_summary() {
  return t('Current site is a subsite');
}