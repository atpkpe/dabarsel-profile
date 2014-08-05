<?php

/**
 * @file
 * Administrative page callbacks for the Atp Siteimprove module.
 */

/**
 * Implements hook_admin_settings() for module settings configuration.
 */
function atp_siteimprove_admin_settings_form($form_state) {
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
  );

  $form['account']['atp_siteimprove_snippet'] = array(
    '#title' => t('Siteimprove snippet'),
    '#type' => 'textarea',
    '#default_value' => variable_get('atp_siteimprove_snippet', atp_siteimprove_default_snippet()),
    '#required' => TRUE,
    '#description' => t('This snippet is being loaded on the given pages.'),
  );

  // Visibility settings.
  $form['tracking_title'] = array(
    '#type' => 'item',
    '#title' => t('Tracking scope'),
  );
  $form['tracking'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['tracking']['page_vis_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Pages'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['tracking']['page_vis_settings']['atp_siteimprove_visibility_pages'] = array(
    '#type' => 'radios',
    '#title' => t('Add tracking to specific pages'),
    '#options' => array(
      t('Every page except the listed pages'),
      t('The listed pages only'),
    ),
    '#default_value' => variable_get('atp_siteimprove_visibility_pages', 0),
  );
  $form['tracking']['page_vis_settings']['atp_siteimprove_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Pages'),
    '#title_display' => 'invisible',
    '#default_value' => variable_get('atp_siteimprove_pages', ATP_SITEIMPROVEPAGES),
    '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
    '#rows' => 10,
  );

  // Advanced feature configurations.
  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['advanced']['atp_siteimprove_js_scope'] = array(
    '#type' => 'select',
    '#title' => t('JavaScript scope'),
    '#description' => t('Google recommends adding the external JavaScript files to the header for performance reasons. If <em>Multiple top-level domains</em> has been selected, this setting will be forced to header.'),
    '#options' => array(
      'footer' => t('Footer'),
      'header' => t('Header'),
    ),
    '#default_value' => variable_get('atp_siteimprove_js_scope', 'header'),
  );

  return system_settings_form($form);
}

/**
 * Implements _form_validate().
 */
function atp_siteimprove_admin_settings_form_validate($form, &$form_state) {
  $form_state['values']['atp_siteimprove_pages'] = trim($form_state['values']['atp_siteimprove_pages']);
}
