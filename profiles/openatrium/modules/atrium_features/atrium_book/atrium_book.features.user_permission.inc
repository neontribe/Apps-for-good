<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_book_user_default_permissions() {
  $permissions = array();

  // Exported permission: add content to books
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: administer book outlines
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: create book content
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      '0' => 'Educator',
    ),
  );

  // Exported permission: create new books
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: delete any book content
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      '0' => 'Educator',
    ),
  );

  // Exported permission: delete own book content
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      '0' => 'Educator',
    ),
  );

  // Exported permission: edit any book content
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      '0' => 'Educator',
    ),
  );

  return $permissions;
}
