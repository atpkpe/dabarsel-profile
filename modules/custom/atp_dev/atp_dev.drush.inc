<?php

/**
 * Implements hook_drush_command().
 */
function atp_dev_drush_command() {
  $items = array();
  $items['atp-set-frontpage'] = array(
    'callback' => 'atp_set_frontpage',
    'description' => dt('Set front page for developing purpose.'),
  'options' => array(
      'uuid' => 'Option to set front page based on UUID.',
      'nid' => 'Option to set front page base on node id.',
    ),
  );
  return $items;
}

/**
 * Implements hook_drush_help().
 */
function atp_dev_drush_help($section) {
  switch ($section) {
    case 'drush:atp-set-frontpage':
      return dt("It fetches the nid for the frontpage base on a fixed UUID. Unless --uuid or --nid is specified.");
      break;
  }
}

/**
 * Set frontpage path. Either automatically base on a constant UUID
 * or by specifying either nid or uuid manually.
 */
function atp_set_frontpage() {
  $nid = 0;

  if (drush_get_option('uuid')) {
    $uuid = drush_get_option('uuid');
    $fp = entity_get_id_by_uuid('node', array($uuid));
    if (!empty($fp) && !empty($fp[$uuid])) {
      $nid = (int) $fp[$uuid];
    }
  }
  elseif (drush_get_option('nid')) {
    $nid = drush_get_option('nid');
  }
  else {
    $fp = entity_get_id_by_uuid('node', array(ATP_DEV_UUID_FRONTPAGE));
    if (!empty($fp) && !empty($fp[ATP_DEV_UUID_FRONTPAGE])) {
      $nid = (int) $fp[ATP_DEV_UUID_FRONTPAGE];
    }
  }

  if ($nid) {
    $frontpage_path = sprintf('node/%s', $nid);
    watchdog(
      'atp_dev:update',
      t('Setting front page path to %path', array('%path' => $frontpage_path))
    );
    variable_set('site_frontpage', $frontpage_path);
  }

}
