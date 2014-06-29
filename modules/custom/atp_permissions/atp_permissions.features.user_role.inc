<?php
/**
 * @file
 * atp_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function atp_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Author.
  $roles['Author'] = array(
    'name' => 'Author',
    'weight' => 4,
  );

  // Exported role: Developer.
  $roles['Developer'] = array(
    'name' => 'Developer',
    'weight' => 2,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 6,
  );

  // Exported role: Extended layout.
  $roles['Extended layout'] = array(
    'name' => 'Extended layout',
    'weight' => 5,
  );

  // Exported role: Site administrator.
  $roles['Site administrator'] = array(
    'name' => 'Site administrator',
    'weight' => 3,
  );

  // Exported role: atp.dk.
  $roles['atp.dk'] = array(
    'name' => 'atp.dk',
    'weight' => 7,
  );

  return $roles;
}
