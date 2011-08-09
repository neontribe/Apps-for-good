<?php

/**
 * Implementation of hook_strongarm().
 */
function afg_groups_views_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_group_app_team';
  $strongarm->value = 0;

  $export['comment_anonymous_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_group_centre_school';
  $strongarm->value = 0;

  $export['comment_anonymous_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_group_app_team';
  $strongarm->value = '3';

  $export['comment_controls_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_group_centre_school';
  $strongarm->value = '1';

  $export['comment_controls_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_group_app_team';
  $strongarm->value = '1';

  $export['comment_default_mode_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_group_centre_school';
  $strongarm->value = '1';

  $export['comment_default_mode_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_group_app_team';
  $strongarm->value = '1';

  $export['comment_default_order_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_group_centre_school';
  $strongarm->value = '1';

  $export['comment_default_order_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_group_app_team';
  $strongarm->value = '30';

  $export['comment_default_per_page_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_group_centre_school';
  $strongarm->value = '50';

  $export['comment_default_per_page_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_group_app_team';
  $strongarm->value = '1';

  $export['comment_form_location_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_group_centre_school';
  $strongarm->value = '1';

  $export['comment_form_location_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_group_app_team';
  $strongarm->value = '2';

  $export['comment_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_group_centre_school';
  $strongarm->value = '2';

  $export['comment_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_group_app_team';
  $strongarm->value = '0';

  $export['comment_preview_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_group_centre_school';
  $strongarm->value = '0';

  $export['comment_preview_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_group_app_team';
  $strongarm->value = '1';

  $export['comment_subject_field_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_group_centre_school';
  $strongarm->value = '1';

  $export['comment_subject_field_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group_app_team';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '7',
    'author' => '8',
    'options' => '9',
    'comment_settings' => '11',
    'menu' => '0',
    'taxonomy' => '-1',
    'book' => '6',
    'attachments' => '10',
    'og_description' => '-2',
    'og_selective' => '2',
    'og_register' => '3',
    'og_directory' => '4',
    'og_private' => '5',
  );

  $export['content_extra_weights_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group_centre_school';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '9',
    'author' => '10',
    'options' => '11',
    'comment_settings' => '13',
    'menu' => '3',
    'taxonomy' => '0',
    'book' => '8',
    'attachments' => '12',
    'og_description' => '-4',
    'og_selective' => '4',
    'og_register' => '5',
    'og_directory' => '6',
    'og_private' => '7',
  );

  $export['content_extra_weights_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group_app_team';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group_centre_school';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_group_app_team';
  $strongarm->value = 'group';

  $export['og_content_type_usage_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_group_centre_school';
  $strongarm->value = 'group';

  $export['og_content_type_usage_group_centre_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_group_app_team';
  $strongarm->value = '1';

  $export['upload_group_app_team'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_group_centre_school';
  $strongarm->value = '1';

  $export['upload_group_centre_school'] = $strongarm;
  return $export;
}
