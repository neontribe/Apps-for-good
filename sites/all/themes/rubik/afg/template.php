<?php


/**
 * Preprocessor for theme('page').
 */
function afg_preprocess_page(&$vars) {
  // Automatically adjust layout for page with right sidebar content if no
  // explicit layout has been set.
  $layout = module_exists('context_layouts') ? context_layouts_get_active_layout() : NULL;
  if (arg(0) != 'admin' && !empty($vars['right']) && !$layout) {
    $vars['template_files'][] = 'layout-sidebar';
    $css = array('screen' => array('theme' => array(drupal_get_path('theme', 'cube') . '/layout-sidebar.css' => TRUE)));
    $vars['styles'] .= drupal_get_css($css);
  }
  
  // Header menu links
  $links = menu_navigation_links('menu-header-menu', 0);
  foreach ($links as $key => $link){
	 $links[$key]['attributes']['class'] .= ' header-menu-' . strtolower($links[$key]['title']);
  }
  
  $vars['header_links'] = $links;
  
  // Logo path
  $vars['logo'] = base_path() . path_to_theme() . '/images/afg/logo.png';
  
  // Set page title to group name
  $og = og_get_group_context();
  if ($og) {
	$nid = $og->nid;
	$node = node_load($nid);
  }
  
  if ($node) {
	$vars['title'] = $node->title;
	$vars['header_desc'] = $node->body;
  }
}

/**
* Implementation of hook_theme().
*/
function afg_theme(){
  return array(
    'comment_form' => array(
      	'arguments' => array('form' => NULL),
  	),
  );
}

/**
* Theme the output of the comment_form.
*
* @param $form
*   The form that  is to be themed.
*/
function afg_comment_form($form) {
 
  // Rename some of the form element labels.
  $form['comment_filter']['comment']['#title']  = t('Your message');
  
  $form['preview'] = NULL;

 
 
  return drupal_render($form);
}


function afg_preprocess_box(&$vars, $hook) {
  switch($vars['title']) {
   case 'Post new comment':
    $vars['title'] = t('Leave a comment or feedback...');
  }
}

/*count funtions*/

function afg_user_count() {
$count_users = db_result(db_query("SELECT COUNT(uid) FROM {users}"));
return $count_users;
}


function afg_content_count($type) {
$count_content = db_result(db_query("SELECT COUNT(*) FROM {node} WHERE type = '%s' AND status = 1", $type));
return $count_content;
}


/**Shoutbox comment form**/

function afg_shoutbox_comment_form() {
  $shoutbox = atrium_shoutbox_get_shoutbox();
  $view = views_get_view('shoutbox_shouts');
  $rendered = $view->execute_display('comment_block');
  return drupal_get_form('atrium_shoutbox_shoutform', $shoutbox['node'], $view, $rendered);
}

