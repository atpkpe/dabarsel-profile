<?php

/**
 * @file
 * General helper class for sites.
 */

class SiteHelper {

  /**
   * Alters the node add/edit form when in a subsite.
   *
   * @param array $form
   *   The form to be altered.
   */
  public static function alterNodeForm(&$form) {

    if (!isset($form['nid']['#value'])) {
      $terms = array_keys($form['workbench_access']['workbench_access']['#options']);
      array_shift($terms);  // Remove the "select site" item.
    } else {
      $terms = $form['workbench_access']['workbench_access']['#default_value'];
    }

    $menus = SiteController::getMenusByTerm($terms);

    // Stop if we could't load a menu configuration
    if ($menus === FALSE ) {
      return;
    }

    $node_type = $form['type']['#value'];
    // Build available menu items.
    $options = menu_parent_options(menu_get_menus(),'');
    $filtered_options = array();
    foreach ($options as $key => $value) {
      $explode = explode(':', $key);
      // Only allow menu items that belong to this site's main menu.
      if (!empty($menus[$explode[0]])) {
        $filtered_options[$key] = $value;
      }
    }
    if (!empty($filtered_options)) {
      $form['menu']['link']['parent']['#options'] = $filtered_options;
    }
  }

  /**
   * Validates the add/edit site form.
   */
  public static function validateSiteForm(&$form, &$form_state) {
    // Check that site name is unique.
    //if (self::siteNameIsUnique($form_state) === FALSE) {
    //  form_set_error('site_name', t('Site name should be unique.'));
    //}
  }

  /**
   * Checks if a site name is unique.
   *
   * @param array $form_state
   *   Form state.
   *
   * @return bool
   *   True if site name is unique, false otherwise.
   */
  public static function siteNameIsUnique($form_state) {
    // Check that the site name is unique.
    $sites = SiteController::getSites();

    foreach ($sites as $site) {
      if ($site->name == $form_state['values']['site_name'] && $site->sid !== $form_state['values']['site_id']) {
        return FALSE;
      }
    }
    return TRUE;
  }
}
