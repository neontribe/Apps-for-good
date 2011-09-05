<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function afg_groups_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: admin:admin/build/menu-customize/menu-centre-directory-links
  $menu_links['admin:admin/build/menu-customize/menu-centre-directory-links'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/menu-customize/menu-centre-directory-links',
    'router_path' => 'admin/build/menu-customize/%',
    'link_title' => 'Centre Links',
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
  t('Centre Links');


  return $menu_links;
}
