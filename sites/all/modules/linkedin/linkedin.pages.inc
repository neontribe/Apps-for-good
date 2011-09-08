<?php

/*
 * @file : Pages callbacks and form builder functions for linkedin module
 */

/*
 * Callback for admin settings at admin/settings/linkedin
 */
function linkedin_admin() {
//LinkedIn API credentials
  global $base_url;
  $form['linkedin'] = array(
      '#title' => t('Base settings'),
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
  );
  if (!@include_once(variable_get('linkedin_liboauth_path', ''))) { // Cope with manual copy of the library
    $form['linkedin']['linkedin_liboauth_path'] = array(
        '#default_value' => variable_get('linkedin_liboauth_path', ''),
        '#title' => t('OAuth library full path (including filename)'),
        '#type' => 'textfield',
        '#description' => t('Linkedin module needs the OAuth php library from http://code.google.com/p/oauth/. You can either download OAuth.php from there and specify the full path here or install the OAuth module from http://drupal.org/project/oauth (both 6.x-2 and 6.x-3 versions are supported)'),
    );
  }

  $form['linkedin']['consumer'] = array(
      '#description' => t('You will get theses values by requesting an API key at https://www.linkedin.com/secure/developer. <br /><em>Notice that the "integration url" you specify at Linkedin must match the base url (@url)</em>', array('@url' => $base_url)),
      '#title' => t('Consumer information'),
      '#type' => 'fieldset',
  );
  $form['linkedin']['consumer']['linkedin_consumer_key'] = array(
      '#default_value' => variable_get('linkedin_consumer_key', ''),
      '#title' => t('API key'),
      '#type' => 'textfield',
  );
  $form['linkedin']['consumer']['linkedin_consumer_secret'] = array(
      '#default_value' => variable_get('linkedin_consumer_secret', ''),
      '#title' => t('API Secret key'),
      '#type' => 'textfield',
  );
  $form['linkedin']['linkedin_debug_mode'] = array(
      '#default_value' => variable_get('linkedin_debug_mode', 0),
      '#title' => t('Turn on debug mode'),
      '#type' => 'checkbox'
      );

  //Fetch forms from submodules.
  $forms = array();
  $forms = module_invoke_all('linkedin_admin_page');
  $form = array_merge($form, $forms);
  return system_settings_form($form);
}

/*
 * Callback for linkedin related user settings at user/%/edit/linkedin
 */
function linkedin_user_settings($account) {
  $output = '';
  $check = linkedin_get_profile_fields($account->uid, array('first-name', 'last-name', 'public-profile-url'), TRUE);
  if ($check['error-code']) {
    $output .= t('You must first authorize LinkedIn integration to use related features.');
    $output .= drupal_get_form('linkedin_user_enable_form', $account->uid);
  }
  else {
    $output .= t('Your account is associated with @name !public_profile.', array('@name' => $check['first-name'] . ' ' . $check['last-name'], '!public_profile' => l($check['public-profile-url'], $check['public-profile-url'])));
    $output .= drupal_get_form('linkedin_user_settings_form', $account);
  }
  return $output;
}

/*
 * Take users to linkedin auth page
 */
function linkedin_user_enable_form($form_state, $uid) {
  $form = array();
  $form['#user'] = $uid;
  $form['#action'] = url('linkedin/token/' . $uid);
  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Go LinkedIn'),
      '#suffix' => '<p class="description">' . t('You will be taken to LinkedIn website in order to complete the process.') . '</p>',
  );
  return $form;
}

/*
 * form for individual user settings
 */
function linkedin_user_settings_form($form_state, $account) {
  // Just fetch forms from submodules.
  $form = module_invoke_all('linkedin_user_settings_page', $form_state, $account);
  // We will need the account at submit
  $form['#account'] = $account;

  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => 'Save',
  );
  $form['linkedin']['reset'] = array(
      '#type' => 'submit',
      '#description' => t('Click here to unlink your LinkedIn account.'),
      '#value' => t('Unlink'),
  );

  return $form;
}

function linkedin_user_settings_form_submit($form, &$form_state) {
  $op = $form_state['values']['op'];

  if ($op == $form['linkedin']['reset']['#value']) {
    foreach ($form_state['values'] as $key => $val) {
      if (substr($key, 0, 8) == 'linkedin') {
        user_save($form['#account'], array($key => NULL), 'linkedin');
      }
    }
    db_query("DELETE FROM {linkedin_token} WHERE uid = %d", $form['#account']->uid);
    drupal_set_message(t('LinkedIn preferences have been reset'));
  }
  else {
    foreach ($form_state['values'] as $key => $val) {
      if (substr($key, 0, 8) == 'linkedin') {
        user_save($form['#account'], array($key => $val), 'linkedin');
      }
    }
    drupal_set_message(t('LinkedIn preferences have been saved'));
  }
}

/**
 * Menu callback.
 * Called when user perform linkedin registration
 */
function linkedin_register_page($form_state = array()) {
  $form  = drupal_retrieve_form('user_register', $form_state);

  $user_reg_mode = variable_get('user_register', 1);
  if ($user_reg_mode == 0) {
    drupal_access_denied();
    return;
  }

  drupal_prepare_form('user_register', $form, $form_state);

  $form['name']['#default_value'] = $data['name'];

  $form['linkedin'] = array(
    '#type' => 'fieldset',
    '#title' => t('Linkedin Connect'),
  );

  $form['#redirect'] = isset($_REQUEST['destination']) ? $_REQUEST['destination'] : '';
  $form['#submit'] = array();
  $form['#submit'][] = 'linkedin_register_form_submit';

  return $form;
}

function linkedin_register_form_submit($form, &$form_state) {
  $user = user_save(NULL, $form_state['values']);

  if (variable_get('user_email_verification', TRUE)) {
    db_query("UPDATE {users} SET status=1 WHERE uid=%d", $user->uid);
  }

  if (!$user) {
    drupal_set_message(t("Error saving user account."), 'error');
    drupal_goto();
  }
  user_external_login($user);

  linkedin_access_token($user);
}
