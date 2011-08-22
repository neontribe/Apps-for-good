<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function afg_groups_views_quicktabs_default_quicktabs() {
  $export = array();
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'homepage_recent_updates';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Homepage recent updates';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'updates',
      'display' => 'block_9',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'Stuff you\'re following',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'updates',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'Recent Activity',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Basic';

  $export['homepage_recent_updates'] = $quicktabs;
  return $export;
}
