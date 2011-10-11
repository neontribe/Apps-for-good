<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function afg_group_definitions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
}
