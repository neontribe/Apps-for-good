<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function afg_group_media_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'app_media';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 1;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'App Media Tabbed';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'Group_Media',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'Pitch video',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'Group_Media',
      'display' => 'block_2',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'Problem video',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'Group_Media',
      'display' => 'block_4',
      'args' => '',
      'get_displays' => 'vdisp_2',
      'title' => 'Biz Plan',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'Group_Media',
      'display' => 'block_3',
      'args' => '',
      'get_displays' => 'vdisp_3',
      'title' => 'Logo',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Navlist-afg';
  $export['app_media'] = $quicktabs;

  return $export;
}
