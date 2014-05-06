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
; projects[ckeditor][patch][] = 'http://drupal.org/files/issues/ckeditor-remove-external-plugin-declarations-8-alt.patch'

projects[masquerade][type] = 'module'
projects[masquerade][subdir] = 'contrib'

projects[workbench][type] = 'module'
projects[workbench][subdir] = 'contrib'

projects[workbench_moderation][type] = 'module'
projects[workbench_moderation][subdir] = 'contrib'

projects[linkit][type] = 'module'
projects[linkit][subdir] = 'contrib'
projects[linkit][download][branch] = '7.x-3.x'
projects[linkit][download][type] = 'git'
projects[linkit][download][url] = 'http://git.drupal.org/project/linkit.git'
projects[linkit][download][revision] = '83e3ee6ff3a017680a287354aaa241a3120550fa'
