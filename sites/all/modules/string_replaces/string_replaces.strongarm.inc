<?php

/**
 * Implementation of hook_strongarm().
 */
function string_replaces_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array(
    'Members' => 'Supporters',
    'Dashboard' => 'Homespace',
  );

  $export['locale_custom_strings_en'] = $strongarm;
  return $export;
}