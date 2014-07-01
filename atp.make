api = 2
core = 7.x

; Adapt core
projects[adapt_core][type] = 'module'
projects[adapt_core][subdir] = 'global'
projects[adapt_core][download][type] = 'git'
projects[adapt_core][download][url] = 'https://github.com/adaptdk/adapt_core.git'
projects[adapt_core][download][tag] = '1.5.2'
projects[menu_trail_by_path] = FALSE

; Adapt Basetheme
projects[adapt_basetheme][type] = 'theme'
projects[adapt_basetheme][subdir] = 'global'
projects[adapt_basetheme][download][type] = 'git'
projects[adapt_basetheme][download][url] = 'https://github.com/adaptdk/adapt_basetheme.git'
projects[adapt_basetheme][download][tag] = '0.5'

; ATP modules
projects[i18n][type] = 'module'
projects[i18n][subdir] = 'contrib'
projects[i18n][download][branch] = '7.x-1.x'
projects[i18n][download][type] = 'git'
projects[i18n][download][url] = 'http://git.drupal.org/project/i18n.git'
projects[i18n][download][revision] = '76b371ed1ff617f19bb4d47ba55a650b41febcab'

projects[i18n_menu_overview][type] = 'module'
projects[i18n_menu_overview][subdir] = 'contrib'
projects[i18n_menu_overview][download][branch] = '7.x-3.x'
projects[i18n_menu_overview][download][type] = 'git'
projects[i18n_menu_overview][download][url] = 'http://git.drupal.org/project/i18n_menu_overview.git'
projects[i18n_menu_overview][download][revision] = '07d0b07ddc9b7b6c7943d302a7b9d883ceffaa10'

projects[l10n_update][type] = 'module'
projects[l10n_update][subdir] = 'contrib'
projects[l10n_update][download][branch] = '7.x-2.x'
projects[l10n_update][download][type] = 'git'
projects[l10n_update][download][url] = 'http://git.drupal.org/project/l10n_update.git'
projects[l10n_update][download][revision] = '476c07e9ec71828fd6af00c5b6e7ce7b0ef46665'

projects[masquerade][type] = 'module'
projects[masquerade][subdir] = 'contrib'

projects[workbench][type] = 'module'
projects[workbench][subdir] = 'contrib'
projects[workbench][download][branch] = '7.x-1.x'
projects[workbench][download][type] = 'git'
projects[workbench][download][url] = 'http://git.drupal.org/project/workbench.git'
projects[workbench][download][revision] = '6856e4a5b445ee802c898d27347bb45eb44ea43e'

projects[workbench_moderation][type] = 'module'
projects[workbench_moderation][subdir] = 'contrib'
projects[workbench_moderation][download][branch] = '7.x-1.x'
projects[workbench_moderation][download][type] = 'git'
projects[workbench_moderation][download][url] = 'http://git.drupal.org/project/workbench_moderation.git'
projects[workbench_moderation][download][revision] = 'a90378de5b1aea2b095ff5613eea44f55947f514'
; projects[workbench_moderation][patch][] = 'http://drupal.org/files/issues/workbench_moderation-panelizer_revisions-1402860-44_0.patch'

projects[workbench_access][type] = 'module'
projects[workbench_access][subdir] = 'contrib'
projects[workbench_access][download][branch] = '7.x-1.x'
projects[workbench_access][download][type] = 'git'
projects[workbench_access][download][url] = 'http://git.drupal.org/project/workbench_access.git'
projects[workbench_access][download][revision] = 'dc60f628aa8ba6d5f8dd09c0ebe40c047a0518ce'

projects[scheduler][type] = 'module'
projects[scheduler][subdir] = 'contrib'
projects[scheduler][version] = '1.2'

projects[scheduler_workbench][type] = 'module'
projects[scheduler_workbench][subdir] = 'contrib'
projects[scheduler_workbench][download][branch] = '7.x-1.x'
projects[scheduler_workbench][download][type] = 'git'
projects[scheduler_workbench][download][url] = 'http://git.drupal.org/project/scheduler_workbench.git'
projects[scheduler_workbench][download][revision] = '50c62aefc69390a66cfa111b1b70c461506d046a'
; Only allow certain states to be published by scheduler, https://drupal.org/node/1955938
projects[scheduler_workbench][patch][] = 'http://drupal.org/files/1966814-1-scheduler_workbench-tests.patch'
projects[scheduler_workbench][patch][] = 'http://drupal.org/files/issues/1955938-22-scheduler_workbench-only_publish_approved.patch'
; Schedule revisions, https://drupal.org/node/2048999
projects[scheduler_workbench][patch][] = 'http://drupal.org/files/issues/scheduler_workbench-revision_publish-707484-22.patch'

projects[menu_view_unpublished][type] = 'module'
projects[menu_view_unpublished][subdir] = 'contrib'
projects[menu_view_unpublished][download][branch] = '7.x-1.x'
projects[menu_view_unpublished][download][type] = 'git'
projects[menu_view_unpublished][download][url] = 'http://git.drupal.org/project/menu_view_unpublished.git'
projects[menu_view_unpublished][download][revision] = '14a55f40120874814fe7bd4acc44a2548801296d'
; Add class to menu items, https://drupal.org/node/1801660
projects[menu_view_unpublished][patch][] = 'http://drupal.org/files/issues/node-unpublishded-class-to-menus-1801660-1.patch'

projects[taxonomy_access_fix] = 'module'
projects[taxonomy_access_fix][subdir] = 'contrib'
projects[taxonomy_access_fix][version] = '2.1'

projects[menu_admin_per_menu] = 'module'
projects[menu_admin_per_menu][subdir] = 'contrib'
projects[menu_admin_per_menu][version] = '1.0'

projects[date][type] = 'module'
projects[date][subdir] = 'contrib'
projects[date][version] = '2.7'

projects[image_preset] = 'module'
projects[image_preset][subdir] = 'contrib'
projects[image_preset][version] = '1.0'

projects[field_group_link][type] = 'module'
projects[field_group_link][subdir] = 'contrib'
projects[field_group_link][version] = '1.2'

projects[uuid_features_menu][type] = 'module'
projects[uuid_features_menu][subdir] = 'contrib'
projects[uuid_features_menu][download][branch] = '7.x-1.x'
projects[uuid_features_menu][download][type] = 'git'
projects[uuid_features_menu][download][url] = 'http://git.drupal.org/sandbox/ioskevich/2163429.git'
projects[uuid_features_menu][download][revision] = '1b3c154640455a193e717582b01815e4c10ab217'

projects[multifield][type] = 'module'
projects[multifield][subdir] = 'contrib'
projects[multifield][download][branch] = '7.x-1.x'
projects[multifield][download][type] = 'git'
projects[multifield][download][url] = 'http://git.drupal.org/project/multifield.git'
projects[multifield][download][revision] = '4e7a90e261d667c027eaa400bf490ffbf83f03a1'
projects[multifield][patch][] = 'http://drupal.org/files/issues/multifield-features-2102265-12_0.patch'
projects[multifield][patch][] = 'http://drupal.org/files/issues/i2041533-34.patch'

projects[media_browser_plus][type] = 'module'
projects[media_browser_plus][subdir] = 'contrib'
projects[media_browser_plus][download][branch] = '7.x-3.x'
projects[media_browser_plus][download][type] = 'git'
projects[media_browser_plus][download][url] = 'http://git.drupal.org/project/media_browser_plus.git'
projects[media_browser_plus][download][revision] = '0e5759ec0c6c5685aed69082630f9f811c0ff8f9'
projects[media_browser_plus][patch][] = 'http://www.drupal.org/files/issues/media_browser_plus-admin-permission-2223841-1.patch'

projects[views_tree][type] = 'module'
projects[views_tree][subdir] = 'contrib'
projects[views_tree][version] = '2.0'

projects[multiform][type] = 'module'
projects[multiform][subdir] = 'contrib'
projects[multiform][version] = '1.1'

projects[webform][type] = 'module'
projects[webform][subdir] = 'contrib'
projects[webform][version] = '4.0-rc4'

projects[jammer][type] = 'module'
projects[jammer][subdir] = 'contrib'
projects[jammer][version] = '1.3'

projects[plupload][type] = 'module'
projects[plupload][subdir] = 'contrib'
projects[plupload][version] = '1.6'

projects[ckeditor_link][type] = 'module'
projects[ckeditor_link][subdir] = 'contrib'
projects[ckeditor_link][version] = '2.3'

projects[gss][type] = 'module'
projects[gss][subdir] = 'contrib'
projects[gss][download][branch] = '7.x-1.x'
projects[gss][download][type] = 'git'
projects[gss][download][url] = 'http://git.drupal.org/project/gss.git'
projects[gss][download][revision] = '1d92c2c5a8a79cf1e481555e9637899b757b2e75'
projects[gss][patch][] = 'http://drupal.org/files/issues/gss-autocomplete-overlay-2286797-2.patch'

projects[focal_point][type] = 'module'
projects[focal_point][subdir] = 'contrib'
projects[focal_point][version] = '1.0-alpha4'

projects[purl][type] = 'module'
projects[purl][subdir] = 'contrib'
projects[purl][download][branch] = '7.x-1.x'
projects[purl][download][type] = 'git'
projects[purl][download][url] = 'http://git.drupal.org/project/purl.git'
projects[purl][download][revision] = '469e8668685de4a573e06b29742f6de41771e02c'

projects[memcache][type] = 'module'
projects[memcache][subdir] = 'contrib'
projects[memcache][version] = '1.2'

; plupload library
libraries[plupload][download][type] = get
libraries[plupload][download][url] = 'https://github.com/moxiecode/plupload/archive/v1.5.8.zip'
libraries[plupload][destination] = libraries
libraries[plupload][directory_name] = plupload
libraries[plupload][patch][1903850] = "http://drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-16.patch"

projects[adminimal_theme][type] = 'theme'
projects[adminimal_theme][subdir] = 'contrib'
projects[adminimal_theme][version] = '1.17'
