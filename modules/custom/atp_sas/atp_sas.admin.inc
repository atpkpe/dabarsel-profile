<?php

function atp_sas_configuration_form($form, &$form_state) {
  $form['atp_sas_media_folder_tid'] = array(
    '#title' => t('The term id of the Sas media folder.'),
    '#description' => t('The root term id of the sas file browser.'),
    '#type' => 'textfield',
    '#default_value' => variable_get('atp_sas_media_folder_tid', ''),
    '#group' => 'settings',
  );

  return system_settings_form($form);
}