<?php

/**
 * @file
 * Admin pages for Sites module.
 */

/**
 * Provide variables to theme_sites_list_sites().
 */
function sites_preprocess_sites_list_sites(&$vars) {
  $sites = $vars['sites'] = _SiteController::getSites();
  if (!empty($sites)) {
    $vars['header'] = array(t('Site title'), t('Path'), t('Operations'));
    $rows = array();
    foreach ($sites as $sid => $site) {
      $links = array(
        'edit' => array(
          'title' => t('edit'),
          'href' => 'admin/structure/sites/edit/' . $site->sid,
        ),
        'delete' => array(
          'title' => t('delete'),
          'href' => 'admin/structure/sites/delete/' . $site->sid,
        ),
      );
      $operations = theme('links', array('links' => $links, 'attributes' => array('class' => 'links inline')));
      $rows[] = array($site->title, $site->purl_prefix, $operations);
    }
    $vars['rows'] = $rows;
  }
}

/**
 * Page callback: sites admin overview page.
 */
function sites_page_admin_overview() {
  return SiteController::pageAdminOverview();
}

/**
 * Theme a Sites admin landing page.
 */
function theme_sites_list_sites($vars) {
  $output = '';
  if (!empty($vars['sites'])) {
    $output .= theme('table', array('header' => $vars['header'], 'rows' => $vars['rows']));
  }
  else {
    $output .= t('You currently have no sites.');
  }
  return $output;
}

/**
 * Add/edit sites form.
 */
function sites_site_form($form, &$form_state, $site_id = NULL) {
  $site = NULL;
  if (!$site_id) {
    $site = new Site();
    $site_terms = FALSE;
    $menues = FALSE;
    $site->theme = 'atp_theme';
  }
  else {
    $site = SiteController::getSite($site_id);

    $site_taxonomy = taxonomy_vocabulary_machine_name_load('sites');
    $terms = taxonomy_get_tree($site_taxonomy->vid);
    foreach ($terms as $data) {
      $site_terms[$data->tid] = $data->name;
    }

    $menues =  menu_get_menus( );

  }

  // Get a list of active themes.
  $active_themes = array();
  foreach (list_themes() as $name => $theme) {
    if ($theme->status) {
      $active_themes[$name] = $name;
    }
  }

  $form = array();

  $languages = language_list();

  $form['settings'] = array( '#type' => 'vertical_tabs' );

  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
    '#collapsible' => TRUE,
    '#group' => 'settings'
  );

  $form['general']['status'] = array(
    '#title' => t('Published'),
    '#description' => t('Unpublished sites are not visible for anonymous users.'),
    '#type' => 'checkbox',
    '#default_value' => $site->status,
    '#group' => 'settings'
  );

  $form['general']['title'] = array(
    '#title' => t('Admin title (used in administrative interface only)'),
    '#type' => 'textfield',
    '#default_value' => $site->title,
    '#group' => 'settings'
  );

  $form['general']['machine_name'] = array(
    '#title' => t('Machine name for site title'),
    '#type' => 'machine_name',
    '#default_value' => $site->machine_name,
    '#machine_name' => array(
      'source' => array('general', 'title'),
      'exists' => 'sites_machine_name_exists',
    ),
  );

  // Add context prefix form
  $form['general']['purl'] = purl_form('sites', $site_id, $site->purl_prefix);

  if ($menues) {
    $form['general']['main_menu'] = array(
      '#title' => t('Main menu'),
      '#description' => t('The menu to use instead of the $main_menu'),
      '#type' => 'select',
      '#default_value' => $site->menu_main_menu,
      '#options' => $menues,
    );
  }

  if ($site_terms) {
    $form['general']['site_term'] = array (
      '#title' => 'Site term',
      '#type' => 'select',
      '#options' => $site_terms,
      '#default_value' => $site->site_term,
    );
  }

  foreach($languages as $lang => $language) {
    $form['general']['site_name_' . $lang] = array(
      '#title' => t('Site name') . " <small>($language->name)</small>",
      '#description' => t('Used by some themes.  Will be visible to users.'),
      '#type' => 'textfield',
      '#default_value' => $site->name[$lang],
    );
  }

  $form['content'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content'),
    '#collapsible' => TRUE,
    '#group' => 'settings'
  );

  $form['content']['front_page'] = array(
    '#title' => t('Front page'),
    '#description' => t('Enter internal URL of the subsite frontpage ( node/xxx )'),
    '#type' => 'textfield',
    '#default_value' => $site->front_page,
  );

  $form['content']['contact_page'] = array(
    '#title' => t('Contact page'),
    '#description' => t('Enter internal URL of the subsite contact page ( node/xxx )'),
    '#type' => 'textfield',
    '#default_value' => $site->contact_page,
  );

  foreach($languages as $lang => $language) {
    $form['content']['footer_' . $lang] = array(
      '#title' => t('Footer text') . " <small>($language->name)</small>",
      '#description' => t('Footer text'),
      '#type' => 'text_format',
      '#format' => $site->footer_format[$lang],
      '#default_value' => $site->footer[$lang],
    );
  }

  $form['search'] = array(
    '#type' => 'fieldset',
    '#title' => t('Search'),
    '#collapsible' => TRUE,
    '#group' => 'settings'
  );

  foreach($languages as $lang => $language) {
    $form['search']['gss_api_key_' . $lang] = array(
      '#title' => t('GSS API key') . " <small>($language->name)</small>",
      '#description' => t('Google Site Search API key'),
      '#type' => 'textfield',
      '#default_value' => $site->gss_api_key[$lang],
    );
  }

  $form['display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Display settings'),
    '#collapsible' => TRUE,
    '#group' => 'settings'
  );

  $form['display']['theme'] = array(
    '#type' => 'select',
    '#title' => t('Theme'),
    '#description' => t('Select an active theme for this site.'),
    '#options' => $active_themes,
    '#default_value' => $site->theme,
  );

  $form['display']['language_switcher'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show language switcher'),
    '#description' => t('Check this if the language switcher should be visible.'),
    '#options' => array(0 => t('No'), 1 => t('Yes')),
    '#default_value' => $site->language_switcher,
  );

  $form['display']['sharing_links'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show sharing links'),
    '#description' => t('Check this if the sharing links should be visible.'),
    '#options' => array(0 => t('No'), 1 => t('Yes')),
    '#default_value' => $site->sharing_links,
  );

  $form['site_id'] = array(
    '#type' => 'hidden',
    '#value' => $site_id,
  );

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#value' => t('Save'),
    '#type' => 'submit',
  );

  if ($site_id && $site_id > 1) {
    $form['actions']['delete'] = array(
      '#type' => 'link',
      '#href' => 'admin/structure/sites/delete/' . $site_id,
      '#title' => t('Delete'),
      '#attributes' => array(
        'class' => array('button'),
      ),
    );
  }
  $form['actions']['cancel'] = array(
    '#type' => 'link',
    '#href' => 'admin/structure/sites',
    '#title' => t('Cancel'),
    '#attributes' => array(
      'class' => array('button'),
    ),
  );

  return $form;
}

/**
 * Handles validation for add/edit site form.
 */
function sites_site_form_validate(&$form, &$form_state) {
  SiteHelper::validateSiteForm($form, $form_state);
}

/**
 * Handles submit for adding or editing a site.
 */
function sites_site_form_submit($form, &$form_state) {
  // If a site_id is present in the form_values, we load the existing site.
  // Otherwise an empty site object is created.
  $site_id = $form_state['values']['site_id'];
  $site = empty($site_id) ? new Site() : SiteController::getSite($site_id);

  // Get the site properties from the form_state values.
  // @todo create a helper function for this.
  $site->title = $form_state['values']['title'];
  $site->front_page = $form_state['values']['front_page'];
  $site->contact_page = $form_state['values']['contact_page'];
  $site->machine_name = $form_state['values']['machine_name'];
  $site->status = empty($form_state['values']['status']) ? 0 : 1;
  $site->theme = $form_state['values']['theme'];

  if (isset($form_state['values']['site_term'])) {
    $site->site_term =  $form_state['values']['site_term'];
    $site->menu_main_menu = $form_state['values']['main_menu'];
  } else {
    SiteResourcesController::createTerm($site);
    SiteResourcesController::createMenu($site);
  }

  if (isset($form_state['values']['purl']['value'])) {
    $site->purl_prefix = $form_state['values']['purl']['value'];
  }

  $languages = language_list();
  foreach($languages as $lang => $language) {
    $site->footer[$lang] = $form_state['values']['footer_' . $lang]['value'];
    $site->footer_format[$lang] = $form_state['values']['footer_' . $lang]['format'];
    $site->name[$lang] = $form_state['values']['site_name_' . $lang];
    $site->gss_api_key[$lang] = $form_state['values']['gss_api_key_' . $lang];
  }

  $site->language_switcher = $form_state['values']['language_switcher'];
  $site->sharing_links = $form_state['values']['sharing_links'];

  // Save the site object.
  $site->save();

  if (!empty($site_id)) {
    // Site already exists, check if node paths needs updating.
    if ($form['general']['purl']['value']['#default_value'] !== $form_state['values']['purl']['value']) {
      SiteResourcesController::updatePaths($site_id, $form['general']['purl']['value']['#default_value'], $form_state['values']['purl']['value']);
    }

    if ($site_id > 1) {
      $query = db_select('`workbench_access_node`', 'w');
      $result = $query
                ->fields('w', array('nid'))
                ->condition('access_id', $site->site_term)
                ->execute()
                ->fetchAll();
       foreach ($result as $node) {
         // cache_clear_all('content:' . $node->nid, 'cache_content', TRUE);
       }
     }
  }

  // Redirect to the sites admin overview page.
  $form_state['redirect'] = 'admin/structure/sites';
}

/**
 * Delete sites form.
 */
function sites_site_delete_form($form, $form_state, $site_id) {
  $site = SiteController::getSite($site_id);

  if ($site === FALSE) {
    drupal_goto('admin/structure/sites');
    return;
  }

  $form = array();
  $form['site_id'] = array(
    '#type' => 'value',
    '#value' => $site->sid,
  );
  $form = confirm_form($form, t('Do you want to delete site: @sitename ?', array('@sitename' => $site->title)), 'admin/structure/sites');

  return $form;
}

/**
 * Delete sites form submit handler.
 */
function sites_site_delete_form_submit($form, &$form_state) {
  // Get the site_id.
  $site_id = $form_state['values']['site_id'];
  $site = SiteController::getSite($site_id);
  // Delete the site and all of it's resources.
  $current_site = SiteController::getCurrentSite();
  if ($current_site != NULL) {
    $sid = $current_site->sid;

    // Disable PURL if necessary.
    if ($site_id == $sid) {
      purl_disable('TRUE');
    }
  }

  SiteController::deleteSite($site_id);

  drupal_set_message(t('The site @name has been deleted', array('@name' => $site->name)));
  $form_state['redirect'] = 'admin/structure/sites';
}
