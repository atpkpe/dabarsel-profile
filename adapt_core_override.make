; Apapt Core override file
; Override settings from adapt_core module or
; remove module entirely with project by setting the corresponding key to FALSE:

core = 7.x
api = 2

; This line removes wysiwyg module entirely
projects[wysiwyg] = FALSE
libraries[ckeditor] = FALSE

projects[media][download][revision] = 'e8f9228fe759ac3cc7ecb0c9c2baa027721f467e'
projects[file_entity][download][revision] = '13fa2b0bcb73d066b996bffed9f13c6a66ed924d'
