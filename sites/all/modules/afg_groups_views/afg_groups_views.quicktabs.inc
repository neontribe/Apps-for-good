<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function afg_groups_views_quicktabs_default_quicktabs() {
  $export = array();
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'app_directory';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Browse Apps';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'afg_app_directory',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'Ideas',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'afg_app_directory',
      'display' => 'block_2',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'Prototypes',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'afg_app_directory',
      'display' => 'block_3',
      'args' => '',
      'get_displays' => 'vdisp_2',
      'title' => 'Builds',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'afg_app_directory',
      'display' => 'block_4',
      'args' => '',
      'get_displays' => 'vdisp_3',
      'title' => 'All',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Basic-afg';

  $export['app_directory'] = $quicktabs;
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'homepage_recent_updates';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'What\'s happening';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'updates',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'Recent Activity',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'updates',
      'display' => 'block_9',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'Stuff you\'re following',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Basic-afg';

  $export['homepage_recent_updates'] = $quicktabs;
  return $export;
}
