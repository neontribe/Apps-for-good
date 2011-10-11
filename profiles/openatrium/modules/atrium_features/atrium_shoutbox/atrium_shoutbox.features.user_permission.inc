<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_shoutbox_user_default_permissions() {
  $permissions = array();

  // Exported permission: create shoutbox content
  $permissions['create shoutbox content'] = array(
    'name' => 'create shoutbox content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own shoutbox content
  $permissions['delete own shoutbox content'] = array(
    'name' => 'delete own shoutbox content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: edit own shoutbox content
  $permissions['edit own shoutbox content'] = array(
    'name' => 'edit own shoutbox content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
      '3' => 'authenticated user',
    ),
  );

  return $permissions;
}
