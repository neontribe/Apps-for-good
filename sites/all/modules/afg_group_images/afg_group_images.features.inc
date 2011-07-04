<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function afg_group_images_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function afg_group_images_imagecache_default_presets() {
  $items = array(
    'group_image_thumb' => array(
      'presetname' => 'group_image_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '180px',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function afg_group_images_node_info() {
  $items = array(
    'group_image' => array(
      'name' => t('Group Image'),
      'module' => 'features',
      'description' => t('This is an image that can be added to a group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function afg_group_images_views_api() {
  return array(
    'api' => '2',
  );
}
