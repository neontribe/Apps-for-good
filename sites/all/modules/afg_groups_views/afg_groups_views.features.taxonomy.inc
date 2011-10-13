<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function afg_groups_views_taxonomy_default_vocabularies() {
  return array(
    'app_status' => array(
      'name' => 'App Status',
      'description' => 'The stage this app is at',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_app_status',
      'weight' => '0',
      'nodes' => array(
        'group_app_team' => 'group_app_team',
      ),
    ),
    'badges' => array(
      'name' => 'Badges',
      'description' => 'This is the parent vocabulary that contains all badges',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_badges',
      'weight' => '0',
      'nodes' => array(
        'group_centre_school' => 'group_centre_school',
        'group_app_team' => 'group_app_team',
        'profile' => 'profile',
      ),
    ),
  );
}
