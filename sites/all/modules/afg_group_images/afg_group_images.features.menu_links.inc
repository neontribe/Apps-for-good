<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function afg_group_images_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/group-image
  $menu_links['navigation:node/add/group-image'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/group-image',
    'router_path' => 'node/add/group-image',
    'link_title' => 'Group Media',
    'options' => array(
      'attributes' => array(
        'title' => 'This allows various media to be added to a group gallery.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Group Media');


  return $menu_links;
}
