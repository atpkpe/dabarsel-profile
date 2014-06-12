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
  'edit form' => 'news_list_content_type_edit_form',
  'render callback' => 'news_list_content_type_render',
  'admin title' => 'news_list_content_type_admin_title',
  'admin info' => 'news_list_content_type_admin_info',
  'defaults' => array(
    'items_per_page' => 5,
    'list_type' => 'fixed_categories',
    'categories' => array(),
  ),
);


/**
 * Content pane render function.
 */
function news_list_content_type_render($subtype, $conf, $panel_args, &$context) {
  $categories = array_filter($conf['categories']);
  $view = views_get_view('news_list');
  $view->set_display('default_display');
  $view->set_use_ajax(TRUE);

  if ($conf['items_per_page']) {
    // Options to set the number of items per page, add pager.
    $pager = $view->display_handler->get_option('pager');
    $pager['type'] = 'full'; // Options are none, some, mini, full
    $pager['options']['items_per_page'] = $conf['items_per_page']; // Options are none, some, mini, full
    $view->display_handler->set_option('pager', $pager);
  }

  $block = new stdClass();
  $block->content = array();

  switch ($conf['list_type']) {
    case 'filtered':
      // Render view.
      $view_content = $view->preview();
      // Create category 'buttons'.
      foreach (taxonomy_get_tree(atp_news_get_news_categories_vocab_id()) as $term) {
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
                        'items_per_page' => $conf['items_per_page'],
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
  $types = news_list_type_options();
  if (!empty($types[$conf['list_type']]['description'])) {
    return $types[$conf['list_type']]['description'];
  }
  return t('News list');
}


/**
 * Content pane admin info function.
 */
function news_list_content_type_admin_info($subtype, $conf, $context) {
  $output = new stdClass();
  $items_per_page = !empty($conf['items_per_page']) ? $conf['items_per_page'] : t('Unlimited');

  $title = array();
  $title[] = t('Items per page: @items_per page', array('@items_per page' => $items_per_page));

  if ($conf['list_type'] == 'fixed_categories') {
    $tids = array_filter($conf['categories']);
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

/**
 * Content pane configuration form function.
 */
function news_list_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $conf += $form_state['plugin']['defaults'];

  $tid_categories = array();
  foreach (taxonomy_get_tree(atp_news_get_news_categories_vocab_id()) as $term) {
    $tid_categories[$term->tid] = $term->name;
  }
  $list_type_options = news_list_type_options();
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
    '#title' => t('Categories'),
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

/**
 * The submit form stores the data in $conf.
 */
function news_list_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * An array of possible news list types.
 *
 * @return array
 *   List types.
 */
function news_list_type_options() {
  return array(
    'fixed_categories' => array(
      'title' => t('Fixed categories'),
      'description' => t('News list with fixed categories.'),
    ),
    'filtered' => array(
      'title' => t('Filtered'),
      'description' => t('News list with category filter options.'),
    ),
  );
}
