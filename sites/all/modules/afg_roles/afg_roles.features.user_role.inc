<?php

/**
 * Implementation of hook_user_default_roles().
 */
function afg_roles_user_default_roles() {
  $roles = array();

  // Exported role: App team
  $roles['App team'] = array(
    'name' => 'App team',
  );

  // Exported role: CDI Employee
  $roles['CDI Employee'] = array(
    'name' => 'CDI Employee',
  );

  // Exported role: Educator
  $roles['Educator'] = array(
    'name' => 'Educator',
  );

  // Exported role: Supporter
  $roles['Supporter'] = array(
    'name' => 'Supporter',
  );

  return $roles;
}
