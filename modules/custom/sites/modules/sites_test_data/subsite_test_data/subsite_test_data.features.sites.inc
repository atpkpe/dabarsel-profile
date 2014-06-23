<?php
/**
 * @file
 * subsite_test_data.features.sites.inc
 */

/**
 * Implements hook_sites_defaults().
 */
function subsite_test_data_sites_defaults() {
$sites = array();
  $sites['main_site'] = array(
  'purl_prefix' => 'main-site',
  'title' => 'ATP',
  'machine_name' => 'main_site',
  'front_page' => '',
  'contact_page' => '',
  'menu_main_menu' => 'main-menu',
  'theme' => 'atp_theme',
  'name' => array(
    'da' => 'ATP',
    'en' => 'ATP',
  ),
  'footer' => array(
    'da' => '<p>DETTE STÅR I SITE FOOTER</p>',
    'en' => '',
  ),
  'footer_format' => array(
    'da' => 'filtered_html',
    'en' => 'filtered_html',
  ),
  'language_switcher' => 1,
  'sharing_links' => 1,
  'site_term' => 5,
);
  $sites['subsite'] = array(
  'purl_prefix' => 'subsite',
  'title' => 'Subsite',
  'machine_name' => 'subsite',
  'front_page' => 'node/36',
  'contact_page' => 'node/38',
  'menu_main_menu' => 'subsite',
  'theme' => 'atp_theme',
  'name' => array(
    'da' => 'Et ATP subsite',
    'en' => 'An ATP subsite',
  ),
  'footer' => array(
    'da' => '<p>DENNE TEKST STÅR I FOOTER</p>',
    'en' => '',
  ),
  'footer_format' => array(
    'da' => 'filtered_html',
    'en' => 'filtered_html',
  ),
  'language_switcher' => 1,
  'sharing_links' => 0,
  'site_term' => 12,
);
return $sites;
}
