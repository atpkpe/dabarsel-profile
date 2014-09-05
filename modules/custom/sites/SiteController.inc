<?php

/**
 * @file
 * Site controller class.
 */

class SiteController {

  private static $current_site = NULL;

  /**
   * Gets current site from context.
   */
  public static function getCurrentSite() {
    if (!purl_inited()) {
      purl_init();
    }

    // Set default site.
    if (empty(self::$current_site)) {
      // TODO : make default site configurable.
      self::setCurrentSite(self::getSite(1));
    }

    return self::$current_site;
  }

  /**
   * Sets given site object as current.
   */
  public static function setCurrentSite($site) {
    self::$current_site = $site;
  }

  /**
   * Gets all sites.
   *
   * @return array
   *   List of sites.
   */
  public static function getSites() {
    $sites = array();

    $results = db_select('sites', 's')
                 ->fields('s')
                 ->execute();

    while ($site_raw_data = $results->fetchObject()) {
      $sites[$site_raw_data->sid] = SiteController::createSiteFromRawData($site_raw_data);
    }

    return $sites;
  }

  /**
   * Gets a single site.
   *
   * @param int $site_id
   *   The site ID.
   *
   * @return Site|bool
   *   Site object or false when no site was found.
   */
  public static function getSite($site_id) {
    if (empty($site_id)) {
      return FALSE;
    }

    // Get site data from database.
    $result = db_select('sites', 's')
              ->fields('s')
              ->condition('sid', $site_id)
              ->execute()
              ->fetchObject();

   // Get site multilanguage data from database.
   $result_multilanguage = db_select('sites_multilanguage', 's')
              ->fields('s')
              ->condition('sid', $site_id)
              ->execute()
              ->fetchAll();

    foreach ($result_multilanguage as $m) {
      $result->name[$m->language] = $m->name;
      $result->footer[$m->language] = $m->footer;
      $result->footer_format[$m->language] = $m->footer_format;
      $result->gss_api_key[$m->language] = $m->gss_api_key;
    }

    // Convert the raw database result to a Site instance.
    $site = self::createSiteFromRawData($result);

    if (empty($site->sid)) {
      return FALSE;
    }

    return $site;
  }

  public static function getSiteByName($machine_name) {
    if (empty($machine_name)) {
      return FALSE;
    }

    // Get site sid from database.
    $result = db_select('sites', 's')
      ->fields('s', array('sid'))
      ->condition('machine_name', $machine_name)
      ->execute()
      ->fetchField();

    if(empty($result)) {
      return FALSE;
    }

    return self::getSite($result);
  }

  /**
   * Get the site(s) that a given node belongs to.
   *
   * @param int $nid
   *   A node ID.
   *
   * @return array $sites
   *   Array of site information.
   */
  public static function getSitesByNode($nid) {

    $sites = array();

    $query = db_select('`workbench_access_node`', 'w');
    $query->join('sites', 's', 'w.access_id = s.site_term');
    $results = $query
              ->fields('s')
              ->condition('nid', $nid)
              ->execute();

    while ($site = $results->fetchObject()) {
      $sites[$site->sid] = $site;
    }

    return $sites;
  }

 /**
  *  Load site object by term id.
  */
  public static function getSiteByTerm($tid) {

    if (empty($tid)) {
      return FALSE;
    }

    // Get site sid from database.
    $result = db_select('sites', 's')
      ->fields('s', array('sid'))
      ->condition('site_term', $tid)
      ->execute()
      ->fetchField();

    if (empty($result)) {
      return FALSE;
    }

    return self::getSite($result);
  }

/**
  *  Load site object by term id.
  */
  public static function getMenusByTerm($tids) {

    if (empty($tids)) {
      return FALSE;
    }

    // Get site sid from database.
    $result = db_select('sites', 's')
      ->fields('s', array('sid','menu_main_menu'))
      ->condition('site_term', $tids, 'IN')
      ->execute()
      ->fetchAll();

    if (empty($result)) {
      return FALSE;
    }

    $menus = array();
    foreach ($result as $row) {
      $menus[$row->menu_main_menu] = $row->menu_main_menu;
      if ($row->sid == 1) {
        $menus['menu-footer'] = 'menu-footer';
        $menus['menu-bottom-menu'] = 'menu-bottom-menu';
        $menus['menu-top'] = 'menu-top';
      }
    }

    return $menus;

  }

/**
  *  Add subsite menus
  */
  public static function addSiteMenus(&$menus) {

    // Get site sid from database.
    $result = db_select('sites', 's')
      ->fields('s', array('menu_main_menu'))
      ->condition('sid', 1, '>')
      ->execute()
      ->fetchAll();

    foreach ($result as $row) {
      $menus[$row->menu_main_menu] = $row->menu_main_menu;
    }

  }

  /**
   * Deletes a site and all it's resources.
   *
   * @param int $site_id
   *   Site ID.
   */
  public static function deleteSite($site_id) {
    $site = self::getSite($site_id);

    // Delete corresponding row from sites table.
    db_delete('sites')
      ->condition('sid', $site_id)
      ->execute();

    // Delete corresponding row from sites_multilanguage table.
    db_delete('sites_multilanguage')
      ->condition('sid', $site_id)
      ->execute();

    // delete PURL prefix
    purl_delete(array(
      'provider' => 'sites',
      'id' => $site_id,
    ));

    // Delete site's resources.
    SiteResourcesController::deleteResources($site);
  }

  /**
   * Deletes a site and all it's resources by machine_name.
   *
   * @param string $machine_name
   *   Site machine name.
   */
  public static function deleteSiteByName($machine_name) {
    if (empty($machine_name)) {
      return FALSE;
    }

    // Get site sid from database.
    $sid = db_select('sites', 's')
      ->fields('s', array('sid'))
      ->condition('machine_name', $machine_name)
      ->execute()
      ->fetchField();

    if(empty($result)) {
      return FALSE;
    }

    self::deleteSite($sid);
  }

  /**
   * Gets the current theme if there is a site active.
   *
   * @return string|NULL
   *   Theme name or false if no subsite is active.
   */
  public static function getCurrentTheme() {
    $site = SiteController::getCurrentSite();
    return $site ? $site->theme : NULL;
  }

  /**
   * Shows an overview page of all the sites.
   */
  public static function pageAdminOverview() {
    $table_info = self::getSitesTableInfo();
    $rows = array();
    $current_site = self::getCurrentSite();

    // Iterate through the sites and build the table rows.
    foreach ($table_info['results'] as $site) {
      purl_disable(TRUE);
      $operation_links = self::getOperationLinks($site);
      $rows[] = array(
        'data' => array($site->title, $site->purl_prefix, $operation_links['edit'] . ' ' . $operation_links['delete'])
      );
    }

    // Build the output.
    $output = theme('table', array('header' => $table_info['header'], 'rows' => $rows, 'caption' => '', 'sticky' => TRUE, 'empty' => t("You haven't created any sites yet.")));
    // Add the pager.
    $output .= theme('pager', array('tags' => array()));

    return $output;
  }

  /**
   * Determins if a path is a purl modifier used by sites.
   */
  public static function isSitePurlModifier($path = NULL) {
    // Determine path to check.
    $purl_prefix = ($path === NULL) ? arg(0) : $path;
    $modifier_to_fetch = array('value' => $purl_prefix, 'provider' => 'sites');
    // Try to load the purl modifier.
    $modifier = purl_load($modifier_to_fetch);
    if ($modifier == FALSE) {
      return FALSE;
    }
    return $modifier;
  }

  /**
   * Gets a list of sites meant to be used in a sortable, paged table.
   */
  protected static function getSitesTableInfo() {
    // Build the table header: Name | Title | Url | Actions.
    $header = array(
      //array('data' => 'Name', 'field' => 'name', 'sort' => 'asc',),
      array('data' => 'Title', 'field' => 'title',),
      array('data' => 'Url', 'field' => 'purl_prefix',),
      array('data' => ''),
    );

    // Build a query with pager and tablesorting.
    $query = db_select('sites', 's');
    $results = $query
      ->extend('PagerDefault')
      ->extend('TableSort')
      ->limit(10)
      ->orderByHeader($header)
      ->fields('s', array('sid', 'title', 'purl_prefix',))
      ->execute();

    return array('results' => $results, 'header' => $header, 'query' => $query);
  }

  /**
   * Gets a list of operation links for a given site.
   */
  protected static function getOperationLinks($site) {
    $operation_links = array();

    // We're not currently in any subsite context.
    $operation_links['edit']    = l(t('edit'), 'admin/structure/sites/edit/' . $site->sid);
    if ($site->sid > 1) {
      $operation_links['delete']  = l(t('delete'), 'admin/structure/sites/delete/' . $site->sid);
    } else {
      $operation_links['delete']  = '';
    }
    $operation_links['add']     = l(t('Add a new site'), 'admin/structure/sites/add');

    return $operation_links;
  }

  /**
   * Creates a site object based on raw data.
   */
  public static function createSiteFromRawData($raw_data) {
    $properties = array('sid', 'purl_prefix', 'title', 'machine_name',
                        'front_page', 'menu_main_menu', 'menu_secondary_menu',
                        'theme', 'language_switcher','sharing_links',
                        'site_term', 'contact_page', 'footer', 'footer_format',
                        'name', 'gss_api_key', 'status'
                       );
    $site = new Site();
    if (is_array($raw_data)) {
      foreach ($properties as $property) {
        if (isset($raw_data[$property])) {
          $site->$property = $raw_data[$property];
        }
      }
    }
    else if (is_object($raw_data)) {
      foreach ($properties as $property) {
        if (isset($raw_data->$property)) {
          $site->$property = $raw_data->$property;
        }
      }
    }
    return $site;
  }
}
