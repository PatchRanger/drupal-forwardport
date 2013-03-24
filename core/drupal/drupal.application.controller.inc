<?php

class Drupal extends Application /*implements IFile*/ {

  /**
   * Bootstrap Drupal and run a single test.
   * We had to reimplement it to make magic work.
   */
  function required_modules() {
    $files = drupal_system_listing('/^' . DRUPAL_PHP_FUNCTION_PATTERN . '\.info$/', 'modules', 'name', 0);
    $required = array();
    // An installation profile is required and one must always be loaded.
    $required[] = drupal_get_profile();
    foreach ($files as $name => $file) {
      $info = drupal_parse_info_file($file->uri);
      if (!empty($info) && !empty($info['required']) && $info['required']) {
        $required[] = $name;
      }
    }
    return $required;
  }
}