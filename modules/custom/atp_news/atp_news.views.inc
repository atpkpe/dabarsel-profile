<?php

/**
 * @file
 * Contains the Views Hide Exposed Form plugin.
 */

/**
 * Implements hook_views_plugins().
 */
function atp_news_views_plugins() {
  return array(
    'exposed_form' => array(
      'hidden' => array(
        'title' => t('Hidden'),
        'help' => t('Hidden exposed form'),
        'handler' => 'atp_news_plugin_exposed_form_hidden',
        'help topic' => 'exposed-form-hidden',
      ),
    ),
  );
}
