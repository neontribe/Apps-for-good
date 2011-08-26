<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function afg_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:apps
  $menu_links['features:apps'] = array(
    'menu_name' => 'features',
    'link_path' => 'apps',
    'router_path' => 'apps',
    'link_title' => 'Applications',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: features:centres
  $menu_links['features:centres'] = array(
    'menu_name' => 'features',
    'link_path' => 'centres',
    'router_path' => 'centres',
    'link_title' => 'Centres',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
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
  // Exported menu link: menu-footer-links:apps
  $menu_links['menu-footer-links:apps'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'apps',
    'router_path' => 'apps',
    'link_title' => 'Apps',
    'options' => array(
      'attributes' => array(
        'title' => 'Apps',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-footer-links:centres
  $menu_links['menu-footer-links:centres'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'centres',
    'router_path' => 'centres',
    'link_title' => 'Centres',
    'options' => array(
      'attributes' => array(
        'title' => 'Centres',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
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
  // Exported menu link: menu-footer-links:node/105
  $menu_links['menu-footer-links:node/105'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'node/105',
    'router_path' => 'node/%',
    'link_title' => 'AppsForGood.org © 2011',
    'options' => array(
      'attributes' => array(
        'title' => 'AppsForGood.org © 2011',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Applications');
  t('Apps');
  t('Apps for Good');
  t('AppsForGood.org © 2011');
  t('Centres');


  return $menu_links;
}
