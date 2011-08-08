<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function afg_groups_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function afg_groups_views_imagecache_default_presets() {
  $items = array(
    'centre-app-logo' => array(
      'presetname' => 'centre-app-logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '120',
            'upscale' => 1,
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
function afg_groups_views_node_info() {
  $items = array(
    'group_app_team' => array(
      'name' => t('Application Team'),
      'module' => 'features',
      'description' => t('This is an Application Team group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'group_centre_school' => array(
      'name' => t('Center/ School'),
      'module' => 'features',
      'description' => t('This is a centre or school group.'),
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
function afg_groups_views_views_api() {
  return array(
    'api' => '2',
  );
}
