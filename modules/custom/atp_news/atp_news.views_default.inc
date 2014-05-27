<?php
/**
 * @file
 * atp_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function atp_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_list';
  $view->description = 'Shows a list of news optionally filtered by news categories';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'hidden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40, 50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Indhold: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_type'] = 'div';
  $handler->display->display_options['fields']['changed']['element_class'] = 'date';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'adapt_long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'Europe/Copenhagen';
  /* Field: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Indhold: Summary */
  $handler->display->display_options['fields']['field_news_summary']['id'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['table'] = 'field_data_field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['field'] = 'field_news_summary';
  $handler->display->display_options['fields']['field_news_summary']['label'] = '';
  $handler->display->display_options['fields']['field_news_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_summary']['alter']['text'] = '[field_news_summary-value] ';
  $handler->display->display_options['fields']['field_news_summary']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_news_summary']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_news_summary']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_news_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_news_summary']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_summary']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_news_summary']['element_wrapper_class'] = 'summary';
  $handler->display->display_options['fields']['field_news_summary']['element_default_classes'] = FALSE;
  /* Sort criterion: Indhold: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indhold: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Indhold: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    2 => '2',
    4 => '4',
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news_categories';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'default_display');
  $translatables['news_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Gendan'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[field_news_summary-value] '),
    t('Has taxonomy term'),
    t('Content pane'),
    t('View panes'),
  );
  $export['news_list'] = $view;

  return $export;
}