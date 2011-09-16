<?php


/**
* Implementation of hook_theme().
*/
function afg_theme(){
  return array(
    'comment_form' => array(
      	'arguments' => array('form' => NULL),
  	),
    'user_register' => array(
      'arguments' => array('form' => NULL),
      'template' => 'user-register'
    )
  );
}


/**
 * Preprocessor for theme('page').
 */
function afg_preprocess_page(&$vars) {

  // Force using the correct template file
  if(count($vars['template_files']) > 1) {
    foreach($vars['template_files'] as $key => $template) {
	  if(strcasecmp($template, 'page') === 0) {
	    unset($vars['template_files'][$key]);
	    break;
	  }
    }
  }
  
  // If frontpage use page front template
  if(drupal_is_front_page()) {
	  $vars['template_files'] = array('page-front');
  }  

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
 /**website variable not in use in page.tpl**/
  //  if ($node->type == 'group_centre_school') {
  //    $website = $node->field_website[0]['url'];
  //  }
  //  $vars['website'] = $website;

  //get region from taxonomy for group node
    if ($node->type == 'group_centre_school') {
      $q = 'select name from {term_node} tn inner join {term_data} td on tn.tid=td.tid where nid = %d and tn.vid = %d and td.vid = %d';
      $nid = $node->nid;
      $vid = $node->vid;
      $res = db_query($q, $nid, $vid, 9);
      $region = db_result($res);
    
    }
	
    $vars['region'] = $region;
	$vars['city'] = $node->field_centre_loc_details[0]['city'];
  }
}

/**
 * Theme links
 */
function afg_links($links, $attributes = array('class' => 'links')) {
	$suffix = '';
	if(isset($links['subscribe'])) {
		$title = $links['subscribe']['title'];
		switch (strtolower($title)){
			case 'leave this group':
				$links['subscribe']['title'] = t('UnFollow');
				$suffix = t('<p>You will not get any of the latest updates</p>');
				break;
			
			default:
				$links['subscribe']['title'] = t('Follow');
				$suffix = t('<p><em>Why to sign-up:</em> You will get the latest updates of this app</p>');
				break;
		}
	}
	
	return theme_links($links, $attributes) . $suffix;
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

  unset($form['notifications']);
 
 
  return drupal_render($form);
}


function afg_preprocess_box(&$vars, $hook) {
  switch($vars['title']) {
   case 'Post new comment':
    $vars['title'] = t('Leave a comment or feedback...');
  }
}

/*count funtions*/
// Moved to module afg_theme_updates to allow theme switching to work

/**Shoutbox comment form**/
// Moved to module afg_theme_updates to allow theme switching to work
