<?php
/**
 * @file
 * atp_multifields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function atp_multifields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'multifield-tagged_entity_reference-field_ter_category'
  $field_instances['multifield-tagged_entity_reference-field_ter_category'] = array(
    'bundle' => 'tagged_entity_reference',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_ter_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'multifield-tagged_entity_reference-field_ter_related'
  $field_instances['multifield-tagged_entity_reference-field_ter_related'] = array(
    'bundle' => 'tagged_entity_reference',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_ter_related',
    'label' => 'Page',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Page');

  return $field_instances;
}
