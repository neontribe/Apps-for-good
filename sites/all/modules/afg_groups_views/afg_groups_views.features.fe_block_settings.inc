<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function afg_groups_views_default_fe_block_settings() {
  $export = array();

  // appsforgood
  $theme = array();

  $theme['views-shoutbox_shouts-block_1'] = array(
    'module' => 'views',
    'delta' => 'shoutbox_shouts-block_1',
    'theme' => 'appsforgood',
    'status' => 0,
    'weight' => '-53',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['appsforgood'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
