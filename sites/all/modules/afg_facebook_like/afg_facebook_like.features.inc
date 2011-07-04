<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function afg_facebook_like_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
