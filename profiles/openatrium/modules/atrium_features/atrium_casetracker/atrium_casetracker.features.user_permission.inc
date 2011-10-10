<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_casetracker_user_default_permissions() {
  $permissions = array();

  // Exported permission: assign cases
  $permissions['assign cases'] = array(
    'name' => 'assign cases',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: create casetracker_basic_case content
  $permissions['create casetracker_basic_case content'] = array(
    'name' => 'create casetracker_basic_case content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: create casetracker_basic_project content
  $permissions['create casetracker_basic_project content'] = array(
    'name' => 'create casetracker_basic_project content',
    'roles' => array(
      '0' => 'App team',
      '1' => 'CDI Employee',
      '2' => 'Educator',
    ),
  );

  // Exported permission: edit own casetracker_basic_case content
  $permissions['edit own casetracker_basic_case content'] = array(
    'name' => 'edit own casetracker_basic_case content',
    'roles' => array(
      '0' => 'CDI Employee',
      '1' => 'Educator',
    ),
  );

  // Exported permission: edit own casetracker_basic_project content
  $permissions['edit own casetracker_basic_project content'] = array(
    'name' => 'edit own casetracker_basic_project content',
    'roles' => array(),
  );

  return $permissions;
}
