; Apapt Core override file
; Override settings from adapt_core module or
; remove module entirely with project by setting the corresponding key to FALSE:

core = 7.x
api = 2

; This line removes menu_trail_by_path module entirely
projects[menu_trail_by_path] = FALSE

projects[adminimal_theme][type] = 'module'
projects[adminimal_theme][subdir] = 'contrib'
projects[adminimal_theme][download][branch] = '7.x-1.x'
projects[adminimal_theme][download][type] = 'git'
projects[adminimal_theme][download][url] = 'http://git.drupal.org/project/adminimal_theme.git'
projects[adminimal_theme][download][revision] = '40f8d1c89d5a3b23cf6bc2cfce00dca2f96b311c'
projects[adminimal_theme][patch][] = 'http://drupal.org/files/issues/adminimal_theme-jquery-window-close-icon-2264009-1.patch'

projects[wysiwyg][type] = 'module'
projects[wysiwyg][subdir] = 'contrib'
projects[wysiwyg][download][branch] = '7.x-2.x'
projects[wysiwyg][download][type] = 'git'
projects[wysiwyg][download][url] = 'http://git.drupal.org/project/wysiwyg.git'
projects[wysiwyg][download][revision] = '52e2675b9dc92d8d71ac421d59e12a7f5b53ca68'

libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor%20for%20Drupal/edit/ckeditor_4.4.0_edit.zip
libraries[ckeditor][type] = library

projects[media][download][revision] = '06936c017922c9931bebc8157cd1ba6067954438'
projects[file_entity][download][revision] = '13fa2b0bcb73d066b996bffed9f13c6a66ed924d'

projects[linkit][type] = 'module'
projects[linkit][subdir] = 'contrib'
projects[linkit][download][branch] = '7.x-3.x'
projects[linkit][download][type] = 'git'
projects[linkit][download][url] = 'http://git.drupal.org/project/linkit.git'
projects[linkit][download][revision] = '83e3ee6ff3a017680a287354aaa241a3120550fa'

projects[panelizer][type] = 'module'
projects[panelizer][subdir] = 'contrib'
projects[panelizer][download][branch] = '7.x-3.x'
projects[panelizer][download][type] = 'git'
projects[panelizer][download][url] = 'http://git.drupal.org/project/panelizer.git'
projects[panelizer][download][revision] = '72b5e0095c51484f5c8ea1c7da136242afb9be55'
