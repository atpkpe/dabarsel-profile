; Apapt Core override file
; Override settings from adapt_core module or
; remove module entirely with project by setting the corresponding key to FALSE:

core = 7.x
api = 2

; This line removes wysiwyg module entirely
projects[wysiwyg] = FALSE
projects[adapt_wysiwyg] = FALSE
libraries[ckeditor] = FALSE

projects[media][download][revision] = 'e8f9228fe759ac3cc7ecb0c9c2baa027721f467e'
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
