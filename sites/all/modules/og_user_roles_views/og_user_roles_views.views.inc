<?php
/**
 * Implementation of hook_views_data().
 */
function og_user_roles_views_views_data() {

  $data['og_users_roles']['table']['group']  = t('Organic groups Roles');
  
  $data['og_users_roles']['table']['join']['users'] = array(
    'left_table' => 'og_uid',
    'left_field' => 'uid',
    'field' => 'uid',
    'extra' => '  og_uid.nid = og_users_roles.gid '
    	
    );
  
  $data['og_users_roles']['rid'] = array(
    'title' => t('OG Roles'),
    'field' => array(
      'handler' => 'views_handler_field_og_user_roles',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_roles',
    ),
    'sort' => array(
       'handler' => 'views_handler_sort',
    ),
   
  );
  return $data;
}


/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function og_user_roles_views_views_handlers() {
  return array(
    'handlers' => array(
      'views_handler_field_og_user_roles' => array(
        'parent' => 'views_handler_field_prerender_list',
      ),
     
    ),
  );
}

/**
* Implement hook_views_plugins().
*/
function og_user_roles_views_views_plugins() {
   return array(
    'access' => array(
      'ogur_plugin_access' => array(
        'title' => t('OGUR'),
        'help' => t('Will be available only to the following OG user roles.'),
        'handler' => 'og_user_roles_views_plugin_access',
        'uses options' => TRUE,
       ),
    ),
  );
}