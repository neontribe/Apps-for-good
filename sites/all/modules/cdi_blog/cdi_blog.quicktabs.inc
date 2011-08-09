<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function cdi_blog_quicktabs_default_quicktabs() {
  $export = array();
  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'cdi_features';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'cdi Features';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'Feature_Editorial',
      'display' => 'page_1',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'Homepage',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'Feature_Editorial',
      'display' => 'page_1',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'App Feature',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'Basic';

  $export['cdi_features'] = $quicktabs;
  return $export;
}
