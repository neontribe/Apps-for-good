<?php

/**
 * Implementation of hook_strongarm().
 */
function atrium_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_activity_update_type_profile';
  $strongarm->value = FALSE;
  $export['atrium_activity_update_type_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_profile';
  $strongarm->value = 0;
  $export['comment_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_profile';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '5',
    'author' => '6',
    'options' => '7',
    'comment_settings' => '8',
    'menu' => '-1',
    'taxonomy' => '-2',
    'book' => '4',
  );
  $export['content_extra_weights_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_profile';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => 'full',
    'edit_link' => 0,
    'edit_tab' => 'sub',
    'add_link' => 1,
  );
  $export['content_profile_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_profile';
  $strongarm->value = 1;
  $export['content_profile_use_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_profile_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'field_profile_organization' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Organization',
      'hidden' => 1,
    ),
    'field_profile_telephone' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Telephone',
      'hidden' => 1,
    ),
    'field_profile_url' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
    'field_profile_address' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
    'taxonomy' => array(
      'region' => 'main',
      'weight' => '-3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
    'field_about_me' => array(
      'region' => 'main',
      'weight' => '-4',
      'has_required' => FALSE,
      'title' => 'About me',
      'hidden' => 0,
    ),
    'attachments' => array(
      'region' => 'main',
      'weight' => '0.024',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'main',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'field_twitter_account' => array(
      'region' => 'main',
      'weight' => '32',
      'has_required' => FALSE,
      'title' => 'Twitter Account',
      'hidden' => 0,
    ),
    'field_facebook_account' => array(
      'region' => 'main',
      'weight' => '34',
      'has_required' => FALSE,
      'title' => 'Facebook Account',
      'hidden' => 0,
    ),
    'field_linkedin_account' => array(
      'region' => 'main',
      'weight' => '35',
      'has_required' => FALSE,
      'title' => 'Linked In Account',
      'hidden' => 0,
    ),
    'field_supporter_website' => array(
      'region' => 'main',
      'weight' => '38',
      'has_required' => FALSE,
      'title' => 'Website',
      'hidden' => 0,
    ),
    'field_supporter_location' => array(
      'region' => 'main',
      'weight' => '39',
      'has_required' => FALSE,
      'title' => 'Location',
      'hidden' => 1,
    ),
  );
  $export['nodeformscols_field_placements_profile_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_profile';
  $strongarm->value = array();
  $export['notifications_content_type_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_profile';
  $strongarm->value = FALSE;
  $export['show_diff_inline_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_profile';
  $strongarm->value = FALSE;
  $export['show_preview_changes_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_profile';
  $strongarm->value = FALSE;
  $export['upload_profile'] = $strongarm;

  return $export;
}
