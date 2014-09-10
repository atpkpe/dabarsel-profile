<?php
/**
 * @file
 * atp_news.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atp_news_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_news';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_news';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_news';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_news';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_with_img' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      '1_4_fact' => array(
        'custom_settings' => FALSE,
      ),
      '1_4_l' => array(
        'custom_settings' => TRUE,
      ),
      '1_2_l' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_h' => array(
        'custom_settings' => FALSE,
      ),
      '1_1_l' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      '1_2_square' => array(
        'custom_settings' => FALSE,
      ),
      '1_4_compressed' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      '3_4_h' => array(
        'custom_settings' => TRUE,
      ),
      '3_8_h' => array(
        'custom_settings' => FALSE,
      ),
      'menu_box' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'flag' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(
        'language' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser_with_img' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          '1_4_l' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          '3_4_h' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_news';
  $strongarm->value = '1';
  $export['i18n_node_extended_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_news';
  $strongarm->value = array(
    0 => 'required',
  );
  $export['i18n_node_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_news';
  $strongarm->value = '2';
  $export['language_content_type_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news';
  $strongarm->value = array();
  $export['menu_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news';
  $strongarm->value = '1';
  $export['node_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news';
  $strongarm->value = 0;
  $export['node_submitted_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_news';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
        'selection' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 1,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
        'selection' => 0,
      ),
      '1_4_l' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
        'selection' => 0,
      ),
      'teaser_with_img' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
        'selection' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_news_categories';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_taxonomy_term_news_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news:default_selection';
  $strongarm->value = 'node:news:standard_2_col:default';
  $export['panelizer_node:news:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:news";s:23:"allowed_layout_settings";a:14:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:0;s:13:"site_template";b:0;s:16:"atp_twocol-right";b:1;s:10:"atp_twocol";b:1;s:11:"atp_section";b:1;s:10:"atp_onecol";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:news_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:news_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_types';
  $strongarm->value = array(
    'news_list-news_list' => 'news_list-news_list',
    'signup-signup' => 'signup-signup',
    'tools-tools' => 'tools-tools',
    'vocabulary_terms-vocabulary_terms' => 0,
    'user_picture-user_picture' => 0,
    'user_profile-user_profile' => 0,
    'user_signature-user_signature' => 0,
    'term_description-term_description' => 0,
    'term_list-term_list' => 0,
    'search_form-search_form' => 0,
    'search_result-search_result' => 0,
    'page_actions-page_actions' => 0,
    'page_breadcrumb-page_breadcrumb' => 0,
    'page_feed_icons-page_feed_icons' => 0,
    'page_help-page_help' => 0,
    'page_logo-page_logo' => 0,
    'page_messages-page_messages' => 0,
    'page_primary_links-page_primary_links' => 0,
    'page_secondary_links-page_secondary_links' => 0,
    'page_site_name-page_site_name' => 0,
    'page_slogan-page_slogan' => 0,
    'page_tabs-page_tabs' => 0,
    'page_title-page_title' => 0,
    'node_form_author-node_form_author' => 0,
    'node_form_buttons-node_form_buttons' => 0,
    'node_form_language-node_form_language' => 0,
    'node_form_log-node_form_log' => 0,
    'node_form_menu-node_form_menu' => 0,
    'node_form_path-node_form_path' => 0,
    'node_form_publishing-node_form_publishing' => 0,
    'node_form_title-node_form_title' => 0,
    'node_attachments-node_attachments' => 0,
    'node_author-node_author' => 0,
    'node_body-node_body' => 0,
    'node_content-node_content' => 0,
    'node_created-node_created' => 0,
    'node_links-node_links' => 0,
    'node_terms-node_terms' => 0,
    'node_title-node_title' => 0,
    'node_type_desc-node_type_desc' => 0,
    'node_updated-node_updated' => 0,
    'node-node' => 0,
    'form-form' => 0,
    'file_content-file_content' => 0,
    'file_display-file_display' => 0,
    'page_content-page_content' => 0,
    'pane_header-pane_header' => 0,
    'pane_messages-pane_messages' => 0,
    'pane_navigation-pane_navigation' => 0,
    'pm_existing_pages-pm_existing_pages' => 0,
    'scheduler_form_pane-scheduler_form_pane' => 0,
    'views_attachments-views_attachments' => 0,
    'views_empty-views_empty' => 0,
    'views_exposed-views_exposed' => 0,
    'views_feed-views_feed' => 0,
    'views_footer-views_footer' => 0,
    'views_header-views_header' => 0,
    'views_pager-views_pager' => 0,
    'views_row-views_row' => 0,
    'views_view-views_view' => 0,
    'panelizer_form_default-panelizer_form_default' => 0,
    'token-node:source' => 0,
    'token-node:log' => 0,
    'token-node:content-type' => 0,
    'token-node:diff' => 0,
    'token-node:diff-markdown' => 0,
    'token-node:menu-link' => 0,
    'token-node:nid' => 0,
    'token-node:vid' => 0,
    'token-node:title' => 0,
    'token-node:body' => 0,
    'token-node:summary' => 0,
    'token-node:language' => 0,
    'token-node:url' => 0,
    'token-node:edit-url' => 0,
    'token-node:created' => 0,
    'token-node:changed' => 0,
    'token-node:author' => 0,
    'token-node:scheduler-publish' => 0,
    'token-node:scheduler-unpublish' => 0,
    'token-node:uuid' => 0,
    'token-node:vuuid' => 0,
    'token-node:workbench-access-sections' => 0,
    'token-node:original' => 0,
    'token-node:is-new' => 0,
    'token-node:status' => 0,
    'token-node:promote' => 0,
    'token-node:sticky' => 0,
    'token-node:revision' => 0,
    'token-node:field-section-body' => 0,
    'token-node:field-section-facts' => 0,
    'token-node:field-section-image' => 0,
    'token-node:field-section-related' => 0,
    'token-node:field-section-slides' => 0,
    'token-node:field-section-summary' => 0,
    'token-node:title-field' => 0,
    'token-node:field-page-body' => 0,
    'token-node:field-page-contacts' => 0,
    'token-node:field-page-image' => 0,
    'token-node:field-page-summary' => 0,
    'token-node:field-component-body' => 0,
    'token-node:field-component-image' => 0,
    'token-node:field-component-link' => 0,
    'token-node:field-component-summary' => 0,
    'token-node:field-news-body' => 0,
    'token-node:field-news-categories' => 0,
    'token-node:field-news-image' => 0,
    'token-node:field-news-publishdate' => 0,
    'token-node:field-news-summary' => 0,
    'token-node:field-slide-body' => 0,
    'token-node:field-slide-image' => 0,
    'token-node:field-slide-link' => 0,
    'token-node:field-gallery-images' => 0,
    'token-node:field-contact-email' => 0,
    'token-node:field-contact-image' => 0,
    'token-node:field-contact-jobtitle' => 0,
    'token-node:field-contact-mobile' => 0,
    'token-node:field-contact-phone' => 0,
    'token-node:field_section_body' => 0,
    'token-node:field_section_facts' => 0,
    'token-node:field_section_image' => 0,
    'token-node:field_section_related' => 0,
    'token-node:field_section_slides' => 0,
    'token-node:field_section_summary' => 0,
    'token-node:title_field' => 0,
    'token-node:field_page_body' => 0,
    'token-node:field_page_contacts' => 0,
    'token-node:field_page_image' => 0,
    'token-node:field_page_related' => 0,
    'token-node:field_page_summary' => 0,
    'token-node:field_component_body' => 0,
    'token-node:field_component_image' => 0,
    'token-node:field_component_link' => 0,
    'token-node:field_component_summary' => 0,
    'token-node:field_news_body' => 0,
    'token-node:field_news_categories' => 0,
    'token-node:field_news_image' => 0,
    'token-node:field_published_date' => 0,
    'token-node:field_news_summary' => 0,
    'token-node:field_slide_body' => 0,
    'token-node:field_slide_image' => 0,
    'token-node:field_slide_link' => 0,
    'token-node:field_gallery_images' => 0,
    'token-node:field_contact_email' => 0,
    'token-node:field_contact_image' => 0,
    'token-node:field_contact_jobtitle' => 0,
    'token-node:field_contact_mobile' => 0,
    'token-node:field_contact_phone' => 0,
    'token-content-type:name' => 0,
    'token-content-type:machine-name' => 0,
    'token-content-type:description' => 0,
    'token-content-type:node-count' => 0,
    'token-content-type:edit-url' => 0,
    'token-term:edit-url' => 0,
    'token-term:parents' => 0,
    'token-term:root' => 0,
    'token-term:tid' => 0,
    'token-term:name' => 0,
    'token-term:description' => 0,
    'token-term:node-count' => 0,
    'token-term:url' => 0,
    'token-term:vocabulary' => 0,
    'token-term:parent' => 0,
    'token-term:uuid' => 0,
    'token-term:i18n-name' => 0,
    'token-term:i18n-description' => 0,
    'token-term:i18n-vocabulary' => 0,
    'token-term:i18n-parent' => 0,
    'token-term:original' => 0,
    'token-term:weight' => 0,
    'token-term:parents-all' => 0,
    'token-vocabulary:machine-name' => 0,
    'token-vocabulary:edit-url' => 0,
    'token-vocabulary:vid' => 0,
    'token-vocabulary:name' => 0,
    'token-vocabulary:description' => 0,
    'token-vocabulary:node-count' => 0,
    'token-vocabulary:term-count' => 0,
    'token-vocabulary:i18n-name' => 0,
    'token-vocabulary:i18n-description' => 0,
    'token-vocabulary:original' => 0,
    'token-file:basename' => 0,
    'token-file:extension' => 0,
    'token-file:size-raw' => 0,
    'token-file:type' => 0,
    'token-file:download-url' => 0,
    'token-file:fid' => 0,
    'token-file:name' => 0,
    'token-file:path' => 0,
    'token-file:mime' => 0,
    'token-file:size' => 0,
    'token-file:url' => 0,
    'token-file:timestamp' => 0,
    'token-file:owner' => 0,
    'token-file:uuid' => 0,
    'token-file:original' => 0,
    'token-file:field-file-image-alt-text' => 0,
    'token-file:field-file-image-title-text' => 0,
    'token-file:field-folder' => 0,
    'token-file:field_file_image_alt_text' => 0,
    'token-file:field_file_image_title_text' => 0,
    'token-file:field_folder' => 0,
    'token-user:cancel-url' => 0,
    'token-user:one-time-login-url' => 0,
    'token-user:roles' => 0,
    'token-user:role-names' => 0,
    'token-user:role-ids' => 0,
    'token-user:uid' => 0,
    'token-user:name' => 0,
    'token-user:mail' => 0,
    'token-user:url' => 0,
    'token-user:edit-url' => 0,
    'token-user:last-login' => 0,
    'token-user:created' => 0,
    'token-user:uuid' => 0,
    'token-user:workbench-access-sections' => 0,
    'token-user:original' => 0,
    'token-user:last-access' => 0,
    'token-user:status' => 0,
    'token-user:theme' => 0,
    'token-current-user:ip-address' => 0,
    'token-menu-link:mlid' => 0,
    'token-menu-link:title' => 0,
    'token-menu-link:url' => 0,
    'token-menu-link:parent' => 0,
    'token-menu-link:parents' => 0,
    'token-menu-link:root' => 0,
    'token-menu-link:menu' => 0,
    'token-menu-link:edit-url' => 0,
    'token-current-page:title' => 0,
    'token-current-page:url' => 0,
    'token-current-page:page-number' => 0,
    'token-current-page:query' => 0,
    'token-url:path' => 0,
    'token-url:relative' => 0,
    'token-url:absolute' => 0,
    'token-url:brief' => 0,
    'token-url:unaliased' => 0,
    'token-url:args' => 0,
    'token-array:first' => 0,
    'token-array:last' => 0,
    'token-array:count' => 0,
    'token-array:reversed' => 0,
    'token-array:keys' => 0,
    'token-array:join' => 0,
    'token-array:value' => 0,
    'token-array:join-path' => 0,
    'token-random:number' => 0,
    'token-random:hash' => 0,
    'token-date-field-value:date' => 0,
    'token-date-field-value:to-date' => 0,
    'token-file-type:name' => 0,
    'token-file-type:machine-name' => 0,
    'token-file-type:count' => 0,
    'token-file-type:edit-url' => 0,
    'token-menu:name' => 0,
    'token-menu:machine-name' => 0,
    'token-menu:description' => 0,
    'token-menu:menu-link-count' => 0,
    'token-menu:edit-url' => 0,
    'token-site:name' => 0,
    'token-site:slogan' => 0,
    'token-site:mail' => 0,
    'token-site:url' => 0,
    'token-site:url-brief' => 0,
    'token-site:login-url' => 0,
    'token-site:workbench-access-scheme' => 0,
    'token-site:current-user' => 0,
    'token-site:current-date' => 0,
    'token-site:current-page' => 0,
    'token-date:short' => 0,
    'token-date:medium' => 0,
    'token-date:long' => 0,
    'token-date:custom' => 0,
    'token-date:since' => 0,
    'token-date:raw' => 0,
    'token-date:atp_long' => 0,
    'token-date:atp_short' => 0,
    'token-date:adapt_long' => 0,
    'token-date:adapt_short' => 0,
    'token-fieldable_panels_pane:uuid' => 0,
    'token-fieldable_panels_pane:vuuid' => 0,
    'token-fieldable_panels_pane:field-fpp-text' => 0,
    'token-fieldable_panels_pane:field-fpp-image' => 0,
    'token-fieldable_panels_pane:field_fpp_image' => 0,
    'token-fieldable_panels_pane:field_fpp_text' => 0,
    'token-variable:googleanalytics_account' => 0,
    'token-variable:media_wysiwyg_wysiwyg_title' => 0,
    'token-variable:media_wysiwyg_wysiwyg_icon_title' => 0,
    'token-variable:site_name' => 0,
    'token-variable:site_mail' => 0,
    'token-variable:site_slogan' => 0,
    'token-variable:anonymous' => 0,
    'token-variable:feed_description' => 0,
    'token-variable:maintenance_mode_message' => 0,
    'token-variable:user_registration_help' => 0,
    'token-variable:user_picture_default' => 0,
    'token-variable:user_picture_dimensions' => 0,
    'token-variable:user_picture_file_size' => 0,
    'token-variable:user_picture_guidelines' => 0,
    'token-workbench-access-scheme:name' => 0,
    'token-workbench-access-scheme:machine-name' => 0,
    'token-workbench-access-scheme:description' => 0,
    'token-view:name' => 0,
    'token-view:description' => 0,
    'token-view:machine-name' => 0,
    'token-view:title' => 0,
    'token-view:url' => 0,
    'token-rules_text:value' => 0,
    'token-rules_integer:value' => 0,
    'token-rules_uri:value' => 0,
    'token-rules_token:value' => 0,
    'token-rules_decimal:value' => 0,
    'token-rules_date:value' => 0,
    'token-rules_duration:value' => 0,
    'token-multifield:field-ter-category' => 0,
    'token-multifield:field-ter-related' => 0,
    'token-multifield:field_ter_category' => 0,
    'token-multifield:field_ter_related' => 0,
    'token-rules_config:id' => 0,
    'token-rules_config:label' => 0,
    'token-rules_config:plugin' => 0,
    'token-rules_config:active' => 0,
    'token-rules_config:weight' => 0,
    'token-rules_config:status' => 0,
    'token-rules_config:dirty' => 0,
    'token-rules_config:module' => 0,
    'token-rules_config:owner' => 0,
    'token-rules_config:access-exposed' => 0,
    'token-list<node>:0' => 0,
    'token-list<node>:1' => 0,
    'token-list<node>:2' => 0,
    'token-list<node>:3' => 0,
    'token-list<term>:0' => 0,
    'token-list<term>:1' => 0,
    'token-list<term>:2' => 0,
    'token-list<term>:3' => 0,
    'token-list<fieldable_panels_pane>:0' => 0,
    'token-list<fieldable_panels_pane>:1' => 0,
    'token-list<fieldable_panels_pane>:2' => 0,
    'token-list<fieldable_panels_pane>:3' => 0,
    'token-list<multifield>:0' => 0,
    'token-list<multifield>:1' => 0,
    'token-list<multifield>:2' => 0,
    'token-list<multifield>:3' => 0,
    'token-list<file>:0' => 0,
    'token-list<file>:1' => 0,
    'token-list<file>:2' => 0,
    'token-list<file>:3' => 0,
    'token-list<vocabulary>:0' => 0,
    'token-list<vocabulary>:1' => 0,
    'token-list<vocabulary>:2' => 0,
    'token-list<vocabulary>:3' => 0,
    'token-list<user>:0' => 0,
    'token-list<user>:1' => 0,
    'token-list<user>:2' => 0,
    'token-list<user>:3' => 0,
    'token-list<rules_config>:0' => 0,
    'token-list<rules_config>:1' => 0,
    'token-list<rules_config>:2' => 0,
    'token-list<rules_config>:3' => 0,
    'token-list<date>:0' => 0,
    'token-list<date>:1' => 0,
    'token-list<date>:2' => 0,
    'token-list<date>:3' => 0,
    'entity_form_field-node:field_gallery_images' => 0,
    'entity_form_field-node:title_field' => 0,
    'entity_form_field-node:field_component_body' => 0,
    'entity_form_field-node:field_component_image' => 0,
    'entity_form_field-node:field_component_link' => 0,
    'entity_form_field-node:field_component_summary' => 0,
    'entity_form_field-node:body' => 0,
    'entity_form_field-node:field_contact_email' => 0,
    'entity_form_field-node:field_contact_image' => 0,
    'entity_form_field-node:field_contact_jobtitle' => 0,
    'entity_form_field-node:field_contact_mobile' => 0,
    'entity_form_field-node:field_contact_phone' => 0,
    'entity_form_field-node:field_news_body' => 0,
    'entity_form_field-node:field_news_categories' => 0,
    'entity_form_field-node:field_news_image' => 0,
    'entity_form_field-node:field_published_date' => 0,
    'entity_form_field-node:field_news_summary' => 0,
    'entity_form_field-node:field_section_body' => 0,
    'entity_form_field-node:field_section_facts' => 0,
    'entity_form_field-node:field_section_image' => 0,
    'entity_form_field-node:field_section_related' => 0,
    'entity_form_field-node:field_section_slides' => 0,
    'entity_form_field-node:field_section_summary' => 0,
    'entity_form_field-node:field_page_body' => 0,
    'entity_form_field-node:field_page_contacts' => 0,
    'entity_form_field-node:field_page_image' => 0,
    'entity_form_field-node:field_page_related' => 0,
    'entity_form_field-node:field_page_summary' => 0,
    'entity_form_field-node:field_slide_body' => 0,
    'entity_form_field-node:field_slide_image' => 0,
    'entity_form_field-node:field_slide_link' => 0,
    'entity_form_field-fieldable_panels_pane:field_fpp_text' => 0,
    'entity_form_field-fieldable_panels_pane:field_fpp_image' => 0,
    'entity_form_field-multifield:field_ter_category' => 0,
    'entity_form_field-multifield:field_ter_related' => 0,
    'entity_form_field-file:field_file_image_alt_text' => 0,
    'entity_form_field-file:field_file_image_title_text' => 0,
    'entity_form_field-file:field_folder' => 0,
    'entity_field-node:field_gallery_images' => 0,
    'entity_field-node:title_field' => 0,
    'entity_field-node:field_component_body' => 0,
    'entity_field-node:field_component_image' => 0,
    'entity_field-node:field_component_link' => 0,
    'entity_field-node:field_component_summary' => 0,
    'entity_field-node:body' => 0,
    'entity_field-node:field_contact_email' => 0,
    'entity_field-node:field_contact_image' => 0,
    'entity_field-node:field_contact_jobtitle' => 0,
    'entity_field-node:field_contact_mobile' => 0,
    'entity_field-node:field_contact_phone' => 0,
    'entity_field-node:field_news_body' => 0,
    'entity_field-node:field_news_categories' => 0,
    'entity_field-node:field_news_image' => 0,
    'entity_field-node:field_published_date' => 0,
    'entity_field-node:field_news_summary' => 0,
    'entity_field-node:field_section_body' => 0,
    'entity_field-node:field_section_facts' => 0,
    'entity_field-node:field_section_image' => 0,
    'entity_field-node:field_section_related' => 0,
    'entity_field-node:field_section_slides' => 0,
    'entity_field-node:field_section_summary' => 0,
    'entity_field-node:field_page_body' => 0,
    'entity_field-node:field_page_contacts' => 0,
    'entity_field-node:field_page_image' => 0,
    'entity_field-node:field_page_related' => 0,
    'entity_field-node:field_page_summary' => 0,
    'entity_field-node:field_slide_body' => 0,
    'entity_field-node:field_slide_image' => 0,
    'entity_field-node:field_slide_link' => 0,
    'entity_field-fieldable_panels_pane:field_fpp_text' => 0,
    'entity_field-fieldable_panels_pane:field_fpp_image' => 0,
    'entity_field-multifield:field_ter_category' => 0,
    'entity_field-multifield:field_ter_related' => 0,
    'entity_field-file:field_file_image_alt_text' => 0,
    'entity_field-file:field_file_image_title_text' => 0,
    'entity_field-file:field_folder' => 0,
    'entity_field_extra-node:language' => 0,
    'entity_field_extra-taxonomy_term:description' => 0,
    'entity_field_extra-fieldable_panels_pane:title' => 0,
    'entity_field_extra-file:file' => 0,
    'entity_field_extra-user:masquerade' => 0,
    'entity_field_extra-user:summary' => 0,
    'custom-custom' => 0,
    'block-masquerade-masquerade' => 0,
    'block-diff-inline' => 0,
    'block-locale-language' => 0,
    'block-menu-menu-bottom-menu' => 0,
    'block-menu-devel' => 0,
    'block-menu-features' => 0,
    'block-menu-menu-footer' => 0,
    'block-menu-menu-top' => 0,
    'block-node-syndicate' => 0,
    'block-node-recent' => 0,
    'block-search-form' => 0,
    'block-system-powered-by' => 0,
    'block-system-help' => 0,
    'block-system-navigation' => 0,
    'block-system-management' => 0,
    'block-system-user-menu' => 0,
    'block-system-main-menu' => 0,
    'block-user-login' => 0,
    'block-user-new' => 0,
    'block-user-online' => 0,
    'block-workbench-block' => 0,
    'block-devel-execute_php' => 0,
    'block-devel-switch_user' => 0,
    'entity_view-node' => 0,
    'entity_view-taxonomy_term' => 0,
    'entity_view-fieldable_panels_pane' => 0,
    'entity_view-file' => 0,
    'entity_view-user' => 0,
    'entity_view-rules_config' => 0,
    'fieldable_panels_pane-text' => 0,
    'fieldable_panels_pane-image' => 0,
    'fieldable_panels_pane-image_text' => 0,
    'menu_tree-main-menu' => 'menu_tree-main-menu',
    'menu_tree-menu-top' => 'menu_tree-menu-top',
    'menu_tree-_active' => 0,
    'menu_tree-menu-bottom-menu' => 0,
    'menu_tree-devel' => 0,
    'menu_tree-features' => 0,
    'menu_tree-menu-footer' => 0,
    'menu_tree-management' => 0,
    'menu_tree-navigation' => 0,
    'menu_tree-user-menu' => 0,
    'panels_mini-four_facts' => 0,
    'views-gallery' => 0,
    'views-news_list' => 0,
    'views-category_related' => 0,
    'views-slideshow' => 0,
    'views-fieldable_pane_entities' => 0,
    'views-fieldable_pane_entity_revisions' => 0,
    'views-media_default' => 0,
    'views-workbench_current_user' => 0,
    'views-workbench_edited' => 0,
    'views-workbench_recent_content' => 0,
    'views-workbench_access_content' => 0,
    'views-workbench_moderation' => 0,
    'views-media_browser_plus_folders' => 0,
    'views-media_browser_plus' => 0,
    'views_panes-gallery-panel_pane_1' => 'views_panes-gallery-panel_pane_1',
    'views_panes-gallery-panel_pane_2' => 'views_panes-gallery-panel_pane_2',
    'views_panes-news_list-default_display' => 'views_panes-news_list-default_display',
    'views_panes-category_related-panel_pane_2' => 'views_panes-category_related-panel_pane_2',
    'views_panes-category_related-panel_pane_3' => 'views_panes-category_related-panel_pane_3',
    'views_panes-category_related-panel_pane_4' => 'views_panes-category_related-panel_pane_4',
    'views_panes-category_related-panel_pane_1' => 'views_panes-category_related-panel_pane_1',
    'views_panes-slideshow-panel_pane_1' => 'views_panes-slideshow-panel_pane_1',
    'site_header-site_header' => 0,
    'site_footer_text-site_footer_text' => 0,
    'site_contact-site_contact' => 0,
    'site_bottom-site_bottom' => 0,
  );
  $export['panelizer_node:news_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:news_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_default';
  $strongarm->value = array(
    'news_list' => 'news_list',
    'signup' => 'signup',
    'tools' => 'tools',
    'entity_view' => 'entity_view',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'token' => 0,
    'entity_form_field' => 0,
    'entity_field' => 0,
    'entity_field_extra' => 0,
    'custom' => 0,
    'block' => 0,
    'fieldable_panels_pane' => 0,
    'panels_mini' => 0,
    'views' => 0,
    'site_header' => 0,
    'site_footer_text' => 0,
    'site_contact' => 0,
    'site_bottom' => 0,
    'other' => 0,
  );
  $export['panelizer_node:news_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_pattern';
  $strongarm->value = 'presse/nyheder/[node:title-field]';
  $export['pathauto_node_news_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_news';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_news';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_allow_state_news';
  $strongarm->value = 'approved';
  $export['scheduler_publish_allow_state_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_news';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_news';
  $strongarm->value = 'published';
  $export['scheduler_publish_moderation_state_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_news';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_news';
  $strongarm->value = 0;
  $export['scheduler_publish_required_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_news';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_news';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_default_time_news';
  $strongarm->value = '';
  $export['scheduler_unpublish_default_time_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_news';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_news';
  $strongarm->value = 'published';
  $export['scheduler_unpublish_moderation_state_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_news';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_news';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_news';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_news';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_news';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_news'] = $strongarm;

  return $export;
}
