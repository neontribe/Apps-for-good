<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function cdi_blog_taxonomy_default_vocabularies() {
  return array(
    'feature_tags' => array(
      'name' => 'Feature tags',
      'description' => 'tags for cdi blog',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_feature_tags',
      'weight' => '0',
      'nodes' => array(
        'cdi_blog' => 'cdi_blog',
      ),
    ),
  );
}
