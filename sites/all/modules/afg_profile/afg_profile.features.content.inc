<?php

/**
 * Implementation of hook_content_default_fields().
 */
function afg_profile_content_default_fields() {
  $fields = array();

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

  // Exported field: field_address
  $fields['profile-field_address'] = array(
    'field_name' => 'field_address',
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
    'type' => 'addresses_cck',
    'required' => '0',
    'multiple' => '0',
    'module' => 'addresses_cck',
    'active' => '1',
    'is_primary_select' => '0',
    'is_primary_size' => '',
    'is_primary_label' => '',
    'is_primary_desc' => '',
    'aname_select' => '0',
    'aname_size' => '',
    'aname_label' => '',
    'aname_desc' => '',
    'country_select' => '2',
    'country_size' => '',
    'country_label' => '',
    'country_desc' => '',
    'province_select' => '1',
    'province_size' => '',
    'province_label' => 'County',
    'province_desc' => '',
    'city_select' => '0',
    'city_size' => '',
    'city_label' => '',
    'city_desc' => '',
    'street_select' => '0',
    'street_size' => '',
    'street_label' => '',
    'street_desc' => '',
    'additional_select' => '0',
    'additional_size' => '',
    'additional_label' => '',
    'additional_desc' => '',
    'postal_code_select' => '0',
    'postal_code_size' => '',
    'postal_code_label' => '',
    'postal_code_desc' => '',
    '0' => '',
    'widget' => array(
      'default_value' => array(
        '0' => '',
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '-2',
      'description' => '',
      'type' => 'addresses_elements',
      'module' => 'addresses_cck',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About me');
  t('Address');

  return $fields;
}
