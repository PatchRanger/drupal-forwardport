<?php

class DrupalD6Adapter extends ApplicationAdapter /*implements IFile*/ {

  /**
   * Ensure that Moopapi is enabled for each test.
   */
  public function required_modules() {
    $required_modules = $this->original->required_modules();
    $required_modules[] = 'moopapi';
    return $required_modules;
  }
}