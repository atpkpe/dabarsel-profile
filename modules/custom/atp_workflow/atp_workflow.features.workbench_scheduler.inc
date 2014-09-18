<?php
/**
 * @file
 * atp_workflow.features.workbench_scheduler.inc
 */

/**
 * Implements hook_workbench_scheduler_export_schedules().
 */
function atp_workflow_workbench_scheduler_export_schedules() {
  $items = array(
    'standard' => array(
      'sid' => 1,
      'name' => 'standard',
      'label' => 'Standard',
      'start_state' => 'published',
      'end_state' => 'unpublished',
      'types' => array(
        0 => 'component',
        1 => 'faktum',
        2 => 'gallery',
        3 => 'important_message',
        4 => 'news',
        5 => 'page',
        6 => 'section',
        7 => 'slide',
      ),
    ),
  );
  return $items;
}
