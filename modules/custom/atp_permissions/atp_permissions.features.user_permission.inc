<?php
/**
 * @file
 * atp_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atp_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Author' => 'Author',
      'Site administrator' => 'Site administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'Developer' => 'Developer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'add terms in media_folders'.
  $permissions['add terms in media_folders'] = array(
    'name' => 'add terms in media_folders',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in news_categories'.
  $permissions['add terms in news_categories'] = array(
    'name' => 'add terms in news_categories',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in sites'.
  $permissions['add terms in sites'] = array(
    'name' => 'add terms in sites',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer atp notifications'.
  $permissions['administer atp notifications'] = array(
    'name' => 'administer atp notifications',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'atp_notifications',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer css injection'.
  $permissions['administer css injection'] = array(
    'name' => 'administer css injection',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'css_injector',
  );

  // Exported permission: 'administer default config'.
  $permissions['administer default config'] = array(
    'name' => 'administer default config',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'defaultconfig',
  );

  // Exported permission: 'administer deployments'.
  $permissions['administer deployments'] = array(
    'name' => 'administer deployments',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'deploy',
  );

  // Exported permission: 'administer devel menu items'.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer js_injector'.
  $permissions['administer js_injector'] = array(
    'name' => 'administer js_injector',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'js_injector',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'Developer' => 'Developer',
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer main-menu_da'.
  $permissions['administer main-menu_da'] = array(
    'name' => 'administer main-menu_da',
    'roles' => array(
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'i18n_menu_overview',
  );

  // Exported permission: 'administer main-menu_en'.
  $permissions['administer main-menu_en'] = array(
    'name' => 'administer main-menu_en',
    'roles' => array(
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'i18n_menu_overview',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu-bottom-menu menu items'.
  $permissions['administer menu-bottom-menu menu items'] = array(
    'name' => 'administer menu-bottom-menu menu items',
    'roles' => array(
      'Developer' => 'Developer',
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-footer menu items'.
  $permissions['administer menu-footer menu items'] = array(
    'name' => 'administer menu-footer menu items',
    'roles' => array(
      'Developer' => 'Developer',
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-footer_da'.
  $permissions['administer menu-footer_da'] = array(
    'name' => 'administer menu-footer_da',
    'roles' => array(
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'i18n_menu_overview',
  );

  // Exported permission: 'administer menu-footer_en'.
  $permissions['administer menu-footer_en'] = array(
    'name' => 'administer menu-footer_en',
    'roles' => array(
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'i18n_menu_overview',
  );

  // Exported permission: 'administer menu-top menu items'.
  $permissions['administer menu-top menu items'] = array(
    'name' => 'administer menu-top menu items',
    'roles' => array(
      'Developer' => 'Developer',
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-top_da'.
  $permissions['administer menu-top_da'] = array(
    'name' => 'administer menu-top_da',
    'roles' => array(
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'i18n_menu_overview',
  );

  // Exported permission: 'administer menu-top_en'.
  $permissions['administer menu-top_en'] = array(
    'name' => 'administer menu-top_en',
    'roles' => array(
      'atp.dk' => 'atp.dk',
    ),
    'module' => 'i18n_menu_overview',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer multifield'.
  $permissions['administer multifield'] = array(
    'name' => 'administer multifield',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'multifield',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer node expire'.
  $permissions['administer node expire'] = array(
    'name' => 'administer node expire',
    'roles' => array(
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'node_expire',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Developer' => 'Developer',
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node component defaults'.
  $permissions['administer panelizer node component defaults'] = array(
    'name' => 'administer panelizer node component defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contact defaults'.
  $permissions['administer panelizer node contact defaults'] = array(
    'name' => 'administer panelizer node contact defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery defaults'.
  $permissions['administer panelizer node gallery defaults'] = array(
    'name' => 'administer panelizer node gallery defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news choice'.
  $permissions['administer panelizer node news choice'] = array(
    'name' => 'administer panelizer node news choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
    'name' => 'administer panelizer node news content',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news context'.
  $permissions['administer panelizer node news context'] = array(
    'name' => 'administer panelizer node news context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news defaults'.
  $permissions['administer panelizer node news defaults'] = array(
    'name' => 'administer panelizer node news defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
    'name' => 'administer panelizer node news layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news overview'.
  $permissions['administer panelizer node news overview'] = array(
    'name' => 'administer panelizer node news overview',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news settings'.
  $permissions['administer panelizer node news settings'] = array(
    'name' => 'administer panelizer node news settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page choice'.
  $permissions['administer panelizer node page choice'] = array(
    'name' => 'administer panelizer node page choice',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page content'.
  $permissions['administer panelizer node page content'] = array(
    'name' => 'administer panelizer node page content',
    'roles' => array(
      'Developer' => 'Developer',
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page context'.
  $permissions['administer panelizer node page context'] = array(
    'name' => 'administer panelizer node page context',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page layout'.
  $permissions['administer panelizer node page layout'] = array(
    'name' => 'administer panelizer node page layout',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page overview'.
  $permissions['administer panelizer node page overview'] = array(
    'name' => 'administer panelizer node page overview',
    'roles' => array(
      'Developer' => 'Developer',
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page settings'.
  $permissions['administer panelizer node page settings'] = array(
    'name' => 'administer panelizer node page settings',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section choice'.
  $permissions['administer panelizer node section choice'] = array(
    'name' => 'administer panelizer node section choice',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section content'.
  $permissions['administer panelizer node section content'] = array(
    'name' => 'administer panelizer node section content',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section context'.
  $permissions['administer panelizer node section context'] = array(
    'name' => 'administer panelizer node section context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section defaults'.
  $permissions['administer panelizer node section defaults'] = array(
    'name' => 'administer panelizer node section defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section layout'.
  $permissions['administer panelizer node section layout'] = array(
    'name' => 'administer panelizer node section layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section overview'.
  $permissions['administer panelizer node section overview'] = array(
    'name' => 'administer panelizer node section overview',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section settings'.
  $permissions['administer panelizer node section settings'] = array(
    'name' => 'administer panelizer node section settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slide defaults'.
  $permissions['administer panelizer node slide defaults'] = array(
    'name' => 'administer panelizer node slide defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform choice'.
  $permissions['administer panelizer node webform choice'] = array(
    'name' => 'administer panelizer node webform choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform content'.
  $permissions['administer panelizer node webform content'] = array(
    'name' => 'administer panelizer node webform content',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform context'.
  $permissions['administer panelizer node webform context'] = array(
    'name' => 'administer panelizer node webform context',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform defaults'.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform layout'.
  $permissions['administer panelizer node webform layout'] = array(
    'name' => 'administer panelizer node webform layout',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform overview'.
  $permissions['administer panelizer node webform overview'] = array(
    'name' => 'administer panelizer node webform overview',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform settings'.
  $permissions['administer panelizer node webform settings'] = array(
    'name' => 'administer panelizer node webform settings',
    'roles' => array(
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term news_categories defaults'.
  $permissions['administer panelizer taxonomy_term news_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term news_categories defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Developer' => 'Developer',
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer sites'.
  $permissions['administer sites'] = array(
    'name' => 'administer sites',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'sites',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tamauth'.
  $permissions['administer tamauth'] = array(
    'name' => 'administer tamauth',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'tamauth',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer ultimate cron'.
  $permissions['administer ultimate cron'] = array(
    'name' => 'administer ultimate cron',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'ultimate_cron',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench access'.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer workbench schedules'.
  $permissions['administer workbench schedules'] = array(
    'name' => 'administer workbench schedules',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'assign workbench access'.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'batch update workbench access'.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create component content'.
  $permissions['create component content'] = array(
    'name' => 'create component content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create contact content'.
  $permissions['create contact content'] = array(
    'name' => 'create contact content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faktum content'.
  $permissions['create faktum content'] = array(
    'name' => 'create faktum content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fieldable image'.
  $permissions['create fieldable image'] = array(
    'name' => 'create fieldable image',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable image_text'.
  $permissions['create fieldable image_text'] = array(
    'name' => 'create fieldable image_text',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable text'.
  $permissions['create fieldable text'] = array(
    'name' => 'create fieldable text',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create gallery content'.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create important_message content'.
  $permissions['create important_message content'] = array(
    'name' => 'create important_message content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create section content'.
  $permissions['create section content'] = array(
    'name' => 'create section content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create slide content'.
  $permissions['create slide content'] = array(
    'name' => 'create slide content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any component content'.
  $permissions['delete any component content'] = array(
    'name' => 'delete any component content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contact content'.
  $permissions['delete any contact content'] = array(
    'name' => 'delete any contact content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any faktum content'.
  $permissions['delete any faktum content'] = array(
    'name' => 'delete any faktum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery content'.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any important_message content'.
  $permissions['delete any important_message content'] = array(
    'name' => 'delete any important_message content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any section content'.
  $permissions['delete any section content'] = array(
    'name' => 'delete any section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any slide content'.
  $permissions['delete any slide content'] = array(
    'name' => 'delete any slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete fieldable image'.
  $permissions['delete fieldable image'] = array(
    'name' => 'delete fieldable image',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable image_text'.
  $permissions['delete fieldable image_text'] = array(
    'name' => 'delete fieldable image_text',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable text'.
  $permissions['delete fieldable text'] = array(
    'name' => 'delete fieldable text',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own component content'.
  $permissions['delete own component content'] = array(
    'name' => 'delete own component content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contact content'.
  $permissions['delete own contact content'] = array(
    'name' => 'delete own contact content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own faktum content'.
  $permissions['delete own faktum content'] = array(
    'name' => 'delete own faktum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery content'.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own important_message content'.
  $permissions['delete own important_message content'] = array(
    'name' => 'delete own important_message content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own section content'.
  $permissions['delete own section content'] = array(
    'name' => 'delete own section content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own slide content'.
  $permissions['delete own slide content'] = array(
    'name' => 'delete own slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in media_folders'.
  $permissions['delete terms in media_folders'] = array(
    'name' => 'delete terms in media_folders',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_categories'.
  $permissions['delete terms in news_categories'] = array(
    'name' => 'delete terms in news_categories',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sites'.
  $permissions['delete terms in sites'] = array(
    'name' => 'delete terms in sites',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any component content'.
  $permissions['edit any component content'] = array(
    'name' => 'edit any component content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any contact content'.
  $permissions['edit any contact content'] = array(
    'name' => 'edit any contact content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any faktum content'.
  $permissions['edit any faktum content'] = array(
    'name' => 'edit any faktum content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery content'.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any important_message content'.
  $permissions['edit any important_message content'] = array(
    'name' => 'edit any important_message content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section content'.
  $permissions['edit any section content'] = array(
    'name' => 'edit any section content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any slide content'.
  $permissions['edit any slide content'] = array(
    'name' => 'edit any slide content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit fieldable image'.
  $permissions['edit fieldable image'] = array(
    'name' => 'edit fieldable image',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable image_text'.
  $permissions['edit fieldable image_text'] = array(
    'name' => 'edit fieldable image_text',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable text'.
  $permissions['edit fieldable text'] = array(
    'name' => 'edit fieldable text',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit node expire'.
  $permissions['edit node expire'] = array(
    'name' => 'edit node expire',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'node_expire',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own component content'.
  $permissions['edit own component content'] = array(
    'name' => 'edit own component content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own contact content'.
  $permissions['edit own contact content'] = array(
    'name' => 'edit own contact content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own faktum content'.
  $permissions['edit own faktum content'] = array(
    'name' => 'edit own faktum content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery content'.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own important_message content'.
  $permissions['edit own important_message content'] = array(
    'name' => 'edit own important_message content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section content'.
  $permissions['edit own section content'] = array(
    'name' => 'edit own section content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slide content'.
  $permissions['edit own slide content'] = array(
    'name' => 'edit own slide content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in media_folders'.
  $permissions['edit terms in media_folders'] = array(
    'name' => 'edit terms in media_folders',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_categories'.
  $permissions['edit terms in news_categories'] = array(
    'name' => 'edit terms in news_categories',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sites'.
  $permissions['edit terms in sites'] = array(
    'name' => 'edit terms in sites',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flag notification_node_auto_unpublish'.
  $permissions['flag notification_node_auto_unpublish'] = array(
    'name' => 'flag notification_node_auto_unpublish',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag notification_node_changed'.
  $permissions['flag notification_node_changed'] = array(
    'name' => 'flag notification_node_changed',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag notification_node_expiration'.
  $permissions['flag notification_node_expiration'] = array(
    'name' => 'flag notification_node_expiration',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'media_bulk_upload',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'features',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'Developer' => 'Developer',
      'IT-ops' => 'IT-ops',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'menu view unpublished'.
  $permissions['menu view unpublished'] = array(
    'name' => 'menu view unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'menu_view_unpublished',
  );

  // Exported permission: 'moderate content from approved to published'.
  $permissions['moderate content from approved to published'] = array(
    'name' => 'moderate content from approved to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to approved'.
  $permissions['moderate content from draft to approved'] = array(
    'name' => 'moderate content from draft to approved',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to deleted'.
  $permissions['moderate content from draft to deleted'] = array(
    'name' => 'moderate content from draft to deleted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to approved'.
  $permissions['moderate content from needs_review to approved'] = array(
    'name' => 'moderate content from needs_review to approved',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to deleted'.
  $permissions['moderate content from published to deleted'] = array(
    'name' => 'moderate content from published to deleted',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to draft'.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'preview focal point'.
  $permissions['preview focal point'] = array(
    'name' => 'preview focal point',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'focal_point',
  );

  // Exported permission: 'reference unpublished nodes'.
  $permissions['reference unpublished nodes'] = array(
    'name' => 'reference unpublished nodes',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'entityreference_unpublished_node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set any workbench schedule'.
  $permissions['set any workbench schedule'] = array(
    'name' => 'set any workbench schedule',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'set workbench schedule'.
  $permissions['set workbench schedule'] = array(
    'name' => 'set workbench schedule',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'set workbench schedule for standard'.
  $permissions['set workbench schedule for standard'] = array(
    'name' => 'set workbench schedule for standard',
    'roles' => array(),
    'module' => 'workbench_scheduler',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Developer' => 'Developer',
      'Editor' => 'Editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unflag notification_node_auto_unpublish'.
  $permissions['unflag notification_node_auto_unpublish'] = array(
    'name' => 'unflag notification_node_auto_unpublish',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag notification_node_changed'.
  $permissions['unflag notification_node_changed'] = array(
    'name' => 'unflag notification_node_changed',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag notification_node_expiration'.
  $permissions['unflag notification_node_expiration'] = array(
    'name' => 'unflag notification_node_expiration',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Developer' => 'Developer',
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Developer' => 'Developer',
      'Extended layout' => 'Extended layout',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Editor' => 'Editor',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format simple_html'.
  $permissions['use text format simple_html'] = array(
    'name' => 'use text format simple_html',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Editor' => 'Editor',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Employee' => 'Employee',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view author options'.
  $permissions['view author options'] = array(
    'name' => 'view author options',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view body options'.
  $permissions['view body options'] = array(
    'name' => 'view body options',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view comment preview button'.
  $permissions['view comment preview button'] = array(
    'name' => 'view comment preview button',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view comment settings'.
  $permissions['view comment settings'] = array(
    'name' => 'view comment settings',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view delete button'.
  $permissions['view delete button'] = array(
    'name' => 'view delete button',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view menu options'.
  $permissions['view menu options'] = array(
    'name' => 'view menu options',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view path options'.
  $permissions['view path options'] = array(
    'name' => 'view path options',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view preview button'.
  $permissions['view preview button'] = array(
    'name' => 'view preview button',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revision information'.
  $permissions['view revision information'] = array(
    'name' => 'view revision information',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view revision log textarea'.
  $permissions['view revision log textarea'] = array(
    'name' => 'view revision log textarea',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view submit button'.
  $permissions['view submit button'] = array(
    'name' => 'view submit button',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view teaser controls'.
  $permissions['view teaser controls'] = array(
    'name' => 'view teaser controls',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
      'Site administrator' => 'Site administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user delete button'.
  $permissions['view user delete button'] = array(
    'name' => 'view user delete button',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view workbench access information'.
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(
      'Author' => 'Author',
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'view workbench taxonomy pages'.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      'Developer' => 'Developer',
    ),
    'module' => 'workbench_access',
  );

  return $permissions;
}
