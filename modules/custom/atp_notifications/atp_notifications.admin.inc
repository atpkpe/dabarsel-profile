<?php
/**
 * @file
 * Notifications - admin area.
 */

function atp_notifications_configuration_form($form, &$form_state) {
  $form['atp_notifications_threshold_unpublished'] = array(
    '#title' => t('Notification threshold for scheduled unpublishing.'),
    '#description' => t('Threshold is measured in days. Default is 5 days of notification before scheduled day.'),
    '#type' => 'textfield',
    '#default_value' => 5,
    '#group' => 'settings'
  );

  return system_settings_form($form);
}