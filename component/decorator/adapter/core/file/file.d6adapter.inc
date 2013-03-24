<?php

class FileD6Adapter extends ApplicationAdapter /*implements IFile*/ {

  /**
   * Adapter for file_directory_path().
   * @see http://drupal.org/update/modules/6/7#file_directory_path
   */
  public function directory_path() {
    return variable_get('file_public_path', conf_path() . '/files');
  }
}