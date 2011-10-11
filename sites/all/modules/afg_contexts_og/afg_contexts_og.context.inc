<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function afg_contexts_og_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'app_profile';
  $context->description = 'An application profile page';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'group_app_team' => 'group_app_team',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'dashboard' => 'dashboard',
        'dashboard/*' => 'dashboard/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-groups_listing_app_team-block_7' => array(
          'module' => 'views',
          'delta' => 'groups_listing_app_team-block_7',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-groups_listing_app_team-block_8' => array(
          'module' => 'views',
          'delta' => 'groups_listing_app_team-block_8',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('An application profile page');
  t('Dashboard');
  $export['app_profile'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'centre_profile';
  $context->description = 'A center profile page';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'group_centre_school' => 'group_centre_school',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'dashboard' => 'dashboard',
        'dashboard/*' => 'dashboard/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c302e58bb2a07adbcaf3913ac1fc611c' => array(
          'module' => 'views',
          'delta' => 'c302e58bb2a07adbcaf3913ac1fc611c',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A center profile page');
  t('Dashboard');
  $export['centre_profile'] = $context;

  return $export;
}
