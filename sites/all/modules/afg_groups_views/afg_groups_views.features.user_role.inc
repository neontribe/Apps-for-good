<?php

/**
 * Implementation of hook_user_default_roles().
 */
function afg_groups_views_user_default_roles() {
  $roles = array();

  // Exported role: cdi employee
  $roles['cdi employee'] = array(
    'name' => 'cdi employee',
  );

  return $roles;
}
