; Apapt Core override file
; Override settings from adapt_core module or
; remove module entirely with project by setting the corresponding key to FALSE:

core = 7.x
api = 2

projects[adminimal_theme][type] = 'theme'
projects[adminimal_theme][version] = '1.17'
projects[adminimal_theme][subdir] = 'contrib'
projects[adminimal_theme][download][branch] = '7.x-1.x'
projects[adminimal_theme][download][type] = 'git'
projects[adminimal_theme][download][url] = 'http://git.drupal.org/project/adminimal_theme.git'
projects[adminimal_theme][download][revision] = '18764126fe8ff6ebe91d6e95c026d4cb9a6c6228'

projects[entity][type] = 'module'
projects[entity][subdir] = 'contrib'
projects[entity][download][branch] = '7.x-1.x'
projects[entity][download][type] = 'git'
projects[entity][download][url] = 'http://git.drupal.org/project/entity.git'
projects[entity][download][revision] = '4d2cc6fb1ecba4409cb8d1b813133366dea2c460'
projects[entity][patch][] = 'http://www.drupal.org/files/issues/2020325-entity-data-from-context-17.patch'

projects[wysiwyg][type] = 'module'
projects[wysiwyg][subdir] = 'contrib'
projects[wysiwyg][download][branch] = '7.x-2.x'
projects[wysiwyg][download][type] = 'git'
projects[wysiwyg][download][url] = 'http://git.drupal.org/project/wysiwyg.git'
projects[wysiwyg][download][revision] = '52e2675b9dc92d8d71ac421d59e12a7f5b53ca68'

libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.4.3_edit.zip
libraries[ckeditor][type] = library

projects[media][download][revision] = 'fe09f096029e7c495f0023afd7192aa081f0e080'
projects[media][patch][] = 'http://drupal.org/files/issues/2177893-4-ckeditor4-media-plugin.patch'
projects[media][patch][] = 'http://drupal.org/files/issues/media-wysiwyg-improve-our-macro-handling-2126755-100.patch'
projects[media][patch][] = 'https://raw.githubusercontent.com/kevinchampion/imagex_patches/update-media-patch/contrib/media/media-ckeditor-bind-unbind-stripping.patch'

projects[file_entity][download][revision] = '5e9c095beeaf2484d69f754cb3410f48180a2a3c'

projects[linkit][type] = 'module'
projects[linkit][subdir] = 'contrib'
projects[linkit][download][branch] = '7.x-3.x'
projects[linkit][download][type] = 'git'
projects[linkit][download][url] = 'http://git.drupal.org/project/linkit.git'
projects[linkit][download][revision] = '79d91215cfd69bd968e9dce2f4d0e764dca6ed7f'
projects[linkit][patch][] = 'http://www.drupal.org/files/issues/2158107-9-linking-to-direct-downloads-of-files.patch'

projects[panelizer][type] = 'module'
projects[panelizer][subdir] = 'contrib'
projects[panelizer][download][branch] = '7.x-3.x'
projects[panelizer][download][type] = 'git'
projects[panelizer][download][url] = 'http://git.drupal.org/project/panelizer.git'
projects[panelizer][download][revision] = '72b5e0095c51484f5c8ea1c7da136242afb9be55'
