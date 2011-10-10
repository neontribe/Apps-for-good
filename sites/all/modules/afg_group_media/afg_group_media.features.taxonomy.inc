<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function afg_group_media_taxonomy_default_vocabularies() {
  return array(
    'image_tags' => array(
      'name' => 'Image tags',
      'description' => 'Tags to classify group images',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_image_tags',
      'weight' => '0',
      'nodes' => array(
        'group_media_image' => 'group_media_image',
      ),
    ),
    'text_tags' => array(
      'name' => 'Text tags',
      'description' => 'Tags to classify group text (blog) entries.',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_text_tags',
      'weight' => '0',
      'nodes' => array(
        'blog' => 'blog',
      ),
    ),
    'video_tags' => array(
      'name' => 'Video tags',
      'description' => 'tags to classify group videos',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_video_tags',
      'weight' => '0',
      'nodes' => array(
        'group_media_video' => 'group_media_video',
      ),
    ),
  );
}
