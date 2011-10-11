<?php

/**
 * Implementation of hook_strongarm().
 */
function afg_roles_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_default_admin_role';
  $strongarm->value = '11';
  $export['og_user_roles_default_admin_role'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_default_role';
  $strongarm->value = '12';
  $export['og_user_roles_default_role'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_group';
  $strongarm->value = array(
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $export['og_user_roles_roles_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_group_app_team';
  $strongarm->value = array(
    9 => 9,
    11 => 11,
    12 => 12,
    10 => 0,
  );
  $export['og_user_roles_roles_group_app_team'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_group_centre_school';
  $strongarm->value = array(
    11 => 11,
    12 => 12,
    9 => 0,
    10 => 0,
  );
  $export['og_user_roles_roles_group_centre_school'] = $strongarm;

  return $export;
}
