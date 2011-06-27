<?php

/**
 * Implementation of hook_user_default_roles().
 */
function afg_profile_user_default_roles() {
  $roles = array();

  // Exported role: supporter
  $roles['supporter'] = array(
    'name' => 'supporter',
  );

  return $roles;
}
