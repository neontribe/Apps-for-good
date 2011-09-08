<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function afg_fckeditor_user_default_permissions() {
  $permissions = array();

  // Exported permission: import wysiwyg profiles
  $permissions['import wysiwyg profiles'] = array(
    'name' => 'import wysiwyg profiles',
    'roles' => array(),
  );

  return $permissions;
}
