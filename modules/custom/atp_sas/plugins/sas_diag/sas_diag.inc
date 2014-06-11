<?php

/**
 * Specially named implementation of hook_wysiwyg_plugin().
 *
 * Should be named {$module}_{$plugin}_plugin().
 */
function atp_sas_sas_diag_plugin() {
  $plugins['sas_diag'] = array(
    'title' => t('SAS: Insert SAS diagram'),
    // The 'icon file' is the icon that appears in the Wysiwyg toolbar.
    'icon file' => 'sas_diag.toolbar_icon.png',
    'icon title' => t('Insert SAS diagram'),
    'settings' => array(
      'dialog' => array(
        'url' => '',
        'width' => 700,
        'height' => 300,
      ),
    ),
  );
  return $plugins;
}