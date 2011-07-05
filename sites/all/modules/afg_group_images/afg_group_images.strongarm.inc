<?php

/**
 * Implementation of hook_strongarm().
 */
function afg_group_images_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_group_image';
  $strongarm->value = 0;

  $export['comment_anonymous_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_group_image';
  $strongarm->value = '3';

  $export['comment_controls_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_group_image';
  $strongarm->value = '4';

  $export['comment_default_mode_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_group_image';
  $strongarm->value = '1';

  $export['comment_default_order_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_group_image';
  $strongarm->value = '50';

  $export['comment_default_per_page_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_group_image';
  $strongarm->value = '0';

  $export['comment_form_location_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_group_image';
  $strongarm->value = '2';

  $export['comment_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_group_image';
  $strongarm->value = '1';

  $export['comment_preview_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_group_image';
  $strongarm->value = '1';

  $export['comment_subject_field_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group_image';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '5',
    'author' => '6',
    'options' => '7',
    'comment_settings' => '8',
    'menu' => '-2',
    'book' => '4',
    'attachments' => '9',
    'og_description' => '-4',
    'og_selective' => '-1',
    'og_register' => '0',
    'og_directory' => '3',
    'og_private' => '1',
  );

  $export['content_extra_weights_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group_image';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_group_image';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_group_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_group_image';
  $strongarm->value = '1';

  $export['upload_group_image'] = $strongarm;
  return $export;
}
