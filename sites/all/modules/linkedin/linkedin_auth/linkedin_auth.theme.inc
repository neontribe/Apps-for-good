<?php

/*
 * @file Overridable theme functions
 */

/*
 * Renders the "login using LinkedIn" block button
 * Possible displays are :
 * drupal_login_page
 * drupal_login_block
 * linkedin_login_block
 */
function theme_linkedin_auth_display_login_block_button($display = NULL, $path = 'linkedin/login/0', $text = 'Log in using LinkedIn') {
  drupal_add_css(drupal_get_path('module', 'linkedin_auth') . '/linkedin_auth.css', 'module');
  $data = l(t($text), $path);
  $class = 'linkedin-auth-login-link';
  if ($display) {
    $class .= '-' . str_replace('_', '-', $display);
  }
  $items[] = array(
      'data' => $data,
      'class' => $class,
  );
  return theme('item_list', $items);
}
