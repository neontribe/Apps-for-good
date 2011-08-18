<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function afg_theme_updates_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-header-menu
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header Menu');


  return $menus;
}
