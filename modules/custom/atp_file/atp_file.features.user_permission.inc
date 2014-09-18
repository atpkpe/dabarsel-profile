<?php
/**
 * @file
 * atp_file.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atp_file_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any zip_archive files'.
  $permissions['delete any zip_archive files'] = array(
    'name' => 'delete any zip_archive files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own zip_archive files'.
  $permissions['delete own zip_archive files'] = array(
    'name' => 'delete own zip_archive files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any zip_archive files'.
  $permissions['download any zip_archive files'] = array(
    'name' => 'download any zip_archive files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own zip_archive files'.
  $permissions['download own zip_archive files'] = array(
    'name' => 'download own zip_archive files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any zip_archive files'.
  $permissions['edit any zip_archive files'] = array(
    'name' => 'edit any zip_archive files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own zip_archive files'.
  $permissions['edit own zip_archive files'] = array(
    'name' => 'edit own zip_archive files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
