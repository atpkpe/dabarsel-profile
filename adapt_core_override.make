; Apapt Core override file
; Override settings from adapt_core module or
; remove module entirely with project by setting the corresponding key to FALSE:

core = 7.x
api = 2

; This line removes menu_trail_by_path module entirely
projects[menu_trail_by_path] = FALSE
projects[adapt_page] = FALSE

projects[wysiwyg][type] = 'module'
projects[wysiwyg][subdir] = 'contrib'
projects[wysiwyg][download][branch] = '7.x-2.x'
projects[wysiwyg][download][type] = 'git'
projects[wysiwyg][download][url] = 'http://git.drupal.org/project/wysiwyg.git'
projects[wysiwyg][download][revision] = '52e2675b9dc92d8d71ac421d59e12a7f5b53ca68'

libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.4.2_edit.zip
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
projects[linkit][download][revision] = 'f769dc2a4eba71f7d38e2b9a7586c3a02c1f3b62'

projects[panelizer][type] = 'module'
projects[panelizer][subdir] = 'contrib'
projects[panelizer][download][branch] = '7.x-3.x'
projects[panelizer][download][type] = 'git'
projects[panelizer][download][url] = 'http://git.drupal.org/project/panelizer.git'
projects[panelizer][download][revision] = '72b5e0095c51484f5c8ea1c7da136242afb9be55'
