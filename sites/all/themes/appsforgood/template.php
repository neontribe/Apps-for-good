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
