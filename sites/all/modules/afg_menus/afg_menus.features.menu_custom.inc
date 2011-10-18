<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function afg_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-links
  $menus['menu-footer-links'] = array(
    'menu_name' => 'menu-footer-links',
    'title' => 'Footer',
    'description' => '',
  );
  // Exported menu: menu-info-and-resources
  $menus['menu-info-and-resources'] = array(
    'menu_name' => 'menu-info-and-resources',
    'title' => 'Info and resources',
    'description' => 'Information and resources',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Info and resources');
  t('Information and resources');


  return $menus;
}
