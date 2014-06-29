<?php
/**
 * @file
 * atp_workflow.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function atp_workflow_user_default_roles() {
  $roles = array();

  // Exported role: Extended layout.
  $roles['Extended layout'] = array(
    'name' => 'Extended layout',
    'weight' => 5,
  );

  // Exported role: atp.dk.
  $roles['atp.dk'] = array(
    'name' => 'atp.dk',
    'weight' => 7,
  );

  return $roles;
}
