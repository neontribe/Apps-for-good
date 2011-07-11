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
      'spaces_features' => array(
        'afg_group_images' => '1',
        'atrium_blog' => '1',
        'atrium_book' => '0',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
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
        'views-activity_listing-block_1' => 1,
        'views-activity_listing-block_2' => 1,
        'views-blog_comments-block_1' => 1,
        'views-blog_listing-block_2' => 1,
        'views-calendar_upcoming-block_1' => 1,
        'views-casetracker_cases-block_2' => 1,
        'views-casetracker_cases-block_3' => 1,
        'views-casetracker_projects-block_1' => 1,
        'views-groups_listing_app_team-block_3' => 1,
      ),
      'spaces_preset_og' => 'application_team',
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'views-activity_listing-block_1' => array(
            'module' => 'views',
            'delta' => 'activity_listing-block_1',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-groups_listing_app_team-block_3' => array(
            'module' => 'views',
            'delta' => 'groups_listing_app_team-block_3',
            'region' => 'right',
            'weight' => 0,
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
      'spaces_features' => array(
        'atrium_blog' => '1',
        'atrium_book' => '0',
        'atrium_calendar' => '0',
        'atrium_casetracker' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
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
        'views-4279d6353ce04c2723ce5268875465d0' => 1,
        'views-7a3971c58a24107b75cfdb9163cf5dc3' => 1,
        'views-activity_listing-block_1' => 1,
        'views-activity_listing-block_2' => 1,
        'views-blog_comments-block_1' => 1,
        'views-blog_listing-block_2' => 1,
        'views-calendar_upcoming-block_1' => 1,
        'views-casetracker_cases-block_2' => 1,
        'views-casetracker_cases-block_3' => 1,
        'views-casetracker_projects-block_1' => 1,
        'views-groups_listing_app_team-block_3' => 1,
      ),
      'spaces_preset_og' => 'centre_school',
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(
          'views-activity_listing-block_1' => array(
            'module' => 'views',
            'delta' => 'activity_listing-block_1',
            'region' => 'content',
            'weight' => 0,
          ),
          'views-blog_listing-block_2' => array(
            'module' => 'views',
            'delta' => 'blog_listing-block_2',
            'region' => 'content',
            'weight' => 1,
          ),
          'views-4279d6353ce04c2723ce5268875465d0' => array(
            'module' => 'views',
            'delta' => '4279d6353ce04c2723ce5268875465d0',
            'region' => 'right',
            'weight' => 0,
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
