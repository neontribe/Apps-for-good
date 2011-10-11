<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function afg_fckeditor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "wysiwyg" && $api == "wysiwyg_defaults") {
    return array("version" => 2);
  }
}
