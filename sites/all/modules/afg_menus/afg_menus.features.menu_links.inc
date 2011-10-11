<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function afg_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-links:<front>
  $menu_links['menu-footer-links:<front>'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Apps for Good',
    'options' => array(
      'attributes' => array(
        'title' => 'Apps for Good Home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: menu-footer-links:node/104
  $menu_links['menu-footer-links:node/104'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Apps for Good');


  return $menu_links;
}
