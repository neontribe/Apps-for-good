<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function afg_groups_views_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-centre-directory-links
  $menus['menu-centre-directory-links'] = array(
    'menu_name' => 'menu-centre-directory-links',
    'title' => 'Centre Links',
    'description' => 'Links from Centre directory page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Centre Links');
  t('Links from Centre directory page');


  return $menus;
}
