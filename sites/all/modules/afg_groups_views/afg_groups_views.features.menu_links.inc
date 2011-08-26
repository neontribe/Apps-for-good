<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function afg_groups_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-centre-directory-links:node/101
  $menu_links['menu-centre-directory-links:node/101'] = array(
    'menu_name' => 'menu-centre-directory-links',
    'link_path' => 'node/101',
    'router_path' => 'node/%',
    'link_title' => 'How to become a Partner!',
    'options' => array(
      'attributes' => array(
        'title' => 'How to become a Partner!',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-centre-directory-links:node/102
  $menu_links['menu-centre-directory-links:node/102'] = array(
    'menu_name' => 'menu-centre-directory-links',
    'link_path' => 'node/102',
    'router_path' => 'node/%',
    'link_title' => 'Info for parents!',
    'options' => array(
      'attributes' => array(
        'title' => 'Information for parents',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-centre-directory-links:node/103
  $menu_links['menu-centre-directory-links:node/103'] = array(
    'menu_name' => 'menu-centre-directory-links',
    'link_path' => 'node/103',
    'router_path' => 'node/%',
    'link_title' => 'Learn more about our opensource learning content',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn more about our opensource learning content',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('How to become a Partner!');
  t('Info for parents!');
  t('Learn more about our opensource learning content');


  return $menu_links;
}
