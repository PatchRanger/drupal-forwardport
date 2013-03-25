; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
core = 7.x
; API version
; ------------
; Every makefile needs to declare it's Drush Make API version. This version of
; drush make uses API version `2`.
api = 2
; Patching core.
projects[drupal][patch][] = "http://raw.github.com/Staratel/drupal7-moopapi/master/add_moopapi_to_install_profiles.patch"
