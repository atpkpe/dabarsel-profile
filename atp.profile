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