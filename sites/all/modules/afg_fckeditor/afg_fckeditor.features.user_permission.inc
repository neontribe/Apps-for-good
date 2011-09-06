<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function afg_fckeditor_user_default_permissions() {
  $permissions = array();

  // Exported permission: access fckeditor
  $permissions['access fckeditor'] = array(
    'name' => 'access fckeditor',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer fckeditor
  $permissions['administer fckeditor'] = array(
    'name' => 'administer fckeditor',
    'roles' => array(),
  );

  // Exported permission: allow fckeditor file uploads
  $permissions['allow fckeditor file uploads'] = array(
    'name' => 'allow fckeditor file uploads',
    'roles' => array(),
  );

  return $permissions;
}
