<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function afg_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
  );

  // Exported permission: access printer-friendly version
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
  );

  // Exported permission: access taxonomy images
  $permissions['access taxonomy images'] = array(
    'name' => 'access taxonomy images',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: add list of open ids
  $permissions['add list of open ids'] = array(
    'name' => 'add list of open ids',
    'roles' => array(),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
  );

  // Exported permission: administer addresses
  $permissions['administer addresses'] = array(
    'name' => 'administer addresses',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer case tracker
  $permissions['administer case tracker'] = array(
    'name' => 'administer case tracker',
    'roles' => array(),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
  );

  // Exported permission: administer organic groups
  $permissions['administer organic groups'] = array(
    'name' => 'administer organic groups',
    'roles' => array(),
  );

  // Exported permission: administer quicktabs
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(),
  );

  // Exported permission: administer string overrides
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(),
  );

  // Exported permission: administer taxonomy images
  $permissions['administer taxonomy images'] = array(
    'name' => 'administer taxonomy images',
    'roles' => array(),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
  );

  // Exported permission: assign user roles
  $permissions['assign user roles'] = array(
    'name' => 'assign user roles',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: can disable taxonomy images
  $permissions['can disable taxonomy images'] = array(
    'name' => 'can disable taxonomy images',
    'roles' => array(),
  );

  // Exported permission: clear atrium_calendar_ical_feed feeds
  $permissions['clear atrium_calendar_ical_feed feeds'] = array(
    'name' => 'clear atrium_calendar_ical_feed feeds',
    'roles' => array(),
  );

  // Exported permission: configure member roles
  $permissions['configure member roles'] = array(
    'name' => 'configure member roles',
    'roles' => array(
      '0' => 'CDI Employee',
      '1' => 'Educator',
    ),
  );

  // Exported permission: configure own user space
  $permissions['configure own user space'] = array(
    'name' => 'configure own user space',
    'roles' => array(),
  );

  // Exported permission: create cdi_blog content
  $permissions['create cdi_blog content'] = array(
    'name' => 'create cdi_blog content',
    'roles' => array(),
  );

  // Exported permission: create group_app_team content
  $permissions['create group_app_team content'] = array(
    'name' => 'create group_app_team content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: create group_centre_school content
  $permissions['create group_centre_school content'] = array(
    'name' => 'create group_centre_school content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
  );

  // Exported permission: delete any blog content
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any casetracker_basic_case content
  $permissions['delete any casetracker_basic_case content'] = array(
    'name' => 'delete any casetracker_basic_case content',
    'roles' => array(),
  );

  // Exported permission: delete any casetracker_basic_project content
  $permissions['delete any casetracker_basic_project content'] = array(
    'name' => 'delete any casetracker_basic_project content',
    'roles' => array(),
  );

  // Exported permission: delete any cdi_blog content
  $permissions['delete any cdi_blog content'] = array(
    'name' => 'delete any cdi_blog content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any group content
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(),
  );

  // Exported permission: delete any group_app_team content
  $permissions['delete any group_app_team content'] = array(
    'name' => 'delete any group_app_team content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any group_centre_school content
  $permissions['delete any group_centre_school content'] = array(
    'name' => 'delete any group_centre_school content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(),
  );

  // Exported permission: delete any shoutbox content
  $permissions['delete any shoutbox content'] = array(
    'name' => 'delete any shoutbox content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete own casetracker_basic_case content
  $permissions['delete own casetracker_basic_case content'] = array(
    'name' => 'delete own casetracker_basic_case content',
    'roles' => array(),
  );

  // Exported permission: delete own casetracker_basic_project content
  $permissions['delete own casetracker_basic_project content'] = array(
    'name' => 'delete own casetracker_basic_project content',
    'roles' => array(),
  );

  // Exported permission: delete own cdi_blog content
  $permissions['delete own cdi_blog content'] = array(
    'name' => 'delete own cdi_blog content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: delete own feed_ical content
  $permissions['delete own feed_ical content'] = array(
    'name' => 'delete own feed_ical content',
    'roles' => array(),
  );

  // Exported permission: delete own feed_ical_item content
  $permissions['delete own feed_ical_item content'] = array(
    'name' => 'delete own feed_ical_item content',
    'roles' => array(),
  );

  // Exported permission: delete own group_app_team content
  $permissions['delete own group_app_team content'] = array(
    'name' => 'delete own group_app_team content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: delete own group_centre_school content
  $permissions['delete own group_centre_school content'] = array(
    'name' => 'delete own group_centre_school content',
    'roles' => array(
      '0' => 'CDI Employee',
      '1' => 'Educator',
    ),
  );

  // Exported permission: delete own group_media_image content
  $permissions['delete own group_media_image content'] = array(
    'name' => 'delete own group_media_image content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: delete own group_media_video content
  $permissions['delete own group_media_video content'] = array(
    'name' => 'delete own group_media_video content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
  );

  // Exported permission: delete own request_for_help content
  $permissions['delete own request_for_help content'] = array(
    'name' => 'delete own request_for_help content',
    'roles' => array(),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: edit any blog content
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: edit any casetracker_basic_case content
  $permissions['edit any casetracker_basic_case content'] = array(
    'name' => 'edit any casetracker_basic_case content',
    'roles' => array(),
  );

  // Exported permission: edit any casetracker_basic_project content
  $permissions['edit any casetracker_basic_project content'] = array(
    'name' => 'edit any casetracker_basic_project content',
    'roles' => array(),
  );

  // Exported permission: edit any cdi_blog content
  $permissions['edit any cdi_blog content'] = array(
    'name' => 'edit any cdi_blog content',
    'roles' => array(
      '0' => 'CDI Employee',
      '1' => 'Educator',
    ),
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
  );

  // Exported permission: edit any group content
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(),
  );

  // Exported permission: edit any group_app_team content
  $permissions['edit any group_app_team content'] = array(
    'name' => 'edit any group_app_team content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: edit any group_centre_school content
  $permissions['edit any group_centre_school content'] = array(
    'name' => 'edit any group_centre_school content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'Educator',
    ),
  );

  // Exported permission: edit any shoutbox content
  $permissions['edit any shoutbox content'] = array(
    'name' => 'edit any shoutbox content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: edit own book content
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(),
  );

  // Exported permission: edit own cdi_blog content
  $permissions['edit own cdi_blog content'] = array(
    'name' => 'edit own cdi_blog content',
    'roles' => array(
      '0' => 'CDI Employee',
      '1' => 'Educator',
    ),
  );

  // Exported permission: edit own feed_ical content
  $permissions['edit own feed_ical content'] = array(
    'name' => 'edit own feed_ical content',
    'roles' => array(),
  );

  // Exported permission: edit own feed_ical_item content
  $permissions['edit own feed_ical_item content'] = array(
    'name' => 'edit own feed_ical_item content',
    'roles' => array(),
  );

  // Exported permission: edit own group_app_team content
  $permissions['edit own group_app_team content'] = array(
    'name' => 'edit own group_app_team content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
    ),
  );

  // Exported permission: edit own group_centre_school content
  $permissions['edit own group_centre_school content'] = array(
    'name' => 'edit own group_centre_school content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: edit own group_media_image content
  $permissions['edit own group_media_image content'] = array(
    'name' => 'edit own group_media_image content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: edit own group_media_video content
  $permissions['edit own group_media_video content'] = array(
    'name' => 'edit own group_media_video content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
  );

  // Exported permission: edit own request_for_help content
  $permissions['edit own request_for_help content'] = array(
    'name' => 'edit own request_for_help content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(),
  );

  // Exported permission: import atrium_calendar_ical_feed feeds
  $permissions['import atrium_calendar_ical_feed feeds'] = array(
    'name' => 'import atrium_calendar_ical_feed feeds',
    'roles' => array(),
  );

  // Exported permission: maintain own subscriptions
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
      '3' => 'Supporter',
    ),
  );

  // Exported permission: manage all subscriptions
  $permissions['manage all subscriptions'] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: manage own subscriptions
  $permissions['manage own subscriptions'] = array(
    'name' => 'manage own subscriptions',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
      '3' => 'Supporter',
    ),
  );

  // Exported permission: override group default role
  $permissions['override group default role'] = array(
    'name' => 'override group default role',
    'roles' => array(),
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to content type
  $permissions['subscribe to content type'] = array(
    'name' => 'subscribe to content type',
    'roles' => array(),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(),
  );

  // Exported permission: view imagecache AttachmentThumbnail
  $permissions['view imagecache AttachmentThumbnail'] = array(
    'name' => 'view imagecache AttachmentThumbnail',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache Carousel_Image
  $permissions['view imagecache Carousel_Image'] = array(
    'name' => 'view imagecache Carousel_Image',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache badge-thumb
  $permissions['view imagecache badge-thumb'] = array(
    'name' => 'view imagecache badge-thumb',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache centre-app-logo
  $permissions['view imagecache centre-app-logo'] = array(
    'name' => 'view imagecache centre-app-logo',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache image-node
  $permissions['view imagecache image-node'] = array(
    'name' => 'view imagecache image-node',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache stream-media-item
  $permissions['view imagecache stream-media-item'] = array(
    'name' => 'view imagecache stream-media-item',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  return $permissions;
}
