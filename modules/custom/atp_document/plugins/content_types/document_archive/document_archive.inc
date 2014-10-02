<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('Document Archive'),
  'description' => t('Shows an archive of documents.'),
  'category' => array(t('ATP'), -9),
  'edit form' => 'document_archive_content_type_edit_form',
  'render callback' => 'document_archive_content_type_render',
  'admin title' => 'document_archive_content_type_admin_title',
  'admin info' => 'document_archive_content_type_admin_info',
  'defaults' => array(
    'media_folder_root_tid' => 76,
    'media_folder_vocab' => ATP_DOCUMENT_VOCAB_MEDIA_FOLDERS_MACHINE_NAME,
  ),
);


/**
 * Content pane render function.
 */
function document_archive_content_type_render($subtype, $conf, $panel_args, &$context) {
  $block = new stdClass();
  $block->content = array();
  // Get document archive tree render array.
  $block->content['atp_document_archive_tree'] = atp_document_archive_tree(
    $conf['media_folder_vocab'],
    $conf['media_folder_root_tid']
  );
  // Attach js functionality.
  $block->content['atp_document_archive_tree'] += array(
    '#attached' => array(
      'js' => array(
        'data' => drupal_get_path('module', 'atp_document') . '/plugins/content_types/document_archive/document_archive.js',
        'group' => JS_THEME,
      ),
    ),
  );

  return $block;
}

/**
 * Content pane admin title function.
 */
function document_archive_content_type_admin_title($subtype, $conf, $context) {
  return t('Document Archive');
}


/**
 * Content pane admin info function.
 */
function document_archive_content_type_admin_info($subtype, $conf, $context) {
  $root_term = taxonomy_term_load($conf['media_folder_root_tid']);
  $output = new stdClass();
  $output->title = t(
    'Root term id: @media_folder_root_tid (@media_folder_root_term_name) | Vocabulary: @media_folder_vocab',
    array(
      '@media_folder_root_tid' => $conf['media_folder_root_tid'],
      '@media_folder_root_term_name' => $root_term->name,
      '@media_folder_vocab' => $conf['media_folder_vocab'],
    )
  );
  $output->content = '';
  return $output;
}

/**
 * Content pane configuration form function.
 */
function document_archive_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $conf += $form_state['plugin']['defaults'];

  $root_term = taxonomy_term_load(76);

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
function document_archive_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
