<?php

/**
 * Implementation of hook_strongarm().
 */
function afg_profile_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addresses_country_list';
  $strongarm->value = array(
    'uk' => 'uk',
  );

  $export['addresses_country_list'] = $strongarm;
  return $export;
}
