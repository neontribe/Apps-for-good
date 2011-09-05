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
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');


  return $menus;
}
