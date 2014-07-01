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
    'draft:deleted' => array(
      'from_name' => 'draft',
      'to_name' => 'deleted',
    ),
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
    ),
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
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
    'published:deleted' => array(
      'from_name' => 'published',
      'to_name' => 'deleted',
    ),
  );
  return $items;
}
