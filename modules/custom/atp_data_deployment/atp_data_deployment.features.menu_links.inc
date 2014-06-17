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
  // Exported menu link: menu-footer_i-fokus:<front>
  $menu_links['menu-footer_i-fokus:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'I fokus',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_i-fokus:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_job:<front>
  $menu_links['menu-footer_job:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Job',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_job:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_presse:<front>
  $menu_links['menu-footer_presse:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Presse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_presse:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_rapporter--resultater:<front>
  $menu_links['menu-footer_rapporter--resultater:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Rapporter & resultater',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_rapporter--resultater:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_samfundsansvar:<front>
  $menu_links['menu-footer_samfundsansvar:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Samfundsansvar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_samfundsansvar:<front>',
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
  t('I fokus');
  t('Job');
  t('Presse');
  t('Rapporter & resultater');
  t('Samfundsansvar');
  t('Sitemap');


  return $menu_links;
}
