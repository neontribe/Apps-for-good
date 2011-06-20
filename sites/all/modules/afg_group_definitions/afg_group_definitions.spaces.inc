<?php

/**
 * Implementation of hook_spaces_presets().
 */
function afg_group_definitions_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'application_team';
  $spaces_presets->title = 'Application Team Group';
  $spaces_presets->description = 'This is an Application Team. All users may view public content from this group. Users must request to join this group.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_selective' => '1',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Application Team Group');
  t('This is an Application Team. All users may view public content from this group. Users must request to join this group.');

  $export['application_team'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'apps_for_good';
  $spaces_presets->title = 'Apps for Good Group';
  $spaces_presets->description = 'This is an Apps for Good group. All users may view public content from this group. Users must request to join this group.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_selective' => '1',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Apps for Good Group');
  t('This is an Apps for Good group. All users may view public content from this group. Users must request to join this group.');

  $export['apps_for_good'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'centre_school';
  $spaces_presets->title = 'Centre/ School Group';
  $spaces_presets->description = 'This is an Centre or School. All users may view public content from this group. Users must request to join this group.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_selective' => '1',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Centre/ School Group');
  t('This is an Centre or School. All users may view public content from this group. Users must request to join this group.');

  $export['centre_school'] = $spaces_presets;
  return $export;
}
