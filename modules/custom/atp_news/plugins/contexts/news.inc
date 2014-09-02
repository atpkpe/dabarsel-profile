<?php

/**
 * @file
 *
 * Plugin to provide a news context
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('News'),
  'description' => t('A collection of settings in order to present news.'),
  'context' => 'ctools_context_create_news',
  'keyword' => 'news',
  'no ui' => FALSE,
  'context name' => 'news',
  'edit form' => 'ctools_context_news_settings_form',
  'defaults' => array(
    'news_vocab' => 'news_categories',
    'categories' => array(),
    'list_type' => 'fixed_categories',
    'items_per_page' => 5,
  ),
);

/**
 * It's important to remember that $conf is optional here, because contexts
 * are not always created from the UI.
 */
function ctools_context_create_news($empty, $data = NULL, $conf = FALSE) {
  // The input is expected to be an object as created by ctools_break_phrase
  // which contains a group of string.

  $context = new ctools_context('news');
  $context->plugin = 'news';

  if ($empty) {
    return $context;
  }

  if ($data !== FALSE ) {
    if (!empty($data['categories'])) {
      $data['categories'] = array_filter($data['categories']);
    }
    $context->data = $data;
    $context->title = ($conf) ? check_plain($data['identifier']) : check_plain($data);
    return $context;
  }
}

function ctools_context_news_settings_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $conf += $form_state['plugin']['defaults'];
  $vocab_categories = taxonomy_vocabulary_machine_name_load($conf['news_vocab']);
  $vid = $vocab_categories->vid;

  $tid_categories = array();
  foreach (taxonomy_get_tree($vid) as $term) {
    $tid_categories[$term->tid] = $term->name;
  }
  $list_type_options = atp_news_list_type_options();
  $list_type_options = array_map(function($v){
    return $v['title'];
  }, $list_type_options);

  $form['items_per_page'] = array(
    '#type' => 'textfield',
    '#title' => t('Items per page.'),
    '#description' => t('Number of items shown per page. 0 = unlimted.'),
    '#size' => 2,
    '#maxlength' => 2,
    '#default_value' => $conf['items_per_page'],
  );
  $form['list_type'] = array(
    '#type' => 'radios',
    '#title' => t('Choose news list type.'),
    '#description' => t('Choose if the list should be a plain list or a list with filtering options.'),
    '#options' => $list_type_options,
    '#default_value' => $conf['list_type'],
  );
  $form['categories'] = array(
    '#title' => t('News Categories'),
    '#description' => t('Choose one ore more categories to filter list by. No categories chosen exposes all news items.'),
    '#type' => 'checkboxes',
    '#options' => $tid_categories,
    '#states' => array(
      'visible' => array(
        ':input[name="list_type"]' => array('value' => 'fixed_categories'),
      ),
    ),
    '#default_value' => $conf['categories'],
  );

  return $form;
}

