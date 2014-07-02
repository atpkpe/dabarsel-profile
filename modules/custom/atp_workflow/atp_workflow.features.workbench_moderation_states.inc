<?php
/**
 * @file
 * atp_workflow.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function atp_workflow_workbench_moderation_export_states() {
  $items = array(
    'approved' => array(
      'name' => 'approved',
      'label' => 'Approved',
      'description' => 'Ready for publishing',
      'weight' => -7,
    ),
    'deleted' => array(
      'name' => 'deleted',
      'label' => 'Deleted',
      'description' => 'Mark content to be deleted',
      'weight' => -9,
    ),
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => -10,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Ready for moderation',
      'weight' => -8,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => -6,
    ),
  );
  return $items;
}
