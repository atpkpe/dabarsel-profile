<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'icon' => 'news_list.png',
  'title' => t('News list'),
  'description' => t('Shows a list of news.'),
  'category' => array(t('ATP News'), -9),
  'edit form' => 'atp_news_list_content_type_edit_form',
  'render callback' => 'atp_news_list_content_type_render',
);


function atp_news_list_content_type_render($subtype, $conf, $panel_args, &$context) {
  $view = views_get_view('news_list');
  $view->set_display('default_display');
  $view->set_use_ajax(TRUE);
  $view_content = $view->preview();
  $view_settings = array(
    'view_dom_id' => 'views_dom_id:' . $view->dom_id,
    'views' => array(
      'ajax_path' => url('views/ajax'),
      'ajaxViews' => array(
        'views_dom_id:' . $view->dom_id => array(
          'view_name' => $view->name,
          'view_display_id' => $view->current_display,
          'view_args' => check_plain(implode('/', $view->args)),
          'view_path' => check_plain($_GET['q']),
          'view_base_path' => $view->get_path(),
          'view_dom_id' => $view->dom_id,
          // To fit multiple views on a page, the programmer may have
          // overridden the display's pager_element.
          'pager_element' => isset($view->query->pager) ? $view->query->pager->get_pager_id() : 0,
        ),
      ),
    ),
  );

  foreach(taxonomy_get_tree(1) as $term) {
    $news_category_items[] = sprintf(
      '<div class="news-filter-button %s" data-tid="%s">%s</div>',
      !empty($_GET['tid']) && in_array($term->tid, $_GET['tid']) ? 'active' : '',
      $term->tid,
      $term->name
    );
  }

  $block = new stdClass();
  $block->content = array(
    'filter' => array(
      '#items' => $news_category_items,
      '#theme' => 'item_list',
    ),
    'view' => array(
      '#type' => 'markup',
      '#markup' => $view_content,
    ),
    '#attached' => array(
      'js' => array(
        'data' => drupal_get_path('module', 'atp_news') . '/plugins/content_types/news_list/atp_news_list.js',
        'group' => JS_THEME,
        array(
          'data' => array('atp_news_list' => $view_settings),
          'type' => 'setting'
        ),
      ),
    ),
  );

  return $block;
}

function atp_news_list_content_type_admin_title($subtype, $conf, $context) {
  return t('Something');
}

function atp_news_list_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}
