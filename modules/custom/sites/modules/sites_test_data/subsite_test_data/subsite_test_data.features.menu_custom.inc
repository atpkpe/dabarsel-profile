<?php
/**
 * @file
 * subsite_test_data.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function subsite_test_data_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: subsite.
  $menus['subsite'] = array(
    'menu_name' => 'subsite',
    'title' => 'Subsite:Subsite',
    'description' => 'Menu for the Subsite subsite',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu for the Subsite subsite');
  t('Subsite:Subsite');


  return $menus;
}
