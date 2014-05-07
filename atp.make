api = 2
core = 7.x

; Adapt core
projects[adapt_core][type] = 'module'
projects[adapt_core][subdir] = 'global'
projects[adapt_core][download][type] = 'git'
projects[adapt_core][download][url] = 'https://github.com/adaptdk/adapt_core.git'
projects[adapt_core][download][tag] = '1.5'

; Adapt Basetheme
projects[adapt_basetheme][type] = 'theme'
projects[adapt_basetheme][subdir] = 'global'
projects[adapt_basetheme][download][type] = 'git'
projects[adapt_basetheme][download][url] = 'https://github.com/adaptdk/adapt_basetheme.git'
projects[adapt_basetheme][download][tag] = '0.5'

; ATP modules
projects[ckeditor][type] = 'module'
projects[ckeditor][subdir] = 'contrib'
projects[ckeditor][download][branch] = '7.x-1.x'
projects[ckeditor][download][type] = 'git'
projects[ckeditor][download][url] = 'http://git.drupal.org/project/ckeditor.git'
projects[ckeditor][download][revision] = '71d53bebb03fa3e7b243c7b8acf144884965cd5c'
projects[ckeditor][patch][] = 'http://drupal.org/files/issues/ckeditor-accomodate-latest-media-changes-53.patch'
;projects[ckeditor][patch][] = 'http://drupal.org/files/issues/2177893-4-ckeditor4-media-plugin.patch'
;projects[ckeditor][patch][] = 'http://drupal.org/files/issues/ckeditor-remove-external-plugin-declarations-8-alt.patch'

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



