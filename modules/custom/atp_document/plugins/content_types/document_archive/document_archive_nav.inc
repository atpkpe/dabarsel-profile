<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Document Archive Navigation'),
  'description' => t('Shows a navigation bar for the archive of documents.'),
  'category' => array(t('ATP'), -9),
  'edit form' => 'document_archive_nav_content_type_edit_form',
  'render callback' => 'document_archive_nav_content_type_render',
  'admin title' => 'document_archive_nav_content_type_admin_title',
  'admin info' => 'document_archive_nav_content_type_admin_info',
  'defaults' => array(
    'media_folder_root_tid' => 56,
    'media_folder_vocab' => ATP_DOCUMENT_VOCAB_MEDIA_FOLDERS_MACHINE_NAME,
  ),
);


/**
 * Content pane render function.
 */
function document_archive_nav_content_type_render($subtype, $conf, $panel_args, &$context) {
  $block = new stdClass();
  $block->content = array();

  $items_nav = array();

  $media_folder_vocab = taxonomy_vocabulary_machine_name_load($conf['media_folder_vocab']);
  // Get term tree.
  $term_tree = taxonomy_get_tree($media_folder_vocab->vid, $conf['media_folder_root_tid']);
  $active_isset = FALSE;
  foreach($term_tree as $term) {
    // Collect root items.
    if ($term->parents[0] == $conf['media_folder_root_tid']) {
      $classes = array('atp-document-archive-nav-item');
      // Set active class on first element.
      if (!$active_isset) {
        $classes[] = 'active';
        $active_isset = TRUE;
      }
      $items_nav[$term->tid] = array(
        'data' => l(
          $term->name,
          sprintf('atp-document/archive/ajax/load-tree/%s/%s', $conf['media_folder_vocab'], $term->tid),
          array('attributes' => array('class' => array('atp-document-archive-nav-item')))),
      );
    }

  }
  // Wrap up navigation in an item_list.
  $block->content = array(
    'nav' => array(
      '#theme' => 'item_list',
      '#items' => $items_nav,
      '#attributes' => array('class' => array('atp-document-archive-nav')),
    ),
  );

  return $block;
}

/**
 * Content pane admin title function.
 */
function document_archive_nav_content_type_admin_title($subtype, $conf, $context) {
  return t('Document Archive Navigation');
}


/**
 * Content pane admin info function.
 */
function document_archive_nav_content_type_admin_info($subtype, $conf, $context) {
  $root_term = taxonomy_term_load($conf['media_folder_root_tid']);
  $output = new stdClass();
  $output->title = t(
    'Root term id: @media_folder_root_tid (@media_folder_root_term_name) | Vocabulary: @media_folder_vocab',
    array(
      '@media_folder_root_tid' => $conf['media_folder_root_tid'],
      '@media_folder_root_term_name' => $root_term->name,
      '@media_folder_vocab' => $conf['media_folder_vocab']
    )
  );
  $output->content = '';
  return $output;
}

/**
 * Content pane configuration form function.
 */
function document_archive_nav_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $conf += $form_state['plugin']['defaults'];
  $root_term = taxonomy_term_load(56);

  $form['media_folder_root_tid'] = array(
    '#title' => t('Root term id'),
    '#description' => t(
      'The parent term id used as the beginning of the tree. Defaults to: @tid (@term_name).',
      array('@tid' => $root_term->tid, '@term_name' => $root_term->name)
    ),
    '#type' => 'textfield',
    '#default_value' => $conf['media_folder_root_tid'],
  );
  $form['media_folder_vocab'] = array(
    '#title' => t('Vocabulary.'),
    '#description' => t('Vocabulary name of the media folder. Defaults to: "media_folders".'),
    '#type' => 'textfield',
    '#default_value' => $conf['media_folder_vocab'],
  );

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function document_archive_nav_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
