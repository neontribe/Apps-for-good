<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function afg_profile_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'afg_activity_profile';
  $context->description = '';
  $context->tag = 'Profile';
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
        'views-activity_listing-block_3' => array(
          'module' => 'views',
          'delta' => 'activity_listing-block_3',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile');

  $export['afg_activity_profile'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'afg_profile_groups';
  $context->description = 'display this user\'s groups and badges in a block for other users to see';
  $context->tag = 'Profile';
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
        'views-groups_listing_app_team-block_1' => array(
          'module' => 'views',
          'delta' => 'groups_listing_app_team-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-b49c13d4c7a17955c5c0f117f2eff413' => array(
          'module' => 'views',
          'delta' => 'b49c13d4c7a17955c5c0f117f2eff413',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-badges-block_2' => array(
          'module' => 'views',
          'delta' => 'badges-block_2',
          'region' => 'right',
          'weight' => 2,
        ),
        'fb_social_like-like' => array(
          'module' => 'fb_social_like',
          'delta' => 'like',
          'region' => 'right',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile');
  t('display this user\'s groups and badges in a block for other users to see');

  $export['afg_profile_groups'] = $context;
  return $export;
}
