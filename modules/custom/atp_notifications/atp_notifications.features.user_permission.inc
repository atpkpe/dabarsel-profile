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

  // Exported permission: 'administer node expire'.
  $permissions['administer node expire'] = array(
    'name' => 'administer node expire',
    'roles' => array(
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'node_expire',
  );

  // Exported permission: 'edit node expire'.
  $permissions['edit node expire'] = array(
    'name' => 'edit node expire',
    'roles' => array(
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'node_expire',
  );

  // Exported permission: 'flag notification_node_auto_unpublish'.
  $permissions['flag notification_node_auto_unpublish'] = array(
    'name' => 'flag notification_node_auto_unpublish',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag notification_node_changed'.
  $permissions['flag notification_node_changed'] = array(
    'name' => 'flag notification_node_changed',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag notification_node_expiration'.
  $permissions['flag notification_node_expiration'] = array(
    'name' => 'flag notification_node_expiration',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag notification_node_auto_unpublish'.
  $permissions['unflag notification_node_auto_unpublish'] = array(
    'name' => 'unflag notification_node_auto_unpublish',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag notification_node_changed'.
  $permissions['unflag notification_node_changed'] = array(
    'name' => 'unflag notification_node_changed',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag notification_node_expiration'.
  $permissions['unflag notification_node_expiration'] = array(
    'name' => 'unflag notification_node_expiration',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
