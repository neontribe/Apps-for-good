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
    'description' => 'Apps for Good sitewide header links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Apps for Good sitewide header links');
  t('Header Menu');


  return $menus;
}
