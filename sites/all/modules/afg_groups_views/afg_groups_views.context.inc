<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function afg_groups_views_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'afg_custom_groups';
  $context->description = 'context for add centre and add application buttons';
  $context->tag = 'afg_custom';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group_centre_school' => 'group_centre_school',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'cdi employee' => 'cdi employee',
      ),
    ),
    'views' => array(
      'values' => array(
        'groups_listing_centre_school' => 'groups_listing_centre_school',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'features',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('afg_custom');
  t('context for add centre and add application buttons');

  $export['afg_custom_groups'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'app_directory_page';
  $context->description = '';
  $context->tag = 'afg_custom';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'apps' => 'apps',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-app_directory' => array(
          'module' => 'quicktabs',
          'delta' => 'app_directory',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('afg_custom');

  $export['app_directory_page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'centre_directory_page';
  $context->description = 'blocks to appear on centre directory page';
  $context->tag = 'afg_custom';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'groups_listing_centre_school:page_2' => 'groups_listing_centre_school:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-centre-directory-links' => array(
          'module' => 'menu',
          'delta' => 'menu-centre-directory-links',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-updates-block_8' => array(
          'module' => 'views',
          'delta' => 'updates-block_8',
          'region' => 'right',
          'weight' => 1,
        ),
        'quicktabs-cdi_features' => array(
          'module' => 'quicktabs',
          'delta' => 'cdi_features',
          'region' => 'content',
          'weight' => 0,
        ),
        'views-1ea07c98bfe3b712442d65a3d4fd9126' => array(
          'module' => 'views',
          'delta' => '1ea07c98bfe3b712442d65a3d4fd9126',
          'region' => 'content',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('afg_custom');
  t('blocks to appear on centre directory page');

  $export['centre_directory_page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join_group';
  $context->description = 'Join this group block';
  $context->tag = 'afg_custom';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'atrium-user_links' => array(
          'module' => 'atrium',
          'delta' => 'user_links',
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Join this group block');
  t('afg_custom');

  $export['join_group'] = $context;
  return $export;
}
