<?php

/**
 * Implementation of hook_content_default_fields().
 */
function afg_group_media_content_default_fields() {
  $fields = array();

  // Exported field: field_activity_link
  $fields['group_media_image-field_activity_link'] = array(
    'field_name' => 'field_activity_link',
    'type_name' => 'group_media_image',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = "";',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'text',
    'data_length' => '',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Activity_link',
      'weight' => '32',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_group_image
  $fields['group_media_image-field_group_image'] = array(
    'field_name' => 'field_group_image',
    'type_name' => 'group_media_image',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image-node_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image-node_default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'afg_image-icon.gif',
        'filepath' => 'sites/default/files/imagefield_default_images/afg_image-icon.gif',
        'filemime' => 'image/gif',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/afg_image-icon.gif',
        'filesize' => 1597,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1316594420,
        'fid' => '151',
      ),
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-4',
      'description' => 'Add an image',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_help
  $fields['group_media_image-field_help'] = array(
    'field_name' => 'field_help',
    'type_name' => 'group_media_image',
    'display_settings' => array(
      'weight' => '35',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'cck_blocks' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => 'Some help text here!',
          '_error_element' => 'default_value_widget][field_help][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Help',
      'weight' => '35',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_icon
  $fields['group_media_image-field_icon'] = array(
    'field_name' => 'field_icon',
    'type_name' => 'group_media_image',
    'display_settings' => array(
      'weight' => '34',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'afg_image-icon.gif',
        'filepath' => 'sites/default/files/imagefield_default_images/afg_image-icon_0.gif',
        'filemime' => 'image/gif',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/afg_image-icon_0.gif',
        'filesize' => 1597,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1316596174,
        'fid' => '152',
      ),
      'use_default_image' => 1,
      'label' => 'Icon',
      'weight' => '34',
      'description' => 'Video post type icon',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_activity_link
  $fields['group_media_video-field_activity_link'] = array(
    'field_name' => 'field_activity_link',
    'type_name' => 'group_media_video',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = "";',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'text',
    'data_length' => '',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Activity_link',
      'weight' => '32',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_icon
  $fields['group_media_video-field_icon'] = array(
    'field_name' => 'field_icon',
    'type_name' => 'group_media_video',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'afg_video-icon.gif',
        'filepath' => 'sites/default/files/imagefield_default_images/afg_video-icon.gif',
        'filemime' => 'image/gif',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/afg_video-icon.gif',
        'filesize' => 1429,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1316597075,
        'fid' => '153',
      ),
      'use_default_image' => 1,
      'label' => 'Icon',
      'weight' => '7',
      'description' => 'Video post type icon',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_video
  $fields['group_media_video-field_video'] = array(
    'field_name' => 'field_video',
    'type_name' => 'group_media_video',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '1',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '593',
      'video_height' => '473',
      'video_autoplay' => 0,
      'preview_width' => '435',
      'preview_height' => '358',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'providers' => array(
        'flickr_sets' => 'flickr_sets',
        'slideshare' => 'slideshare',
        'youtube' => 'youtube',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'media_flickr_ir_repeat_video' => 'list',
      'media_flickr_ir_rotatetime_video' => '5',
      'media_flickr_ir_shownavigation_video' => 1,
      'media_flickr_ir_showicons_video' => 1,
      'media_flickr_ir_shuffle_video' => 0,
      'media_flickr_ir_allowfullscreen_video' => 1,
      'media_flickr_ir_logo_video' => '',
      'media_flickr_ir_transition_video' => 'random',
      'media_flickr_player_video' => 'flash',
      'media_flickr_playlist_video' => 'right',
      'media_flickr_playlistsize_video' => '86',
      'media_flickr_repeat_video' => 'list',
      'media_flickr_delay_video' => '10',
      'media_flickr_controlbar_video' => 'none',
      'media_flickr_allowfullscreen_video' => 1,
      'media_flickr_logo_video' => '',
      'media_flickr_ir_repeat_preview' => 'list',
      'media_flickr_ir_rotatetime_preview' => '5',
      'media_flickr_ir_shownavigation_preview' => 1,
      'media_flickr_ir_showicons_preview' => 1,
      'media_flickr_ir_shuffle_preview' => 0,
      'media_flickr_ir_allowfullscreen_preview' => 1,
      'media_flickr_ir_logo_preview' => '',
      'media_flickr_ir_transition_preview' => 'random',
      'media_flickr_player_preview' => 'flash',
      'media_flickr_playlist_preview' => 'right',
      'media_flickr_playlistsize_preview' => '86',
      'media_flickr_repeat_preview' => 'list',
      'media_flickr_delay_preview' => '10',
      'media_flickr_controlbar_preview' => 'none',
      'media_flickr_allowfullscreen_preview' => 1,
      'media_flickr_logo_preview' => '',
      'label' => 'YouTube video address',
      'weight' => '-4',
      'description' => 'Enter the URL address of the YouTube video to show.',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_activity_link
  $fields['request_for_help-field_activity_link'] = array(
    'field_name' => 'field_activity_link',
    'type_name' => 'request_for_help',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = "";',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'text',
    'data_length' => '',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Activity_link',
      'weight' => '34',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_icon
  $fields['request_for_help-field_icon'] = array(
    'field_name' => 'field_icon',
    'type_name' => 'request_for_help',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'afg_help-icon.gif',
        'filepath' => 'sites/default/files/imagefield_default_images/afg_help-icon.gif',
        'filemime' => 'image/gif',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/afg_help-icon.gif',
        'filesize' => 1369,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1316427155,
        'fid' => '149',
      ),
      'use_default_image' => 1,
      'label' => 'Icon',
      'weight' => '32',
      'description' => 'Help post type icon',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity_link');
  t('Help');
  t('Icon');
  t('Image');
  t('YouTube video address');

  return $fields;
}
