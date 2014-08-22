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

function atp_notifications_overview_list() {
  $items = array();

  $view = views_get_view('notification_overview');
  $view->set_display('expired');
  $items[] = l(t('Expired content'), $view->get_url());
  $view->set_display('unpublished');
  $items[] = l(t('Content scheduled to be unpublished'), $view->get_url());

  $output = theme('item_list', array('title' => t('Overviews'), 'items' => $items));
  $form = drupal_get_form('atp_notifications_configuration_form');
  $output .= drupal_render($form);
  return $output;
}