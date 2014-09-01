<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_entity_embed_entity_plugin() {
  $plugins['entity'] = array(
    'title' => t('Entity embed'),
    'icon file' => 'entity.png',
    'icon title' => t('Embed entity'),
    'settings' => array(
      'dialog' => array(
        'url' => '',
        'width' => 700,
        'height' => 700,
      ),
    ),
  );
  return $plugins;
}

