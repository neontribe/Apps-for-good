<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function afg_group_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: create group_media_image content
  $permissions['create group_media_image content'] = array(
    'name' => 'create group_media_image content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: create group_media_video content
  $permissions['create group_media_video content'] = array(
    'name' => 'create group_media_video content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: create request_for_help content
  $permissions['create request_for_help content'] = array(
    'name' => 'create request_for_help content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any group_media_image content
  $permissions['delete any group_media_image content'] = array(
    'name' => 'delete any group_media_image content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any group_media_video content
  $permissions['delete any group_media_video content'] = array(
    'name' => 'delete any group_media_video content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: delete any request_for_help content
  $permissions['delete any request_for_help content'] = array(
    'name' => 'delete any request_for_help content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: edit any group_media_image content
  $permissions['edit any group_media_image content'] = array(
    'name' => 'edit any group_media_image content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: edit any group_media_video content
  $permissions['edit any group_media_video content'] = array(
    'name' => 'edit any group_media_video content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  // Exported permission: edit any request_for_help content
  $permissions['edit any request_for_help content'] = array(
    'name' => 'edit any request_for_help content',
    'roles' => array(
      '0' => 'CDI Employee',
    ),
  );

  return $permissions;
}
