<?php

/**
 * @file
 * Helper class to handle site resources such as a menu or a context.
 */

class SiteResourcesController {

  /**
   *  Create site term
   */
  public static function createTerm(&$site) {
    $site_taxonomy = taxonomy_vocabulary_machine_name_load('sites');
    $term = new stdClass();
    $term->name = $site->title;
    $term->vid = $site_taxonomy->vid;
    taxonomy_term_save($term);

    // Tell workbench access that this term is used for access control.
    $section = array(
      'access_id' => $term->tid,
      'access_type' => 'taxonomy',
      'access_scheme' => 'taxonomy',
      'access_type_id' => 'sites',
    );

    workbench_access_section_save($section);

    $site->site_term = $term->tid;
  }

  /**
   * Deletes resources for a given site.
   *
   * @param Site $site.
   *   The site object to delete resources for.
   */
  public static function deleteResources($site) {

    // Delete the menu.
    if ($site->menu_main_menu != 'main-menu') {
      $menu = menu_load($site->menu_main_menu);
      if ($menu) {
        menu_delete($menu);
      }
    }

    // Delete the alias.
    $path = path_load($site->purl_prefix);
    if (! empty($path)) {
      path_delete($path);
    }
  }

  /**
   * Creates a menu for a site.
   */
  public static function createMenu(&$site) {
    $menu = array();
    $menu['title'] = 'Subsite:' . $site->title;
    $menu['description'] = 'Menu for the ' . $site->title . ' subsite';
    $menu['menu_name'] = $site->machine_name;
    $menu['i18n_mode'] = 5; // Translate and Localize.
    menu_save($menu);
    $site->menu_main_menu = $menu['menu_name'];
  }

  /**
   * Update paths when a site's purl prefix has changed.
   *
   * @param int $site_id
   *   Site ID.
   * @param string $original_path
   *   The original path, before the site's purl prefix was changed.
   * @param string $new_path
   *   The new path, after the site's purl prefix was changed.
   */
  public static function updatePaths($site_id, $original_path, $new_path) {

    // Get all nodes linked to this subsite.
    $query = db_select('sites', 's');
    $query->join('workbench_access_node', 'w', 'w.access_id = s.site_term');
    $results = $query
              ->fields('w', array('nid'))
              ->condition('sid', $site_id)
              ->execute();

    $nodes = array();
    while ($nid = $results->fetchField()) {
     $nodes[] = 'node/' . $nid;
    }

    // We use this query for performance reasons. Db_query() is used because the
    // replace function can not be called with db_update.
    db_query("UPDATE url_alias SET alias = REPLACE(alias, :prev, :new) WHERE source IN (:nodes)", array(':prev' => $original_path . '/', ':new' => $new_path . '/', ':nodes' => $nodes));
  }

}
