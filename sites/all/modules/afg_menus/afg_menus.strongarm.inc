<?php

/**
 * Implementation of hook_strongarm().
 */
function afg_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[title-raw]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  return $export;
}
