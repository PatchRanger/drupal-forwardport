<?php

class File extends Application /*implements IFile*/ {

  public function __construct($decorators_applied = array()) {
    parent::__construct($decorators_applied);
    $this->getControllers();
  }

  public function getControllers() {
    if (empty($this->controllers)) {
      foreach ($this->ctrls as $ctrl_name) {
        $this->controllers[$ctrl_name] = $this->getController($ctrl_name);
      }
    }
    return $this->controllers;
  }

  protected function getController($ctrl_name) {
    if (empty($this->controllers[$ctrl_name])) {
      $controller = ComponentFactory::get($this->app_name, 'Controller', $ctrl_name, $this->decorators_applied, $this->relations);
      $this->controllers[$ctrl_name] = $controller;
    }
    return $this->controllers[$ctrl_name];
  }
}