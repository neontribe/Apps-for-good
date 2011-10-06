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
  $strongarm->value = '3';
  $export['og_user_roles_default_admin_role'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_default_role';
  $strongarm->value = '5';
  $export['og_user_roles_default_role'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_group';
  $strongarm->value = array(
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    5 => 0,
  );
  $export['og_user_roles_roles_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_group_app_team';
  $strongarm->value = array(
    4 => 4,
    3 => 3,
    5 => 5,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  $export['og_user_roles_roles_group_app_team'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_group_centre_school';
  $strongarm->value = array(
    3 => 3,
    5 => 5,
    7 => 0,
    4 => 0,
    6 => 0,
    8 => 0,
  );
  $export['og_user_roles_roles_group_centre_school'] = $strongarm;

  return $export;
}
