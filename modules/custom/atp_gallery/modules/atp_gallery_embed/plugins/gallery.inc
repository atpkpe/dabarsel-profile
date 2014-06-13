<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function atp_gallery_embed_gallery_plugin() {
  $plugins['gallery'] = array(
    'title' => t('Gallery'),
    'icon file' => 'gallery.png',
    'icon title' => t('Insert gallery'),
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

