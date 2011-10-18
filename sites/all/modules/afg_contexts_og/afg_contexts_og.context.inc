<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function afg_contexts_og_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'afg_profile_groups';
  $context->description = 'afg Supporter profile context';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
    'views' => array(
      'values' => array(
        'afg_profile_display' => 'afg_profile_display',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-afg_profile_display-block_1' => array(
          'module' => 'views',
          'delta' => 'afg_profile_display-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-groups_listing_app_team-block_1' => array(
          'module' => 'views',
          'delta' => 'groups_listing_app_team-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-b49c13d4c7a17955c5c0f117f2eff413' => array(
          'module' => 'views',
          'delta' => 'b49c13d4c7a17955c5c0f117f2eff413',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-badges-block_2' => array(
          'module' => 'views',
          'delta' => 'badges-block_2',
          'region' => 'right',
          'weight' => 3,
        ),
        'views-updates-block_3' => array(
          'module' => 'views',
          'delta' => 'updates-block_3',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  t('afg Supporter profile context');
  $export['afg_profile_groups'] = $context;

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
  $context->name = 'cdi_add_user_to_school';
  $context->description = '';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard' => 'dashboard',
        'dashboard/*' => 'dashboard/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'cdi employee' => 'cdi employee',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'atrium_members-addform' => array(
          'module' => 'atrium_members',
          'delta' => 'addform',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  $export['cdi_add_user_to_school'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cdi_profile';
  $context->description = '';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-info-and-resources' => array(
          'module' => 'menu',
          'delta' => 'menu-info-and-resources',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  $export['cdi_profile'] = $context;

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

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_dashboard';
  $context->description = 'Dashboard';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-1ea07c98bfe3b712442d65a3d4fd9126' => array(
          'module' => 'views',
          'delta' => '1ea07c98bfe3b712442d65a3d4fd9126',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-updates-block_8' => array(
          'module' => 'views',
          'delta' => 'updates-block_8',
          'region' => 'right',
          'weight' => 1,
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'content',
          'weight' => 0,
        ),
        'views-activity_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'activity_listing-block_1',
          'region' => 'content',
          'weight' => 1,
        ),
        'views-Counters-block_2' => array(
          'module' => 'views',
          'delta' => 'Counters-block_2',
          'region' => 'content',
          'weight' => 2,
        ),
        'quicktabs-homepage_recent_updates' => array(
          'module' => 'quicktabs',
          'delta' => 'homepage_recent_updates',
          'region' => 'content',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  $export['homepage_dashboard'] = $context;

  return $export;
}
