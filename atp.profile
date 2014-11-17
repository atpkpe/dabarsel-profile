<?php
/**
 * @file
 * Template profile file.
 */

/**
 * Implements hook_user_cancel_methods_alter().
 */
function atp_user_cancel_methods_alter(&$methods) {
  // We do not want the possibility of deleting user content.
  // And hence we remove that option.
  unset($methods['user_cancel_delete']);
}

/**
 * Implements hook_menu_block_tree_alter().
 */
function atp_menu_block_tree_alter(&$tree, &$config) {
  global $language;

  // Make footer menu title translatable.
  // Takes for granted that menu title is translation source.
  if ($config['menu_name'] == 'menu-footer') {
    $menu = menu_load('menu-footer');
    menu_block_set_title(locale($menu['title'], '', $language->language));
  }

}
