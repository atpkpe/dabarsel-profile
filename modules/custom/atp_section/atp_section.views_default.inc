<?php
/**
 * @file
 * atp_section.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function atp_section_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'section_category_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Section category views';
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
  /* Overskrift: Global: Ufiltreret tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>%1</h2>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['id'] = 'field_page_related_field_ter_category';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['field'] = 'field_page_related_field_ter_category';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_related_field_ter_category']['element_label_colon'] = FALSE;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['id'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['field'] = 'field_page_related_field_ter_related';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['label'] = '';
  $handler->display->display_options['fields']['field_page_related_field_ter_related']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Handler mangler eller er i stykker */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_page_related';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: F */
  $handler = $view->new_display('panel_pane', 'F', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'section-category-f';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Multifield: Title */
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['id'] = 'field_page_twt_field_twt_title';
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['table'] = 'field_data_field_page_twt';
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['field'] = 'field_page_twt_field_twt_title';
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['label'] = '';
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_page_twt_field_twt_title']['delta_offset'] = '0';
  /* Felt: Multifield: Text */
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['id'] = 'field_page_twt_field_twt_text';
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['table'] = 'field_data_field_page_twt';
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['field'] = 'field_page_twt_field_twt_text';
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['label'] = '';
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_page_twt_field_twt_text']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Text with title (field_page_twt:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_page_twt';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
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
  $translatables['section_category_views'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<h2>%1</h2>'),
    t('Alle'),
    t('F'),
    t('View panes'),
  );
  $export['section_category_views'] = $view;

  return $export;
}
