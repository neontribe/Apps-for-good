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
    ),
  );
}

/**
 * Displays a standard atrium success or failure message.
 */
function _afg_show_message(&$vars, $message, $success = TRUE) {
    if (!$message)
      return false;
    
    $class = ($success) ? 'success' : 'error';
    $m = "<div class='messages $class'>$message</div>";
    
    $vars['messages'] = $m;
}

/**
 * Displays a login/register message in a standard atrium message format.
 */
function _afg_override_login_message(&$vars) {
  $msg = trim(check_plain(strip_tags($vars['messages'])));
    
    if (strcmp($msg, 'You are not authorized to post comments.') == 0) {
      $nid = $vars['node']->nid;
        
    $m = '<a href="/user/login?destination=node/'. $nid .'#comment-form">Login</a>';
      $m .= ' or <a href="/user/register?destination=node/'. $nid .'#comment-form">register</a> to post comments</span>';
    
    _afg_show_message($vars, $m, FALSE);
    }
}

/**
 * Preprocessor for theme('page').
 */
function afg_preprocess_page(&$vars) {
  // if we are displaying a node and the node has dashboard show that instead
  $arg2 = arg(2);
  $arg1 = arg(1);
  if (!$vars['is_front'] && empty($arg2) && $arg1 == 'node') {
    $og = og_get_group_context();
    drupal_goto($og->purl);
  }
    
  // Override default error message and prompt login
  _afg_override_login_message($vars);

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
  
  // Admin form template
  //if (arg(0) != 'admin' && empty($vars['right']) && $vars['template_files'][] = 'page-node') {
    //aray_unshift($vars['template_files'], 'page-admin-form');
  //$vars['template_files'][] = 'page-admin-form';
  
  //dpm('a');
  //}
  //dpm($vars);
  
  // Header menu links
  $links = menu_navigation_links('menu-header-menu', 0);
  
  //$uri = $_SERVER['REQUEST_URI'];
  //$curr_path = substr($uri, strpos($uri, '/') + 1);
  //$trail = menu_get_active_trail();
  //$trail_path = $trail[1]['path'];
  
  $path = 'http://' . $_SERVER['SERVER_NAME'] . $_SERVER['REQUEST_URI'];
  
  foreach ($links as $key => $link){
     // Add active state class
     $classes = (strcmp($path, $link['href']) == 0) ? ' header-menu-active' : '';
     
     // Apply classes
   $links[$key]['attributes']['class'] .= ' header-menu-' . strtolower($links[$key]['title']);
     $links[$key]['attributes']['class'] .= $classes;
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

  // Rewrite the page titles to remove the Home
  if (strpos($vars['head_title'], 'Home') === 0) {
    $og = og_get_group_context();
    $title = $og->title;
    if (!empty($title)) {
      $vars['head_title'] = str_replace('Home', $title, $vars['head_title']);
    }
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

  if (isset($links['menu-593'])) {
    $og = og_get_group_context();
    if (strtolower($og->title) == 'cdi employees') {
      unset($links['menu-593']);
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

/**
 * Hide filter tips
 */
function phptemplate_filter_tips($tips, $long = FALSE, $extra = '') {
  return '';
}

function phptemplate_filter_tips_more_info() {
  return '';
}

function afg_preprocess_box(&$vars, $hook) {
  switch($vars['title']) {
   case 'Post new comment':
    $vars['title'] = t('Leave a comment or feedback...');
  }
}

function computed_field_field_activity_link_compute($node, $field, &$node_field) {
  //get group id not necessary node have unique num already
  //$vals = array_values($node->og_groups);
  //$val = $vals[0];
  switch($node->type) {
    case 'group_app_team':
    case 'group_centre_school':
      //get group path
      $afg_activity_link = $node->purl['value'];
    break;
    case 'group_media_image':
    case 'cdi_blog':
    case 'request_for_help':
    case 'blog':
    case 'group_media_video':
    case 'page':
      $afg_activity_link = ('node/' . $node->nid);
    break;
    default:
      $afg_activity_link = ('node/' . $node->nid);
    break;
  } 
  $node_field[0]['value'] = $afg_activity_link;
}

//NOT in use node cannot detect if the view is displaying it's content
function computed_field_field_activity_update_title_compute($node, $field, &$node_field) {
$title_link = '<div class="views-field-title"><a href= "node/' . $node->nid . '">'. $node->title . '<a/></div>';

//TODO Comment case

//get group number
$vals = array_values($node->og_groups);
$group_num = $vals[0];

  switch($node->type) {
      case 'group_app_team':
      case 'group_centre_school':
      case 'page':
      if ($node->comments_uid) {
    $user = user_load($node->comments_uid);
    $username = $user->name;
    //dpm($user);
    $activity_update = $username . ' commented on ' . $title_link;
      } else {
        $activity_update = $title_link;
        if ($node->changed > $node->created) {
            $activity_update .= ' updated.';
        } else {
      $activity_update .= ' created.';
        }
      }
      break;

      case 'group_media_image':
      case 'cdi_blog':
      case 'request_for_help':
      case 'blog':
      case 'group_media_video':
dpm($node);
      if ($node->comments_uid) {
          $user = user_load($node->comments_uid);
          $username = $user->name;
          $activity_update = $username . ' commented on ' . $title_link;
      } else {
        $sql='SELECT value FROM {purl} where id=' . $group_num;
        $res = db_query($sql);
        $row = db_fetch_array($res);
        $nodepath = $row[value];
        $sql = 'SELECT title FROM {node} where nid=' . $group_num;
	$res = db_query($sql);
	$row = db_fetch_array($res);
	$group_name = $row[title];
        $urlslug = '<a href=' . $nodepath . '>';
        $activity_update = $urlslug . $group_name . '</a>';
        if ($node->changed > $node->created) {
            $activity_update .= ' updated ';
        } else {
            $activity_update .= ' created ';
        }
        $activity_update .= $title_link;
      }
      break;
      default:
        $activity_update = '';
      break;
  }
  dpm($activity_update);
  $node_field[0]['value'] = $activity_update;
}


//recent activity stream home page
function afg_views_view_field__updates__block_1__atrium_activity($view, $handler, $obj) {
	return afg_activity_title_rewrite($view, $handler, $obj);
}


//recent activity stream Profiles youre following tab (homepage)
function afg_views_view_field__updates__block_9__atrium_activity($view, $handler, $obj) {
        return afg_activity_title_rewrite($view, $handler, $obj);
}


//recent activity stream Centre profile page
function afg_views_view_field__updates__block_6__atrium_activity($view, $handler, $obj) {
        return afg_activity_title_rewrite($view, $handler, $obj);
}

//recent activity stream App profile page
function afg_views_view_field__updates__block_4__atrium_activity($view, $handler, $obj) {
        return afg_activity_title_rewrite($view, $handler, $obj);
}


//hook recent activity field and rewrite
function afg_activity_title_rewrite($view, $handler, $obj) {

  $title_link = '<div class="views-field-title"><a href= "node/' . $obj->nid . '">'. $obj->node_title . '<a/></div>';

  switch($obj->node_type) {
      case 'group_app_team':
      case 'group_centre_school':
      case 'page':
      if ($obj->comments_uid) {
    $user = user_load($obj->comments_uid);
    $username = $user->name;
    //dpm($user);
    $activity_update = $username . ' commented on ' . $title_link;
      } else {
        $activity_update = $title_link;
        if ($obj->node_changed > $obj->node_created) {
            $activity_update .= ' updated.';
        } else {
      $activity_update .= ' created.';
        }
      }
      break;
  
      case 'group_media_image':
      case 'cdi_blog':
      case 'request_for_help':
      case 'blog':
      case 'group_media_video':
      if ($obj->comments_uid) {
          $user = user_load($obj->comments_uid);
          $username = $user->name;
          $activity_update = $username . ' commented on ' . $title_link;
      } else {
	if ($obj->node_og_ancestry_nid){
        $sql='SELECT value FROM {purl} where id=' . $obj->node_og_ancestry_nid;
        } else {
	if ($obj->og_ancestry_nid){
	$sql='SELECT value FROM {purl} where id=' . $obj->og_ancestry_nid;
	}}
	$res = db_query($sql);
        $row = db_fetch_array($res);
        $nodepath = $row[value];
        $urlslug = '<a href=' . $nodepath . '>';
        $activity_update = $urlslug . $obj->node_og_ancestry_title . '</a>';
        if ($obj->node_changed > $obj->node_created) {
            $activity_update .= ' updated ';
        } else {
            $activity_update .= ' created ';
        }
        $activity_update .= $title_link;
      }
      break;
      default:
        $activity_update = '';
      break;
  }
  return $activity_update;
} 

function afg_menu_item_link($link) {
  if (
    in_array(
      $link['path'],
      array(
        'user/%/dashboard',
        'user/%/edit/groups'
      )
    )
  ) {
    return '';
  }
  
  return theme_menu_item_link($link);
}

function afg_markup($element) {
  if (strpos($element['#value'], 'og/users')) {
    $og = og_get_group_context();
    $element['#value'] = l('Cancel', $og->purl . '/supporters');
  }
  return theme_markup($element);
}

/*count funtions*/
// Moved to module afg_theme_updates to allow theme switching to work

/**Shoutbox comment form**/
// Moved to module afg_theme_updates to allow theme switching to work

// vim: set filetype=php expandtab tabstop=2 shiftwidth=2 autoindent smartindent:
