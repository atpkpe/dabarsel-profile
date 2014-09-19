<?php
/**
 * @file
 * atp_notifications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function atp_notifications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'notification_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Notification overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Notification overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'expired_1' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'unpublish_on' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
    'expire' => 'expire',
    'unpublish_on' => 'unpublish_on',
  );
  $handler->display->display_options['style_options']['default'] = 'expire';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expire' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'unpublish_on' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Ufiltreret tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Opførsel ved ingen resultater: Global: Ufiltreret tekst */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Ingen resultater';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['unpublish_on']['id'] = 'unpublish_on';
  $handler->display->display_options['fields']['unpublish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['unpublish_on']['field'] = 'unpublish_on';
  /* Filterkriterie: Handler mangler eller er i stykker */
  $handler->display->display_options['filters']['unpublish_on']['id'] = 'unpublish_on';
  $handler->display->display_options['filters']['unpublish_on']['table'] = 'scheduler';
  $handler->display->display_options['filters']['unpublish_on']['field'] = 'unpublish_on';
  $handler->display->display_options['filters']['unpublish_on']['operator'] = 'between';
  $handler->display->display_options['filters']['unpublish_on']['exposed'] = TRUE;
  $handler->display->display_options['filters']['unpublish_on']['expose']['operator_id'] = 'unpublish_on_op';
  $handler->display->display_options['filters']['unpublish_on']['expose']['label'] = 'Afpublicér den';
  $handler->display->display_options['filters']['unpublish_on']['expose']['operator'] = 'unpublish_on_op';
  $handler->display->display_options['filters']['unpublish_on']['expose']['identifier'] = 'unpublish_on';
  $handler->display->display_options['filters']['unpublish_on']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filterkriterie: Handler mangler eller er i stykker */
  $handler->display->display_options['filters']['unpublish_on_1']['id'] = 'unpublish_on_1';
  $handler->display->display_options['filters']['unpublish_on_1']['table'] = 'scheduler';
  $handler->display->display_options['filters']['unpublish_on_1']['field'] = 'unpublish_on';

  /* Display: Expired */
  $handler = $view->new_display('page', 'Expired', 'expired');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Udløbsdato-oversigt';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Ufiltreret tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Du har tilmeldt din notifikationer på følgende indhold, der har ramt udløbsdato.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Flags: notification_node_expiration */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'notification_node_expiration';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indholdselement: Expire date */
  $handler->display->display_options['fields']['expire']['id'] = 'expire';
  $handler->display->display_options['fields']['expire']['table'] = 'node_expire';
  $handler->display->display_options['fields']['expire']['field'] = 'expire';
  $handler->display->display_options['fields']['expire']['date_format'] = 'atp_short';
  $handler->display->display_options['fields']['expire']['second_date_format'] = 'atp_long';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indholdselement: Expire date */
  $handler->display->display_options['sorts']['expire']['id'] = 'expire';
  $handler->display->display_options['sorts']['expire']['table'] = 'node_expire';
  $handler->display->display_options['sorts']['expire']['field'] = 'expire';
  $handler->display->display_options['sorts']['expire']['order'] = 'DESC';
  $handler->display->display_options['sorts']['expire']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indholdselement: Expired */
  $handler->display->display_options['filters']['expired']['id'] = 'expired';
  $handler->display->display_options['filters']['expired']['table'] = 'node_expire';
  $handler->display->display_options['filters']['expired']['field'] = 'expired';
  $handler->display->display_options['filters']['expired']['value'] = '1';
  $handler->display->display_options['filters']['expired']['exposed'] = TRUE;
  $handler->display->display_options['filters']['expired']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['expired']['expose']['label'] = 'Udløbet';
  $handler->display->display_options['filters']['expired']['expose']['operator'] = 'expired_op';
  $handler->display->display_options['filters']['expired']['expose']['identifier'] = 'expired';
  $handler->display->display_options['filters']['expired']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/notification-overview-expired';
  $handler->display->display_options['menu']['title'] = 'Notifikationer: Udløbsdato-oversigt';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Unpublished */
  $handler = $view->new_display('page', 'Unpublished', 'unpublished');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Auto-afpubliceringsoversigt';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'unpublish_on' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Ufiltreret tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Du har tilmeldt din notifikationer på følgende indhold, der nærmer sig auto-afpubliceringsdato';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Flags: notification_node_auto_unpublish */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'notification_node_auto_unpublish';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Workbench Scheduler: Slutdato */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'workbench_scheduler_nodes';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['label'] = 'Afpubliseringsdato';
  $handler->display->display_options['fields']['end_date']['date_format'] = 'atp_long';
  $handler->display->display_options['fields']['end_date']['second_date_format'] = 'atp_long';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Workbench Scheduler: Slutdato */
  $handler->display->display_options['sorts']['end_date']['id'] = 'end_date';
  $handler->display->display_options['sorts']['end_date']['table'] = 'workbench_scheduler_nodes';
  $handler->display->display_options['sorts']['end_date']['field'] = 'end_date';
  $handler->display->display_options['sorts']['end_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['end_date']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/notification-overview-unpublished';
  $handler->display->display_options['menu']['title'] = 'Notificationer: Auto-afpubliceringsoversigt';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['notification_overview'] = array(
    t('Master'),
    t('Notification overview'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Select any filter and click on Apply to see results'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Ingen resultater'),
    t('Titel'),
    t('Redigér-link'),
    t('Handler i stykker scheduler.unpublish_on'),
    t('Afpublicér den'),
    t('Expired'),
    t('Udløbsdato-oversigt'),
    t('Du har tilmeldt din notifikationer på følgende indhold, der har ramt udløbsdato.'),
    t('flag'),
    t('Expire date'),
    t('Udløbet'),
    t('Unpublished'),
    t('Auto-afpubliceringsoversigt'),
    t('Du har tilmeldt din notifikationer på følgende indhold, der nærmer sig auto-afpubliceringsdato'),
    t('Afpubliseringsdato'),
  );
  $export['notification_overview'] = $view;

  return $export;
}
