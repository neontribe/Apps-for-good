<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function afg_facebook_like_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'facebook_like_button';
  $context->description = '';
  $context->tag = 'afg_custom';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'afg_profile_display' => 'afg_profile_display',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fblikebutton-0' => array(
          'module' => 'fblikebutton',
          'delta' => 0,
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('afg_custom');

  $export['facebook_like_button'] = $context;
  return $export;
}
