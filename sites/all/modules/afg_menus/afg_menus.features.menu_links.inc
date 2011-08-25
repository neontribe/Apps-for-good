<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function afg_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: admin:admin/build/menu-customize/menu-footer-links
  $menu_links['admin:admin/build/menu-customize/menu-footer-links'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/menu-customize/menu-footer-links',
    'router_path' => 'admin/build/menu-customize/%',
    'link_title' => 'Footer',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');


  return $menu_links;
}
