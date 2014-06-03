<?php
/**
 * @file
 * atp_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function atp_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'category_related';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'category_related';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_page_related_field_ter_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Multifield: Category */
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['id'] = 'field_page_related_field_ter_category';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['field'] = 'field_page_related_field_ter_category';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['element_label_colon'] = FALSE;
  /* Field: Multifield: Page */
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['id'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['field'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_label_colon'] = FALSE;
  /* Sort criterion: Indhold: Page related (field_page_related:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: A */
  $handler = $view->new_display('panel_pane', 'A', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category-a';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Multifield: Page */
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['id'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['field'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['settings'] = array(
    'view_mode' => 'teaser_with_img',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: B */
  $handler = $view->new_display('panel_pane', 'B', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category-b';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Multifield: Page */
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['id'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['field'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: C */
  $handler = $view->new_display('panel_pane', 'C', 'panel_pane_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category-c';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Multifield: Page */
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['id'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['field'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['settings'] = array(
    'view_mode' => 'teaser_with_img',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: D */
  $handler = $view->new_display('panel_pane', 'D', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category-d';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Multifield: Category */
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['id'] = 'field_page_related_field_ter_category';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['field'] = 'field_page_related_field_ter_category';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['delta_offset'] = '0';
  /* Field: Multifield: Page */
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['id'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['field'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['category_related'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('All'),
    t('A'),
    t('View panes'),
    t('B'),
    t('C'),
    t('D'),
  );
  $export['category_related'] = $view;

  return $export;
}
