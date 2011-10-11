<?php

/**
 * Implementation of hook_strongarm().
 */
function badges_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spaces_default_presets';
  $strongarm->value = array(
    'user' => 'atrium_user_simple',
  );

  $export['spaces_default_presets'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_admin_preset';
  $strongarm->value = 'ORIGINAL';

  $export['taxonomy_image_admin_preset'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_default';
  $strongarm->value = '';

  $export['taxonomy_image_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_disable';
  $strongarm->value = 'Check this box to disable the display of content images.';

  $export['taxonomy_image_disable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_height';
  $strongarm->value = '';

  $export['taxonomy_image_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_imagecache_preset';
  $strongarm->value = 'AttachmentThumbnail';

  $export['taxonomy_image_imagecache_preset'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_link_title';
  $strongarm->value = '1';

  $export['taxonomy_image_link_title'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_path';
  $strongarm->value = 'taxonomy_pictures';

  $export['taxonomy_image_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_recursive';
  $strongarm->value = '0';

  $export['taxonomy_image_recursive'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_resize';
  $strongarm->value = '0';

  $export['taxonomy_image_resize'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_width';
  $strongarm->value = '';

  $export['taxonomy_image_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_wrapper';
  $strongarm->value = 0;

  $export['taxonomy_image_wrapper'] = $strongarm;
  return $export;
}
