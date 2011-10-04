<?php

/**
 * Implementation of hook_content_default_fields().
 */
function afg_profile_content_default_fields() {
  $fields = array();

  // Exported field: 
  $fields[FALSE] = array(
    'field_referenced_book_page' => array(
      'field_name' => 'field_referenced_book_page',
      'type_name' => 'blog',
      'display_settings' => array(
        'weight' => 0,
        'parent' => '',
        'label' => array(
          'format' => 'inline',
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'nodereference',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'nodereference',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'index' => TRUE,
        ),
      ),
      'referenceable_types' => array(
        'book' => 'book',
        'event' => 'event',
        'imageset' => 'imageset',
        'admin_message' => 0,
        'blog' => 0,
        'casetracker_basic_case' => 0,
        'feedapi_node' => 0,
        'group' => 0,
        'page' => 0,
        'profile' => 0,
        'casetracker_basic_project' => 0,
        'shoutbox' => 0,
        'feed_ical_item' => 0,
        'feed_ical' => 0,
      ),
      'advanced_view' => '--',
      'advanced_view_args' => '',
      'widget' => array(
        'autocomplete_match' => 'contains',
        'size' => NULL,
        'default_value' => array(
          '0' => array(
            'nid' => NULL,
            '_error_element' => 'default_value_widget][field_referenced_book_page][0][nid][nid',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Referenced Page',
        'weight' => 0,
        'description' => 'Type in the title of another post to add a reference.',
        'type' => 'nodereference_autocomplete',
        'module' => 'nodereference',
      ),
    ),
    'field_icon' => array(
      'field_name' => 'field_icon',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '14',
        'parent' => '',
        'label' => array(
          'format' => 'hidden',
        ),
        'teaser' => array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
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
      'db_storage' => '0',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
          'filename' => 'afg_school-icon.gif',
          'filepath' => 'sites/default/files/imagefield_default_images/afg_school-icon.gif',
          'filemime' => 'image/gif',
          'source' => 'default_image_upload',
          'destination' => 'sites/default/files/imagefield_default_images/afg_school-icon.gif',
          'filesize' => 1440,
          'uid' => '1',
          'status' => 1,
          'timestamp' => 1315483154,
          'fid' => '60',
        ),
        'use_default_image' => 1,
        'label' => 'Icon',
        'weight' => '14',
        'description' => 'Video post type icon',
        'type' => 'imagefield_widget',
        'module' => 'imagefield',
      ),
    ),
    'field_activity_link' => array(
      'field_name' => 'field_activity_link',
      'type_name' => 'page',
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
      'db_storage' => '0',
      'module' => 'computed_field',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'not NULL' => 0,
          'sortable' => 1,
        ),
      ),
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
    ),
    'field_date' => array(
      'field_name' => 'field_date',
      'type_name' => 'feed_ical_item',
      'display_settings' => array(
        'weight' => '-3',
        'parent' => '',
        'label' => array(
          'format' => 'inline',
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'date',
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '0',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
        'value2' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => FALSE,
        ),
      ),
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
      ),
      'timezone_db' => '',
      'tz_handling' => 'none',
      'todate' => 'optional',
      'repeat' => 0,
      'repeat_collapsed' => '',
      'default_format' => 'long',
      'widget' => array(
        'default_value' => 'now',
        'default_value_code' => '',
        'default_value2' => 'same',
        'default_value_code2' => '',
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'increment' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
        'label_position' => 'above',
        'default_value_custom' => '',
        'default_value_custom2' => '',
        'label' => 'Date',
        'weight' => '-3',
        'description' => '',
        'type' => 'date_text',
        'module' => 'date',
      ),
    ),
    'field_about_me' => array(
      'field_name' => 'field_about_me',
      'type_name' => 'profile',
      'display_settings' => array(
        'weight' => '-4',
        'parent' => '',
        'label' => array(
          'format' => 'above',
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
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => '0',
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => '5',
        'size' => 60,
        'default_value' => array(
          '0' => array(
            'value' => '',
            '_error_element' => 'default_value_widget][field_about_me][0][value',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'About me',
        'weight' => '-4',
        'description' => 'Please fill in a few details about your self.',
        'type' => 'text_textarea',
        'module' => 'text',
      ),
    ),
    'field_profile_organization' => array(
      'field_name' => 'field_profile_organization',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
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
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => 0,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'Organization',
        'weight' => 0,
        'description' => '',
        'type' => 'text_textfield',
        'module' => 'text',
      ),
    ),
    'field_profile_telephone' => array(
      'field_name' => 'field_profile_telephone',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
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
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => 0,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'Telephone',
        'weight' => 0,
        'description' => '',
        'type' => 'text_textfield',
        'module' => 'text',
      ),
    ),
    'field_twitter_account' => array(
      'field_name' => 'field_twitter_account',
      'type_name' => 'group_centre_school',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '0',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Twitter',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Twitter Account',
        'weight' => '34',
        'description' => 'Enter your Twitter account address',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_facebook_account' => array(
      'field_name' => 'field_facebook_account',
      'type_name' => 'group_centre_school',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '0',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Facebook',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Facebook Account',
        'weight' => '33',
        'description' => 'Enter your Facebook account address',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_linkedin_account' => array(
      'field_name' => 'field_linkedin_account',
      'type_name' => 'profile',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'LinkedIn',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Linked In Account',
        'weight' => '35',
        'description' => 'Enter your LinkedIn public profile url.',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_supporter_website' => array(
      'field_name' => 'field_supporter_website',
      'type_name' => 'profile',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Website',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Website',
        'weight' => '38',
        'description' => 'Enter your website url.',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_supporter_location' => array(
      'field_name' => 'field_supporter_location',
      'type_name' => 'profile',
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
      'type' => 'location',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'location_cck',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'lid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'location_settings' => array(
        'form' => array(
          'fields' => array(
            'name' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '2',
            ),
            'street' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '4',
            ),
            'additional' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '6',
            ),
            'city' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '8',
            ),
            'province' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '10',
            ),
            'postal_code' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '12',
            ),
            'country' => array(
              'collect' => '1',
              'default' => 'uk',
              'weight' => '14',
            ),
            'locpick' => array(
              'collect' => '4',
              'weight' => '20',
            ),
          ),
        ),
        'display' => array(
          'hide' => array(
            'name' => 'name',
            'street' => 'street',
            'additional' => 'additional',
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'coords' => 'coords',
            'city' => 0,
            'province' => 0,
            'postal_code' => 0,
            'country' => 0,
            'province_name' => 0,
            'country_name' => 0,
          ),
        ),
      ),
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'city' => '',
            'province' => '',
            'postal_code' => '',
            'country' => 'uk',
            'locpick' => array(
              'user_latitude' => '',
              'user_longitude' => '',
            ),
            'cck_preview_in_progress' => TRUE,
            'location_settings' => array(
              'form' => array(
                'fields' => array(
                  'name' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '2',
                  ),
                  'street' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '4',
                  ),
                  'additional' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '6',
                  ),
                  'city' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '8',
                  ),
                  'province' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '10',
                  ),
                  'postal_code' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '12',
                  ),
                  'country' => array(
                    'default' => 'uk',
                    'collect' => '1',
                    'weight' => '14',
                  ),
                  'locpick' => array(
                    'default' => array(
                      'user_latitude' => '',
                      'user_longitude' => '',
                    ),
                    'collect' => '4',
                    'weight' => '20',
                    'nodiff' => TRUE,
                  ),
                  'cck_preview_in_progress' => array(
                    'default' => TRUE,
                  ),
                  'location_settings' => array(
                    'default' => array(
                      'form' => array(
                        'fields' => array(
                          'name' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '2',
                          ),
                          'street' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '4',
                          ),
                          'additional' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '6',
                          ),
                          'city' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '8',
                          ),
                          'province' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '10',
                          ),
                          'postal_code' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '12',
                          ),
                          'country' => array(
                            'default' => 'uk',
                            'collect' => '1',
                            'weight' => '14',
                          ),
                          'locpick' => array(
                            'default' => array(
                              'user_latitude' => '',
                              'user_longitude' => '',
                            ),
                            'collect' => '4',
                            'weight' => '20',
                            'nodiff' => TRUE,
                          ),
                          'cck_preview_in_progress' => array(
                            'default' => TRUE,
                          ),
                          'location_settings' => array(
                            'default' => array(
                              'form' => array(
                                'fields' => array(
                                  'lid' => array(
                                    'default' => FALSE,
                                  ),
                                  'name' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 2,
                                  ),
                                  'street' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 4,
                                  ),
                                  'additional' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 6,
                                  ),
                                  'city' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 8,
                                  ),
                                  'province' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 10,
                                  ),
                                  'postal_code' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 12,
                                  ),
                                  'country' => array(
                                    'default' => 'uk',
                                    'collect' => 1,
                                    'weight' => 14,
                                  ),
                                  'locpick' => array(
                                    'default' => FALSE,
                                    'collect' => 1,
                                    'weight' => 20,
                                    'nodiff' => TRUE,
                                  ),
                                  'latitude' => array(
                                    'default' => 0,
                                  ),
                                  'longitude' => array(
                                    'default' => 0,
                                  ),
                                  'source' => array(
                                    'default' => 0,
                                  ),
                                  'is_primary' => array(
                                    'default' => 0,
                                  ),
                                  'delete_location' => array(
                                    'default' => FALSE,
                                    'nodiff' => TRUE,
                                  ),
                                ),
                              ),
                            ),
                          ),
                          'lid' => array(
                            'default' => FALSE,
                          ),
                          'latitude' => array(
                            'default' => 0,
                          ),
                          'longitude' => array(
                            'default' => 0,
                          ),
                          'source' => array(
                            'default' => 0,
                          ),
                          'is_primary' => array(
                            'default' => 0,
                          ),
                          'delete_location' => array(
                            'default' => FALSE,
                            'nodiff' => TRUE,
                          ),
                        ),
                      ),
                      'display' => array(
                        'hide' => array(
                          'locpick' => 'locpick',
                          'map_link' => 'map_link',
                          'coords' => 'coords',
                          'name' => 0,
                          'street' => 0,
                          'additional' => 0,
                          'city' => 0,
                          'province' => 0,
                          'postal_code' => 0,
                          'country' => 0,
                          'province_name' => 0,
                          'country_name' => 0,
                        ),
                      ),
                    ),
                  ),
                  'lid' => array(
                    'default' => FALSE,
                  ),
                  'latitude' => array(
                    'default' => 0,
                  ),
                  'longitude' => array(
                    'default' => 0,
                  ),
                  'source' => array(
                    'default' => 0,
                  ),
                  'is_primary' => array(
                    'default' => 0,
                  ),
                  'delete_location' => array(
                    'default' => FALSE,
                    'nodiff' => TRUE,
                  ),
                ),
              ),
              'display' => array(
                'hide' => array(
                  'locpick' => 'locpick',
                  'map_link' => 'map_link',
                  'coords' => 'coords',
                  'name' => 0,
                  'street' => 0,
                  'additional' => 0,
                  'city' => 0,
                  'province' => 0,
                  'postal_code' => 0,
                  'country' => 0,
                  'province_name' => 0,
                  'country_name' => 0,
                ),
              ),
            ),
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Location',
        'weight' => '39',
        'description' => 'Enter your location details.',
        'type' => 'location',
        'module' => 'location_cck',
      ),
    ),
    'field_group_image' => array(
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
      'db_storage' => '0',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
    ),
    'field_video' => array(
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
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'emvideo',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'embed' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'value' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'provider' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => FALSE,
        ),
        'status' => array(
          'description' => 'The availability status of this media.',
          'type' => 'int',
          'unsigned' => 'TRUE',
          'not null' => TRUE,
          'default' => 1,
        ),
        'version' => array(
          'description' => 'The version of the provider\'s data.',
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'default' => 0,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'description' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'duration' => array(
          'description' => 'Store the duration of a video in seconds.',
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'default' => 0,
        ),
      ),
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
        'label' => 'Video',
        'weight' => '-4',
        'description' => '',
        'type' => 'emvideo_textfields',
        'module' => 'emvideo',
      ),
    ),
    'field_carousel_image' => array(
      'field_name' => 'field_carousel_image',
      'type_name' => 'cdi_blog',
      'display_settings' => array(
        'weight' => '31',
        'parent' => '',
        'label' => array(
          'format' => 'above',
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
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
        'default_image' => NULL,
        'use_default_image' => 0,
        'label' => 'Carousel image',
        'weight' => '31',
        'description' => 'This image will be displayed in the carousel at 435px width x 320px Height. Please upload an image of this size. Otherwise, the image will scale to 320px high and not fill the carousel width.',
        'type' => 'imagefield_widget',
        'module' => 'imagefield',
      ),
    ),
    'field_due_date' => array(
      'field_name' => 'field_due_date',
      'type_name' => 'casetracker_basic_case',
      'display_settings' => array(
        'weight' => '-3',
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
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'date',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
      ),
      'timezone_db' => '',
      'tz_handling' => 'none',
      'todate' => '',
      'repeat' => 0,
      'repeat_collapsed' => '',
      'default_format' => 'medium',
      'widget' => array(
        'default_value' => 'strtotime',
        'default_value_code' => '+5 days',
        'default_value2' => 'blank',
        'default_value_code2' => '',
        'input_format' => 'm/d/Y',
        'input_format_custom' => '',
        'increment' => '5',
        'text_parts' => array(),
        'year_range' => '-3:+3',
        'label_position' => 'above',
        'label' => 'Due Date',
        'weight' => '-3',
        'description' => 'The due date for this case.',
        'type' => 'date_popup',
        'module' => 'date',
      ),
    ),
    'field_centre_ref' => array(
      'field_name' => 'field_centre_ref',
      'type_name' => 'group_app_team',
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
      'type' => 'nodereference',
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'nodereference',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'index' => TRUE,
        ),
      ),
      'referenceable_types' => array(
        'group_centre_school' => 'group_centre_school',
        'group_app_team' => 0,
        'blog' => 0,
        'book' => 0,
        'casetracker_basic_case' => 0,
        'event' => 0,
        'group' => 0,
        'profile' => 0,
        'casetracker_basic_project' => 0,
        'shoutbox' => 0,
        'group_cdi' => 0,
        'feed_ical_item' => 0,
        'feed_ical' => 0,
      ),
      'advanced_view' => '--',
      'advanced_view_args' => '',
      'widget' => array(
        'autocomplete_match' => 'contains',
        'size' => 60,
        'default_value' => array(
          '0' => array(
            'nid' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Parent Centre',
        'weight' => '-4',
        'description' => '',
        'type' => 'nodereference_select',
        'module' => 'nodereference',
      ),
    ),
    'field_logo' => array(
      'field_name' => 'field_logo',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '-1',
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
      'db_storage' => '0',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
          'filename' => 'logo.jpg',
          'filepath' => 'sites/default/files/imagefield_default_images/logo.jpg',
          'filemime' => 'image/jpeg',
          'source' => 'default_image_upload',
          'destination' => 'sites/default/files/imagefield_default_images/logo.jpg',
          'filesize' => 848,
          'uid' => '1',
          'status' => 1,
          'timestamp' => 1308653674,
          'fid' => '3',
        ),
        'use_default_image' => 1,
        'label' => 'Centre logo',
        'weight' => '-1',
        'description' => 'These images will be re-sized to a 50px x 50px thumbnail. Please upload at this size if possible.',
        'type' => 'imagefield_widget',
        'module' => 'imagefield',
      ),
    ),
    'field_ios_app_store' => array(
      'field_name' => 'field_ios_app_store',
      'type_name' => 'group_app_team',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Download on IOS app store',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'iOS App Store Download',
        'weight' => '39',
        'description' => '',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_android_market' => array(
      'field_name' => 'field_android_market',
      'type_name' => 'group_app_team',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Download on Android market',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Android Market Download',
        'weight' => '40',
        'description' => '',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_blackberry_appworld' => array(
      'field_name' => 'field_blackberry_appworld',
      'type_name' => 'group_app_team',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Download on Blackberry appworld',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Blackberry Appworld Download',
        'weight' => '41',
        'description' => '',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_centre_loc_details' => array(
      'field_name' => 'field_centre_loc_details',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '-2',
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
      'type' => 'location',
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'location_cck',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'lid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'location_settings' => array(
        'form' => array(
          'fields' => array(
            'name' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '2',
            ),
            'street' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '4',
            ),
            'additional' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '6',
            ),
            'city' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '8',
            ),
            'province' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '10',
            ),
            'postal_code' => array(
              'collect' => '2',
              'default' => '',
              'weight' => '12',
            ),
            'country' => array(
              'collect' => '4',
              'default' => 'uk',
              'weight' => '14',
            ),
            'locpick' => array(
              'collect' => '2',
              'weight' => '20',
            ),
          ),
        ),
        'display' => array(
          'hide' => array(
            'name' => 'name',
            'street' => 'street',
            'additional' => 'additional',
            'province_name' => 'province_name',
            'country_name' => 'country_name',
            'city' => 0,
            'province' => 0,
            'postal_code' => 0,
            'country' => 0,
            'locpick' => 0,
            'map_link' => 0,
            'coords' => 0,
          ),
        ),
      ),
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'city' => '',
            'province' => '',
            'postal_code' => '',
            'locpick' => array(
              'user_latitude' => '',
              'user_longitude' => '',
            ),
            'cck_preview_in_progress' => TRUE,
            'location_settings' => array(
              'form' => array(
                'fields' => array(
                  'name' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '2',
                  ),
                  'street' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '4',
                  ),
                  'additional' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '6',
                  ),
                  'city' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '8',
                  ),
                  'province' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '10',
                  ),
                  'postal_code' => array(
                    'default' => '',
                    'collect' => 1,
                    'weight' => '12',
                  ),
                  'country' => array(
                    'default' => 'uk',
                    'collect' => '4',
                    'weight' => '14',
                  ),
                  'locpick' => array(
                    'default' => array(
                      'user_latitude' => '',
                      'user_longitude' => '',
                    ),
                    'collect' => '4',
                    'weight' => '20',
                    'nodiff' => TRUE,
                  ),
                  'cck_preview_in_progress' => array(
                    'default' => TRUE,
                  ),
                  'location_settings' => array(
                    'default' => array(
                      'form' => array(
                        'fields' => array(
                          'name' => array(
                            'default' => '',
                            'collect' => '0',
                            'weight' => '2',
                          ),
                          'street' => array(
                            'default' => '',
                            'collect' => '0',
                            'weight' => '4',
                          ),
                          'additional' => array(
                            'default' => '',
                            'collect' => '0',
                            'weight' => '6',
                          ),
                          'city' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '8',
                          ),
                          'province' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '10',
                          ),
                          'postal_code' => array(
                            'default' => '',
                            'collect' => 1,
                            'weight' => '12',
                          ),
                          'country' => array(
                            'default' => 'uk',
                            'collect' => '4',
                            'weight' => '14',
                          ),
                          'locpick' => array(
                            'default' => array(
                              'user_latitude' => '',
                              'user_longitude' => '',
                            ),
                            'collect' => '1',
                            'weight' => '20',
                            'nodiff' => TRUE,
                          ),
                          'cck_preview_in_progress' => array(
                            'default' => TRUE,
                          ),
                          'location_settings' => array(
                            'default' => array(
                              'form' => array(
                                'fields' => array(
                                  'lid' => array(
                                    'default' => FALSE,
                                  ),
                                  'name' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 2,
                                  ),
                                  'street' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 4,
                                  ),
                                  'additional' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 6,
                                  ),
                                  'city' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 8,
                                  ),
                                  'province' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 10,
                                  ),
                                  'postal_code' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 12,
                                  ),
                                  'country' => array(
                                    'default' => 'uk',
                                    'collect' => 1,
                                    'weight' => 14,
                                  ),
                                  'locpick' => array(
                                    'default' => FALSE,
                                    'collect' => 1,
                                    'weight' => 20,
                                    'nodiff' => TRUE,
                                  ),
                                  'latitude' => array(
                                    'default' => 0,
                                  ),
                                  'longitude' => array(
                                    'default' => 0,
                                  ),
                                  'source' => array(
                                    'default' => 0,
                                  ),
                                  'is_primary' => array(
                                    'default' => 0,
                                  ),
                                  'delete_location' => array(
                                    'default' => FALSE,
                                    'nodiff' => TRUE,
                                  ),
                                ),
                              ),
                            ),
                          ),
                          'lid' => array(
                            'default' => FALSE,
                          ),
                          'latitude' => array(
                            'default' => 0,
                          ),
                          'longitude' => array(
                            'default' => 0,
                          ),
                          'source' => array(
                            'default' => 0,
                          ),
                          'is_primary' => array(
                            'default' => 0,
                          ),
                          'delete_location' => array(
                            'default' => FALSE,
                            'nodiff' => TRUE,
                          ),
                        ),
                      ),
                      'display' => array(
                        'hide' => array(
                          'name' => 'name',
                          'street' => 'street',
                          'additional' => 'additional',
                          'locpick' => 'locpick',
                          'province_name' => 'province_name',
                          'country_name' => 'country_name',
                          'city' => 0,
                          'province' => 0,
                          'postal_code' => 0,
                          'country' => 0,
                          'map_link' => 0,
                          'coords' => 0,
                        ),
                      ),
                    ),
                  ),
                  'lid' => array(
                    'default' => FALSE,
                  ),
                  'latitude' => array(
                    'default' => 0,
                  ),
                  'longitude' => array(
                    'default' => 0,
                  ),
                  'source' => array(
                    'default' => 0,
                  ),
                  'is_primary' => array(
                    'default' => 0,
                  ),
                  'delete_location' => array(
                    'default' => FALSE,
                    'nodiff' => TRUE,
                  ),
                ),
              ),
              'display' => array(
                'hide' => array(
                  'name' => 'name',
                  'street' => 'street',
                  'additional' => 'additional',
                  'locpick' => 'locpick',
                  'province_name' => 'province_name',
                  'country_name' => 'country_name',
                  'city' => 0,
                  'province' => 0,
                  'postal_code' => 0,
                  'country' => 0,
                  'map_link' => 0,
                  'coords' => 0,
                ),
              ),
            ),
            'country' => 'uk',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Centre Located at',
        'weight' => '-2',
        'description' => '',
        'type' => 'location',
        'module' => 'location_cck',
      ),
    ),
    'field_staff' => array(
      'field_name' => 'field_staff',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => 0,
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
      'type' => 'nodereference',
      'required' => '0',
      'multiple' => '1',
      'db_storage' => '0',
      'module' => 'nodereference',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'index' => TRUE,
        ),
      ),
      'referenceable_types' => array(
        'profile' => 'profile',
        'group_app_team' => 0,
        'book' => 0,
        'casetracker_basic_case' => 0,
        'group_centre_school' => 0,
        'event' => 0,
        'group' => 0,
        'group_media_image' => 0,
        'casetracker_basic_project' => 0,
        'request_for_help' => 0,
        'shoutbox' => 0,
        'blog' => 0,
        'group_media_video' => 0,
        'feed_ical_item' => 0,
        'feed_ical' => 0,
      ),
      'advanced_view' => '--',
      'advanced_view_args' => '',
      'widget' => array(
        'autocomplete_match' => 'contains',
        'size' => 60,
        'default_value' => array(
          '0' => array(
            'nid' => NULL,
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Staff',
        'weight' => 0,
        'description' => '',
        'type' => 'nodereference_buttons',
        'module' => 'nodereference',
      ),
    ),
    'field_website' => array(
      'field_name' => 'field_website',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '1',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => '',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Visit Our Website',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Centre website',
        'weight' => '1',
        'description' => 'The url for Centre\'s website',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_app_count' => array(
      'field_name' => 'field_app_count',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '31',
        'parent' => '',
        'label' => array(
          'format' => 'above',
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
      'type' => 'nodereference_count',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'nodereference_count',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'referenceable_fields' => array(
        'field_centre_ref' => 'field_centre_ref',
      ),
      'widget' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'label' => 'App count',
        'weight' => '31',
        'description' => '',
        'type' => 'nodereference_count_widget',
        'module' => 'nodereference_count',
      ),
    ),
  );

  // Exported field: 
  $fields[FALSE] = array(
    'field_referenced_book_page' => array(
      'field_name' => 'field_referenced_book_page',
      'type_name' => 'blog',
      'display_settings' => array(
        'weight' => 0,
        'parent' => '',
        'label' => array(
          'format' => 'inline',
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'nodereference',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'nodereference',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'index' => TRUE,
        ),
      ),
      'referenceable_types' => array(
        'book' => 'book',
        'event' => 'event',
        'imageset' => 'imageset',
        'admin_message' => 0,
        'blog' => 0,
        'casetracker_basic_case' => 0,
        'feedapi_node' => 0,
        'group' => 0,
        'page' => 0,
        'profile' => 0,
        'casetracker_basic_project' => 0,
        'shoutbox' => 0,
        'feed_ical_item' => 0,
        'feed_ical' => 0,
      ),
      'advanced_view' => '--',
      'advanced_view_args' => '',
      'widget' => array(
        'autocomplete_match' => 'contains',
        'size' => NULL,
        'default_value' => array(
          '0' => array(
            'nid' => NULL,
            '_error_element' => 'default_value_widget][field_referenced_book_page][0][nid][nid',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Referenced Page',
        'weight' => 0,
        'description' => 'Type in the title of another post to add a reference.',
        'type' => 'nodereference_autocomplete',
        'module' => 'nodereference',
      ),
    ),
    'field_icon' => array(
      'field_name' => 'field_icon',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '14',
        'parent' => '',
        'label' => array(
          'format' => 'hidden',
        ),
        'teaser' => array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
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
      'db_storage' => '0',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
          'filename' => 'afg_school-icon.gif',
          'filepath' => 'sites/default/files/imagefield_default_images/afg_school-icon.gif',
          'filemime' => 'image/gif',
          'source' => 'default_image_upload',
          'destination' => 'sites/default/files/imagefield_default_images/afg_school-icon.gif',
          'filesize' => 1440,
          'uid' => '1',
          'status' => 1,
          'timestamp' => 1315483154,
          'fid' => '60',
        ),
        'use_default_image' => 1,
        'label' => 'Icon',
        'weight' => '14',
        'description' => 'Video post type icon',
        'type' => 'imagefield_widget',
        'module' => 'imagefield',
      ),
    ),
    'field_activity_link' => array(
      'field_name' => 'field_activity_link',
      'type_name' => 'page',
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
      'db_storage' => '0',
      'module' => 'computed_field',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'not NULL' => 0,
          'sortable' => 1,
        ),
      ),
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
    ),
    'field_date' => array(
      'field_name' => 'field_date',
      'type_name' => 'feed_ical_item',
      'display_settings' => array(
        'weight' => '-3',
        'parent' => '',
        'label' => array(
          'format' => 'inline',
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'date',
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '0',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
        'value2' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => FALSE,
        ),
      ),
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
      ),
      'timezone_db' => '',
      'tz_handling' => 'none',
      'todate' => 'optional',
      'repeat' => 0,
      'repeat_collapsed' => '',
      'default_format' => 'long',
      'widget' => array(
        'default_value' => 'now',
        'default_value_code' => '',
        'default_value2' => 'same',
        'default_value_code2' => '',
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'increment' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
        'label_position' => 'above',
        'default_value_custom' => '',
        'default_value_custom2' => '',
        'label' => 'Date',
        'weight' => '-3',
        'description' => '',
        'type' => 'date_text',
        'module' => 'date',
      ),
    ),
    'field_about_me' => array(
      'field_name' => 'field_about_me',
      'type_name' => 'profile',
      'display_settings' => array(
        'weight' => '-4',
        'parent' => '',
        'label' => array(
          'format' => 'above',
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
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => '0',
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => '5',
        'size' => 60,
        'default_value' => array(
          '0' => array(
            'value' => '',
            '_error_element' => 'default_value_widget][field_about_me][0][value',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'About me',
        'weight' => '-4',
        'description' => 'Please fill in a few details about your self.',
        'type' => 'text_textarea',
        'module' => 'text',
      ),
    ),
    'field_profile_organization' => array(
      'field_name' => 'field_profile_organization',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
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
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => 0,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'Organization',
        'weight' => 0,
        'description' => '',
        'type' => 'text_textfield',
        'module' => 'text',
      ),
    ),
    'field_profile_telephone' => array(
      'field_name' => 'field_profile_telephone',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
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
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => 0,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'Telephone',
        'weight' => 0,
        'description' => '',
        'type' => 'text_textfield',
        'module' => 'text',
      ),
    ),
    'field_twitter_account' => array(
      'field_name' => 'field_twitter_account',
      'type_name' => 'group_centre_school',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '0',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Twitter',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Twitter Account',
        'weight' => '34',
        'description' => 'Enter your Twitter account address',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_facebook_account' => array(
      'field_name' => 'field_facebook_account',
      'type_name' => 'group_centre_school',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '0',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Facebook',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Facebook Account',
        'weight' => '33',
        'description' => 'Enter your Facebook account address',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_linkedin_account' => array(
      'field_name' => 'field_linkedin_account',
      'type_name' => 'profile',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'LinkedIn',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Linked In Account',
        'weight' => '35',
        'description' => 'Enter your LinkedIn public profile url.',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_supporter_website' => array(
      'field_name' => 'field_supporter_website',
      'type_name' => 'profile',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Website',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Website',
        'weight' => '38',
        'description' => 'Enter your website url.',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_supporter_location' => array(
      'field_name' => 'field_supporter_location',
      'type_name' => 'profile',
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
      'type' => 'location',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'location_cck',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'lid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'location_settings' => array(
        'form' => array(
          'fields' => array(
            'name' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '2',
            ),
            'street' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '4',
            ),
            'additional' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '6',
            ),
            'city' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '8',
            ),
            'province' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '10',
            ),
            'postal_code' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '12',
            ),
            'country' => array(
              'collect' => '1',
              'default' => 'uk',
              'weight' => '14',
            ),
            'locpick' => array(
              'collect' => '4',
              'weight' => '20',
            ),
          ),
        ),
        'display' => array(
          'hide' => array(
            'name' => 'name',
            'street' => 'street',
            'additional' => 'additional',
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'coords' => 'coords',
            'city' => 0,
            'province' => 0,
            'postal_code' => 0,
            'country' => 0,
            'province_name' => 0,
            'country_name' => 0,
          ),
        ),
      ),
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'city' => '',
            'province' => '',
            'postal_code' => '',
            'country' => 'uk',
            'locpick' => array(
              'user_latitude' => '',
              'user_longitude' => '',
            ),
            'cck_preview_in_progress' => TRUE,
            'location_settings' => array(
              'form' => array(
                'fields' => array(
                  'name' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '2',
                  ),
                  'street' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '4',
                  ),
                  'additional' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '6',
                  ),
                  'city' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '8',
                  ),
                  'province' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '10',
                  ),
                  'postal_code' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '12',
                  ),
                  'country' => array(
                    'default' => 'uk',
                    'collect' => '1',
                    'weight' => '14',
                  ),
                  'locpick' => array(
                    'default' => array(
                      'user_latitude' => '',
                      'user_longitude' => '',
                    ),
                    'collect' => '4',
                    'weight' => '20',
                    'nodiff' => TRUE,
                  ),
                  'cck_preview_in_progress' => array(
                    'default' => TRUE,
                  ),
                  'location_settings' => array(
                    'default' => array(
                      'form' => array(
                        'fields' => array(
                          'name' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '2',
                          ),
                          'street' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '4',
                          ),
                          'additional' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '6',
                          ),
                          'city' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '8',
                          ),
                          'province' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '10',
                          ),
                          'postal_code' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '12',
                          ),
                          'country' => array(
                            'default' => 'uk',
                            'collect' => '1',
                            'weight' => '14',
                          ),
                          'locpick' => array(
                            'default' => array(
                              'user_latitude' => '',
                              'user_longitude' => '',
                            ),
                            'collect' => '4',
                            'weight' => '20',
                            'nodiff' => TRUE,
                          ),
                          'cck_preview_in_progress' => array(
                            'default' => TRUE,
                          ),
                          'location_settings' => array(
                            'default' => array(
                              'form' => array(
                                'fields' => array(
                                  'lid' => array(
                                    'default' => FALSE,
                                  ),
                                  'name' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 2,
                                  ),
                                  'street' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 4,
                                  ),
                                  'additional' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 6,
                                  ),
                                  'city' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 8,
                                  ),
                                  'province' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 10,
                                  ),
                                  'postal_code' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 12,
                                  ),
                                  'country' => array(
                                    'default' => 'uk',
                                    'collect' => 1,
                                    'weight' => 14,
                                  ),
                                  'locpick' => array(
                                    'default' => FALSE,
                                    'collect' => 1,
                                    'weight' => 20,
                                    'nodiff' => TRUE,
                                  ),
                                  'latitude' => array(
                                    'default' => 0,
                                  ),
                                  'longitude' => array(
                                    'default' => 0,
                                  ),
                                  'source' => array(
                                    'default' => 0,
                                  ),
                                  'is_primary' => array(
                                    'default' => 0,
                                  ),
                                  'delete_location' => array(
                                    'default' => FALSE,
                                    'nodiff' => TRUE,
                                  ),
                                ),
                              ),
                            ),
                          ),
                          'lid' => array(
                            'default' => FALSE,
                          ),
                          'latitude' => array(
                            'default' => 0,
                          ),
                          'longitude' => array(
                            'default' => 0,
                          ),
                          'source' => array(
                            'default' => 0,
                          ),
                          'is_primary' => array(
                            'default' => 0,
                          ),
                          'delete_location' => array(
                            'default' => FALSE,
                            'nodiff' => TRUE,
                          ),
                        ),
                      ),
                      'display' => array(
                        'hide' => array(
                          'locpick' => 'locpick',
                          'map_link' => 'map_link',
                          'coords' => 'coords',
                          'name' => 0,
                          'street' => 0,
                          'additional' => 0,
                          'city' => 0,
                          'province' => 0,
                          'postal_code' => 0,
                          'country' => 0,
                          'province_name' => 0,
                          'country_name' => 0,
                        ),
                      ),
                    ),
                  ),
                  'lid' => array(
                    'default' => FALSE,
                  ),
                  'latitude' => array(
                    'default' => 0,
                  ),
                  'longitude' => array(
                    'default' => 0,
                  ),
                  'source' => array(
                    'default' => 0,
                  ),
                  'is_primary' => array(
                    'default' => 0,
                  ),
                  'delete_location' => array(
                    'default' => FALSE,
                    'nodiff' => TRUE,
                  ),
                ),
              ),
              'display' => array(
                'hide' => array(
                  'locpick' => 'locpick',
                  'map_link' => 'map_link',
                  'coords' => 'coords',
                  'name' => 0,
                  'street' => 0,
                  'additional' => 0,
                  'city' => 0,
                  'province' => 0,
                  'postal_code' => 0,
                  'country' => 0,
                  'province_name' => 0,
                  'country_name' => 0,
                ),
              ),
            ),
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Location',
        'weight' => '39',
        'description' => 'Enter your location details.',
        'type' => 'location',
        'module' => 'location_cck',
      ),
    ),
    'field_group_image' => array(
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
      'db_storage' => '0',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
    ),
    'field_video' => array(
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
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'emvideo',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'embed' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'value' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'provider' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => FALSE,
        ),
        'status' => array(
          'description' => 'The availability status of this media.',
          'type' => 'int',
          'unsigned' => 'TRUE',
          'not null' => TRUE,
          'default' => 1,
        ),
        'version' => array(
          'description' => 'The version of the provider\'s data.',
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'default' => 0,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'description' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'duration' => array(
          'description' => 'Store the duration of a video in seconds.',
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'default' => 0,
        ),
      ),
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
        'label' => 'Video',
        'weight' => '-4',
        'description' => '',
        'type' => 'emvideo_textfields',
        'module' => 'emvideo',
      ),
    ),
    'field_carousel_image' => array(
      'field_name' => 'field_carousel_image',
      'type_name' => 'cdi_blog',
      'display_settings' => array(
        'weight' => '31',
        'parent' => '',
        'label' => array(
          'format' => 'above',
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
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
        'default_image' => NULL,
        'use_default_image' => 0,
        'label' => 'Carousel image',
        'weight' => '31',
        'description' => 'This image will be displayed in the carousel at 435px width x 320px Height. Please upload an image of this size. Otherwise, the image will scale to 320px high and not fill the carousel width.',
        'type' => 'imagefield_widget',
        'module' => 'imagefield',
      ),
    ),
    'field_due_date' => array(
      'field_name' => 'field_due_date',
      'type_name' => 'casetracker_basic_case',
      'display_settings' => array(
        'weight' => '-3',
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
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'date',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
      ),
      'timezone_db' => '',
      'tz_handling' => 'none',
      'todate' => '',
      'repeat' => 0,
      'repeat_collapsed' => '',
      'default_format' => 'medium',
      'widget' => array(
        'default_value' => 'strtotime',
        'default_value_code' => '+5 days',
        'default_value2' => 'blank',
        'default_value_code2' => '',
        'input_format' => 'm/d/Y',
        'input_format_custom' => '',
        'increment' => '5',
        'text_parts' => array(),
        'year_range' => '-3:+3',
        'label_position' => 'above',
        'label' => 'Due Date',
        'weight' => '-3',
        'description' => 'The due date for this case.',
        'type' => 'date_popup',
        'module' => 'date',
      ),
    ),
    'field_centre_ref' => array(
      'field_name' => 'field_centre_ref',
      'type_name' => 'group_app_team',
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
      'type' => 'nodereference',
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'nodereference',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'index' => TRUE,
        ),
      ),
      'referenceable_types' => array(
        'group_centre_school' => 'group_centre_school',
        'group_app_team' => 0,
        'blog' => 0,
        'book' => 0,
        'casetracker_basic_case' => 0,
        'event' => 0,
        'group' => 0,
        'profile' => 0,
        'casetracker_basic_project' => 0,
        'shoutbox' => 0,
        'group_cdi' => 0,
        'feed_ical_item' => 0,
        'feed_ical' => 0,
      ),
      'advanced_view' => '--',
      'advanced_view_args' => '',
      'widget' => array(
        'autocomplete_match' => 'contains',
        'size' => 60,
        'default_value' => array(
          '0' => array(
            'nid' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Parent Centre',
        'weight' => '-4',
        'description' => '',
        'type' => 'nodereference_select',
        'module' => 'nodereference',
      ),
    ),
    'field_logo' => array(
      'field_name' => 'field_logo',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '-1',
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
      'db_storage' => '0',
      'module' => 'filefield',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'fid' => array(
          'type' => 'int',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'list' => array(
          'type' => 'int',
          'size' => 'tiny',
          'not null' => FALSE,
          'views' => TRUE,
        ),
        'data' => array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
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
          'filename' => 'logo.jpg',
          'filepath' => 'sites/default/files/imagefield_default_images/logo.jpg',
          'filemime' => 'image/jpeg',
          'source' => 'default_image_upload',
          'destination' => 'sites/default/files/imagefield_default_images/logo.jpg',
          'filesize' => 848,
          'uid' => '1',
          'status' => 1,
          'timestamp' => 1308653674,
          'fid' => '3',
        ),
        'use_default_image' => 1,
        'label' => 'Centre logo',
        'weight' => '-1',
        'description' => 'These images will be re-sized to a 50px x 50px thumbnail. Please upload at this size if possible.',
        'type' => 'imagefield_widget',
        'module' => 'imagefield',
      ),
    ),
    'field_ios_app_store' => array(
      'field_name' => 'field_ios_app_store',
      'type_name' => 'group_app_team',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Download on IOS app store',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'iOS App Store Download',
        'weight' => '39',
        'description' => '',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_android_market' => array(
      'field_name' => 'field_android_market',
      'type_name' => 'group_app_team',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Download on Android market',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Android Market Download',
        'weight' => '40',
        'description' => '',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_blackberry_appworld' => array(
      'field_name' => 'field_blackberry_appworld',
      'type_name' => 'group_app_team',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => 'nofollow',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Download on Blackberry appworld',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Blackberry Appworld Download',
        'weight' => '41',
        'description' => '',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_centre_loc_details' => array(
      'field_name' => 'field_centre_loc_details',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '-2',
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
      'type' => 'location',
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'location_cck',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'lid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'location_settings' => array(
        'form' => array(
          'fields' => array(
            'name' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '2',
            ),
            'street' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '4',
            ),
            'additional' => array(
              'collect' => '0',
              'default' => '',
              'weight' => '6',
            ),
            'city' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '8',
            ),
            'province' => array(
              'collect' => '1',
              'default' => '',
              'weight' => '10',
            ),
            'postal_code' => array(
              'collect' => '2',
              'default' => '',
              'weight' => '12',
            ),
            'country' => array(
              'collect' => '4',
              'default' => 'uk',
              'weight' => '14',
            ),
            'locpick' => array(
              'collect' => '2',
              'weight' => '20',
            ),
          ),
        ),
        'display' => array(
          'hide' => array(
            'name' => 'name',
            'street' => 'street',
            'additional' => 'additional',
            'province_name' => 'province_name',
            'country_name' => 'country_name',
            'city' => 0,
            'province' => 0,
            'postal_code' => 0,
            'country' => 0,
            'locpick' => 0,
            'map_link' => 0,
            'coords' => 0,
          ),
        ),
      ),
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'city' => '',
            'province' => '',
            'postal_code' => '',
            'locpick' => array(
              'user_latitude' => '',
              'user_longitude' => '',
            ),
            'cck_preview_in_progress' => TRUE,
            'location_settings' => array(
              'form' => array(
                'fields' => array(
                  'name' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '2',
                  ),
                  'street' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '4',
                  ),
                  'additional' => array(
                    'default' => '',
                    'collect' => '0',
                    'weight' => '6',
                  ),
                  'city' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '8',
                  ),
                  'province' => array(
                    'default' => '',
                    'collect' => '1',
                    'weight' => '10',
                  ),
                  'postal_code' => array(
                    'default' => '',
                    'collect' => 1,
                    'weight' => '12',
                  ),
                  'country' => array(
                    'default' => 'uk',
                    'collect' => '4',
                    'weight' => '14',
                  ),
                  'locpick' => array(
                    'default' => array(
                      'user_latitude' => '',
                      'user_longitude' => '',
                    ),
                    'collect' => '4',
                    'weight' => '20',
                    'nodiff' => TRUE,
                  ),
                  'cck_preview_in_progress' => array(
                    'default' => TRUE,
                  ),
                  'location_settings' => array(
                    'default' => array(
                      'form' => array(
                        'fields' => array(
                          'name' => array(
                            'default' => '',
                            'collect' => '0',
                            'weight' => '2',
                          ),
                          'street' => array(
                            'default' => '',
                            'collect' => '0',
                            'weight' => '4',
                          ),
                          'additional' => array(
                            'default' => '',
                            'collect' => '0',
                            'weight' => '6',
                          ),
                          'city' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '8',
                          ),
                          'province' => array(
                            'default' => '',
                            'collect' => '1',
                            'weight' => '10',
                          ),
                          'postal_code' => array(
                            'default' => '',
                            'collect' => 1,
                            'weight' => '12',
                          ),
                          'country' => array(
                            'default' => 'uk',
                            'collect' => '4',
                            'weight' => '14',
                          ),
                          'locpick' => array(
                            'default' => array(
                              'user_latitude' => '',
                              'user_longitude' => '',
                            ),
                            'collect' => '1',
                            'weight' => '20',
                            'nodiff' => TRUE,
                          ),
                          'cck_preview_in_progress' => array(
                            'default' => TRUE,
                          ),
                          'location_settings' => array(
                            'default' => array(
                              'form' => array(
                                'fields' => array(
                                  'lid' => array(
                                    'default' => FALSE,
                                  ),
                                  'name' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 2,
                                  ),
                                  'street' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 4,
                                  ),
                                  'additional' => array(
                                    'default' => '',
                                    'collect' => 1,
                                    'weight' => 6,
                                  ),
                                  'city' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 8,
                                  ),
                                  'province' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 10,
                                  ),
                                  'postal_code' => array(
                                    'default' => '',
                                    'collect' => 0,
                                    'weight' => 12,
                                  ),
                                  'country' => array(
                                    'default' => 'uk',
                                    'collect' => 1,
                                    'weight' => 14,
                                  ),
                                  'locpick' => array(
                                    'default' => FALSE,
                                    'collect' => 1,
                                    'weight' => 20,
                                    'nodiff' => TRUE,
                                  ),
                                  'latitude' => array(
                                    'default' => 0,
                                  ),
                                  'longitude' => array(
                                    'default' => 0,
                                  ),
                                  'source' => array(
                                    'default' => 0,
                                  ),
                                  'is_primary' => array(
                                    'default' => 0,
                                  ),
                                  'delete_location' => array(
                                    'default' => FALSE,
                                    'nodiff' => TRUE,
                                  ),
                                ),
                              ),
                            ),
                          ),
                          'lid' => array(
                            'default' => FALSE,
                          ),
                          'latitude' => array(
                            'default' => 0,
                          ),
                          'longitude' => array(
                            'default' => 0,
                          ),
                          'source' => array(
                            'default' => 0,
                          ),
                          'is_primary' => array(
                            'default' => 0,
                          ),
                          'delete_location' => array(
                            'default' => FALSE,
                            'nodiff' => TRUE,
                          ),
                        ),
                      ),
                      'display' => array(
                        'hide' => array(
                          'name' => 'name',
                          'street' => 'street',
                          'additional' => 'additional',
                          'locpick' => 'locpick',
                          'province_name' => 'province_name',
                          'country_name' => 'country_name',
                          'city' => 0,
                          'province' => 0,
                          'postal_code' => 0,
                          'country' => 0,
                          'map_link' => 0,
                          'coords' => 0,
                        ),
                      ),
                    ),
                  ),
                  'lid' => array(
                    'default' => FALSE,
                  ),
                  'latitude' => array(
                    'default' => 0,
                  ),
                  'longitude' => array(
                    'default' => 0,
                  ),
                  'source' => array(
                    'default' => 0,
                  ),
                  'is_primary' => array(
                    'default' => 0,
                  ),
                  'delete_location' => array(
                    'default' => FALSE,
                    'nodiff' => TRUE,
                  ),
                ),
              ),
              'display' => array(
                'hide' => array(
                  'name' => 'name',
                  'street' => 'street',
                  'additional' => 'additional',
                  'locpick' => 'locpick',
                  'province_name' => 'province_name',
                  'country_name' => 'country_name',
                  'city' => 0,
                  'province' => 0,
                  'postal_code' => 0,
                  'country' => 0,
                  'map_link' => 0,
                  'coords' => 0,
                ),
              ),
            ),
            'country' => 'uk',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Centre Located at',
        'weight' => '-2',
        'description' => '',
        'type' => 'location',
        'module' => 'location_cck',
      ),
    ),
    'field_staff' => array(
      'field_name' => 'field_staff',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => 0,
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
      'type' => 'nodereference',
      'required' => '0',
      'multiple' => '1',
      'db_storage' => '0',
      'module' => 'nodereference',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'index' => TRUE,
        ),
      ),
      'referenceable_types' => array(
        'profile' => 'profile',
        'group_app_team' => 0,
        'book' => 0,
        'casetracker_basic_case' => 0,
        'group_centre_school' => 0,
        'event' => 0,
        'group' => 0,
        'group_media_image' => 0,
        'casetracker_basic_project' => 0,
        'request_for_help' => 0,
        'shoutbox' => 0,
        'blog' => 0,
        'group_media_video' => 0,
        'feed_ical_item' => 0,
        'feed_ical' => 0,
      ),
      'advanced_view' => '--',
      'advanced_view_args' => '',
      'widget' => array(
        'autocomplete_match' => 'contains',
        'size' => 60,
        'default_value' => array(
          '0' => array(
            'nid' => NULL,
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Staff',
        'weight' => 0,
        'description' => '',
        'type' => 'nodereference_buttons',
        'module' => 'nodereference',
      ),
    ),
    'field_website' => array(
      'field_name' => 'field_website',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '1',
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
      'type' => 'link',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => '',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'value',
      'title_value' => 'Visit Our Website',
      'enable_tokens' => 0,
      'validate_url' => 1,
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Centre website',
        'weight' => '1',
        'description' => 'The url for Centre\'s website',
        'type' => 'link',
        'module' => 'link',
      ),
    ),
    'field_app_count' => array(
      'field_name' => 'field_app_count',
      'type_name' => 'group_centre_school',
      'display_settings' => array(
        'weight' => '31',
        'parent' => '',
        'label' => array(
          'format' => 'above',
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
      'type' => 'nodereference_count',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'nodereference_count',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'referenceable_fields' => array(
        'field_centre_ref' => 'field_centre_ref',
      ),
      'widget' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'label' => 'App count',
        'weight' => '31',
        'description' => '',
        'type' => 'nodereference_count_widget',
        'module' => 'nodereference_count',
      ),
    ),
  );

  // Exported field: field_about_me
  $fields['profile-field_about_me'] = array(
    'field_name' => 'field_about_me',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
          'value' => '',
          '_error_element' => 'default_value_widget][field_about_me][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'About me',
      'weight' => '-4',
      'description' => 'Please fill in a few details about your self.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About me');

  return $fields;
}
