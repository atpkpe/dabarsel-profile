<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'icon' => 'news_list.png',
  'title' => t('News list'),
  'description' => t('Shows a list of news.'),
  'category' => array(t('ATP'), -9),
  'render callback' => 'news_list_content_type_render',
  'admin title' => 'news_list_content_type_admin_title',
  'admin info' => 'news_list_content_type_admin_info',
  'required context' => new ctools_context_required(t('News'), 'news'),
);

/**
 * Content pane render function.
 */
function news_list_content_type_render($subtype, $conf, $panel_args, &$context) {
  $data = $context->data;
  $block = new stdClass();
  $block->content = array();

  $categories = array_filter($data['categories']);
  $view = views_get_view($data['view_name']);
  if (!is_object($view)) {
    return $block;
  }
  $view->set_display($data['view_display']);
  $view->set_use_ajax(TRUE);

  if ($data['items_per_page']) {
    // Options to set the number of items per page, add pager.
    $pager = $view->display_handler->get_option('pager');
    $pager['type'] = 'full'; // Options are none, some, mini, full
    $pager['options']['items_per_page'] = $data['items_per_page'];
    $view->display_handler->set_option('pager', $pager);
  }

  switch ($data['list_type']) {
    case 'filtered':
      $vocab = taxonomy_vocabulary_machine_name_load($data['news_vocab']);
      // Render view.
      $view_content = $view->preview();
      // Create category 'buttons'.
      foreach (taxonomy_get_tree($vocab->vid) as $term) {
        $term = i18n_taxonomy_localize_terms($term);
        $news_category_items[] = sprintf(
          '<div class="news-filter-button %s" data-tid="%s">%s</div>',
          !empty($_GET['tid']) && in_array($term->tid, $_GET['tid']) ? 'active' : '',
          $term->tid,
          $term->name
        );
      }
      // Create filter list + attached js settings for the embeded ajax view.
      $block->content = array(
        'filter-wrapper' => array(
          '#type' => 'container',
          '#attributes' => array(
            'class' => 'news-filter',
          ),
          'filter' => array(
            '#items' => $news_category_items,
            '#theme' => 'item_list',
          ),
        ),
        '#attached' => array(
          'js' => array(
            'data' => drupal_get_path('module', 'atp_news') . '/plugins/content_types/news_list/news_list.js',
            'group' => JS_THEME,
            array(
              'data' => array(
                'atp_news_list' => array(
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
                        'items_per_page' => $data['items_per_page'],
                        'pager_element' => isset($view->query->pager) ? $view->query->pager->get_pager_id() : 0,
                      ),
                    ),
                  ),
                ),
              ),
              'type' => 'setting',
            ),
          ),
        ),
      );
      break;

    case 'fixed_categories':
      $view->exposed_input['tid'] = $categories;
      // Render view.
      $view_content = $view->preview();

      break;
  }
  // Render view no matter which list type is chosen.
  $block->content += array(
    'view' => array(
      '#type' => 'markup',
      '#markup' => $view_content,
    ),
  );

  return $block;
}

/**
 * Content pane admin title function.
 */
function news_list_content_type_admin_title($subtype, $conf, $context) {
  if (!is_object($context) || $context->type != 'news') {
    return t('News list');
  }
  $data = $context->data;
  $types = atp_news_list_type_options();
  if (!empty($types[$data['list_type']]['description'])) {
    return $types[$data['list_type']]['description'];
  }
  return t('News list');
}


/**
 * Content pane admin info function.
 */
function news_list_content_type_admin_info($subtype, $conf, $context) {
  $data = $context->data;
  $output = new stdClass();
  $items_per_page = !empty($data['items_per_page']) ? $data['items_per_page'] : t('Unlimited');

  $title = array();
  $title[] = t('Items per page: @items_per page', array('@items_per page' => $items_per_page));

  if ($data['list_type'] == 'fixed_categories') {
    $tids = array_filter($data['categories']);
    $categories = array_map(function($tid){
      $term = taxonomy_term_load($tid);
      return $term->name;
    }, $tids);
    $title[] = t('Categories: @categories', array('@categories' => implode(', ', $categories)));
  }

  $output->title = implode(' | ', $title);
  $output->content = '';
  return $output;
}
