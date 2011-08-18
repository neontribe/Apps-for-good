<?php

/**
* Implementation of hook_theme().
*/
function appsforgood_theme(){
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
function appsforgood_comment_form($form) {
 
  // Rename some of the form element labels.
  $form['comment_filter']['comment']['#title']  = t('Your message');
 
 
  return drupal_render($form);
}


function appsforgood_preprocess_box(&$vars, $hook) {
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

