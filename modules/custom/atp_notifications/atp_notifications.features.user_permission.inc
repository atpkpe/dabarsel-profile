<?php
/**
 * @file
 * atp_notifications.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atp_notifications_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer atp notifications'.
  $permissions['administer atp notifications'] = array(
    'name' => 'administer atp notifications',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'atp_notifications',
  );

  return $permissions;
}
