api = 2
core = 7.x

; Adapt core
projects[adapt_core][type] = 'module'
projects[adapt_core][subdir] = 'global'
projects[adapt_core][download][type] = 'git'
projects[adapt_core][download][url] = 'https://github.com/adaptdk/adapt_core.git'
projects[adapt_core][download][tag] = '1.4.2'

; Adapt Basetheme
projects[adapt_basetheme][type] = 'theme'
projects[adapt_basetheme][subdir] = 'global'
projects[adapt_basetheme][download][type] = 'git'
projects[adapt_basetheme][download][url] = 'https://github.com/adaptdk/adapt_basetheme.git'
projects[adapt_basetheme][download][tag] = '0.5'

; ATP modules
projects[ckeditor][type] = 'module'
projects[ckeditor][subdir] = 'contrib'
projects[ckeditor][download][type] = 'git'
projects[ckeditor][download][url] = 'http://git.drupal.org/project/ckeditor.git'
projects[ckeditor][download][revision] = '71d53bebb03fa3e7b243c7b8acf144884965cd5c'
projects[ckeditor][patch][] = 'http://drupal.org/files/issues/ckeditor-accomodate-latest-media-changes-53.patch'

projects[masquerade][type] = 'module'
projects[masquerade][subdir] = 'contrib'

projects[workbench][type] = 'module'
projects[workbench][subdir] = 'contrib'

projects[workbench_moderation][type] = 'module'
projects[workbench_moderation][subdir] = 'contrib'

; Libraries.
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.3.2_edit.zip
