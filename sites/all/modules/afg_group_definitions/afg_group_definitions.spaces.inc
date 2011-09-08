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
      'spaces_og_selective' => '0',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
      'spaces_features' => array(
        'afg_group_media' => '1',
        'afg_groups_views' => '0',
        'atrium_blog' => '1',
        'atrium_book' => '0',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '1',
        'cdi_blog' => '0',
        'spaces_dashboard' => '1',
      ),
      'site_frontpage' => 'dashboard',
      'site_frontpage_path' => 'dashboard',
      'designkit_image' => array(
        'logo' => 0,
      ),
      'designkit_color' => array(
        'background' => '#aa44a1',
      ),
      'spaces_dashboard_custom' => array(
        'custom-1' => 'App Team Dashboard',
        'custom-2' => '',
        'custom-3' => '',
        'custom-4' => '',
        'custom-5' => '',
        0 => '',
      ),
      'spaces_dashboard_blocks' => array(
        'atrium_calendar-mini' => 1,
        'atrium_shoutbox-shoutbox' => 1,
        'block-1' => 1,
        'quicktabs-app_media' => 1,
        'views-activity_listing-block_1' => 1,
        'views-activity_listing-block_2' => 1,
        'views-blog_comments-block_1' => 1,
        'views-blog_listing-block_2' => 1,
        'views-groups_listing_app_team-block_3' => 1,
        'views-groups_listing_app_team-block_4' => 1,
        'views-groups_listing_app_team-block_5' => 1,
        'views-shoutbox_shouts-block_1' => 1,
        'views-shoutbox_users-block_1' => 1,
        'views-updates-block_4' => 1,
        'views-updates-block_5' => 1,
      ),
      'spaces_preset_og' => 'application_team',
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'quicktabs-app_media' => array(
            'module' => 'quicktabs',
            'delta' => 'app_media',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-updates-block_4' => array(
            'module' => 'views',
            'delta' => 'updates-block_4',
            'region' => 'content',
            'weight' => 1,
          ),
          'views-updates-block_5' => array(
            'module' => 'views',
            'delta' => 'updates-block_5',
            'region' => 'right',
            'weight' => 1,
          ),
          'views-groups_listing_app_team-block_5' => array(
            'module' => 'views',
            'delta' => 'groups_listing_app_team-block_5',
            'region' => 'right',
            'weight' => 2,
          ),
          'views-groups_listing_app_team-block_3' => array(
            'module' => 'views',
            'delta' => 'groups_listing_app_team-block_3',
            'region' => 'right',
            'weight' => 3,
          ),
          'block-1' => array(
            'module' => 'block',
            'delta' => '1',
            'region' => 'right',
            'weight' => 4,
          ),
        ),
      ),
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
      'spaces_features' => array(
        'afg_group_media' => '0',
        'afg_groups_views' => '0',
        'atrium_blog' => '1',
        'atrium_book' => '0',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
        'cdi_blog' => '1',
        'spaces_dashboard' => '1',
      ),
      'site_frontpage' => 'dashboard',
      'site_frontpage_path' => 'dashboard',
      'designkit_image' => array(
        'logo' => '7',
      ),
      'designkit_color' => array(
        'background' => '#4fb143',
      ),
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
      'spaces_og_selective' => '0',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
      'spaces_features' => array(
        'afg_group_media' => '1',
        'afg_groups_views' => '0',
        'atrium_blog' => '1',
        'atrium_book' => '0',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '1',
        'cdi_blog' => '0',
        'spaces_dashboard' => '1',
      ),
      'site_frontpage' => 'dashboard',
      'site_frontpage_path' => 'dashboard',
      'designkit_image' => array(
        'logo' => 0,
      ),
      'designkit_color' => array(
        'background' => '#44aa55',
      ),
      'spaces_dashboard_custom' => array(
        'custom-1' => 'Centre-School Homespace',
        'custom-2' => '',
        'custom-3' => '',
        'custom-4' => '',
        'custom-5' => '',
        0 => '',
      ),
      'spaces_dashboard_blocks' => array(
        'atrium_calendar-mini' => 1,
        'atrium_shoutbox-shoutbox' => 1,
        'block-1' => 1,
        'views-1242aa2838f5e0ae93853fa3f054df98' => 1,
        'views-4279d6353ce04c2723ce5268875465d0' => 1,
        'views-436144bdc189eb30bee4a256ccd4eef6' => 1,
        'views-7a3971c58a24107b75cfdb9163cf5dc3' => 1,
        'views-Counters-block_1' => 1,
        'views-a50a359b31c058400bf060adc6d30a4e' => 1,
        'views-activity_listing-block_1' => 1,
        'views-activity_listing-block_2' => 1,
        'views-blog_comments-block_1' => 1,
        'views-blog_listing-block_2' => 1,
        'views-ed790d718541f2aaea81054dab60bd25' => 1,
        'views-groups_listing_app_team-block_3' => 1,
        'views-shoutbox_users-block_1' => 1,
        'views-updates-block_4' => 1,
        'views-updates-block_6' => 1,
        'views-updates-block_7' => 1,
      ),
      'spaces_preset_og' => 'centre_school',
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'views-7a3971c58a24107b75cfdb9163cf5dc3' => array(
            'module' => 'views',
            'delta' => '7a3971c58a24107b75cfdb9163cf5dc3',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-4279d6353ce04c2723ce5268875465d0' => array(
            'module' => 'views',
            'delta' => '4279d6353ce04c2723ce5268875465d0',
            'region' => 'content',
            'weight' => 1,
          ),
          'views-updates-block_6' => array(
            'module' => 'views',
            'delta' => 'updates-block_6',
            'region' => 'content',
            'weight' => 2,
          ),
          'views-updates-block_7' => array(
            'module' => 'views',
            'delta' => 'updates-block_7',
            'region' => 'right',
            'weight' => 1,
          ),
          'views-436144bdc189eb30bee4a256ccd4eef6' => array(
            'module' => 'views',
            'delta' => '436144bdc189eb30bee4a256ccd4eef6',
            'region' => 'right',
            'weight' => 2,
          ),
          'views-1242aa2838f5e0ae93853fa3f054df98' => array(
            'module' => 'views',
            'delta' => '1242aa2838f5e0ae93853fa3f054df98',
            'region' => 'right',
            'weight' => 3,
          ),
          'views-a50a359b31c058400bf060adc6d30a4e' => array(
            'module' => 'views',
            'delta' => 'a50a359b31c058400bf060adc6d30a4e',
            'region' => 'right',
            'weight' => 4,
          ),
          'block-1' => array(
            'module' => 'block',
            'delta' => '1',
            'region' => 'right',
            'weight' => 5,
          ),
        ),
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Centre/ School Group');
  t('This is an Centre or School. All users may view public content from this group. Users must request to join this group.');

  $export['centre_school'] = $spaces_presets;
  return $export;
}
