<?php
/**
 * @file
 * atp_workflow.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function atp_workflow_workbench_moderation_export_transitions() {
  $items = array(
    'approved:published' => array(
      'from_name' => 'approved',
      'to_name' => 'published',
    ),
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
    ),
    'needs_review:approved' => array(
      'from_name' => 'needs_review',
      'to_name' => 'approved',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
    ),
  );
  return $items;
}
