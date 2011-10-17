<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog content
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: delete own blog content
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: edit own blog content
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
