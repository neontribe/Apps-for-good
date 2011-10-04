<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function afg_group_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function afg_group_media_imagecache_default_presets() {
  $items = array(
    'image-node' => array(
      'presetname' => 'image-node',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '620',
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
function afg_group_media_node_info() {
  $items = array(
    'group_media_image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('An Image attached to a group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'group_media_video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('A video attached to a group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'request_for_help' => array(
      'name' => t('Request for help'),
      'module' => 'features',
      'description' => t('A request for help posted into a group.'),
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
function afg_group_media_views_api() {
  return array(
    'api' => '2',
  );
}
