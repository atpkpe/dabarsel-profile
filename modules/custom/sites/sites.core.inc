<?php

/**
 * @file
 * Core functions for Sites module.
 */

/**
 * Invoked by PURL.
 */
function sites_set_current_site($sid) {

  // Make the sid and full site object easily available to other functionality
  $site = SiteController::getSite($sid);
  SiteController::setCurrentSite($site);

  // Handle per-site front page overrides.
  if (drupal_is_front_page() && !empty($site->front_page) && $site->sid > 1) {
    $nid = explode('node/', $site->front_page);
    $translations = translation_node_get_translations($nid[1]);
    if ($translations) {
      global $language;
      $_GET['q'] = 'node/' . $translations[$language->language]->nid;
    } else {
      $_GET['q'] = $site->front_page;
    }
  }

}

/**
 * Get the unique name of the menu to be used in place of the menu specified
 * in the $menu_name argument (right now, can only be main_menu or
 * secondary_menu).
 *
 * @param $menu_name
 *   Either 'main_menu' or 'secondary_menu'.
 *
 * @return bool
 *   If the requested menu is set, its name is returned.  Otherwise, FALSE.
 */
function sites_get_current_menu_source($menu_name) {
  $current_site = SiteController::getCurrentSite();
  if (!empty($current_site->{'menu_' . $menu_name})) {
    return $current_site->{'menu_' . $menu_name};
  }
  return FALSE;
}
