<?php
/**
 * @file
 * atp_data_deployment.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function atp_data_deployment_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-bottom-menu_find-hjlp:<front>
  $menu_links['menu-bottom-menu_find-hjlp:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Find hjælp',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bottom-menu_find-hjlp:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bottom-menu_sitemap:<front>
  $menu_links['menu-bottom-menu_sitemap:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bottom-menu_sitemap:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Find hjælp');
  t('Sitemap');


  return $menu_links;
}
