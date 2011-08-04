<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function afg_groups_views_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'afg_custom_groups';
  $context->description = 'context for add centre and add application buttons';
  $context->tag = 'afg_custom';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group_centre_school' => 'group_centre_school',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'cdi employee' => 'cdi employee',
      ),
    ),
    'views' => array(
      'values' => array(
        'groups_listing_centre_school' => 'groups_listing_centre_school',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'features',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('afg_custom');
  t('context for add centre and add application buttons');

  $export['afg_custom_groups'] = $context;
  return $export;
}
