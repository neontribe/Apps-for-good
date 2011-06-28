<?php
define('_GROUP_APP_TEAM_BODY_TITLE', 'Short Pitch');
define('_GROUP_APP_TEAM_DESCRIPTION', 'Who we are');
define('_GROUP_APP_TEAM_DESCRIPTION_HINT', 'Describe your organisation');

define('_GROUP_CENTRE_SCHOOL_BODY_TITLE', 'About this centre');
define('_GROUP_CENTRE_SCHOOL_DESCRIPTION', 'Location');
define('_GROUP_CENTRE_SCHOOL_DESCRIPTION_HINT', 'Where is this centre');

function afg_groups_views_init() {
  $wt = db_result(
    db_query(
      'SELECT weight from {system} WHERE name = "afg_groups_views"'
    )
  );
  if ($wt < 99999) {
    db_query(
      'UPDATE {system} SET weight = 99999 WHERE name = "afg_groups_views"'
    );
  }
}

function afg_groups_views_form_alter(&$form, &$form_state, $form_id) {
  // Push a validator infront of the default node validater
  // array_unshift($form['#validate'], 'afg_groups_views_pul_validate');
  // dpm($form['#validate']);
  // dpm($form['purl']);

  $forms = array(
    'group_app_team_node_form' => array(
      'body_title' => _GROUP_APP_TEAM_BODY_TITLE, 
      'description' => _GROUP_APP_TEAM_DESCRIPTION,
      'description_hint' => _GROUP_APP_TEAM_DESCRIPTION_HINT,
      'space' => 'application_team',
    ),
    'group_centre_school_node_form' => array(
      'body_title' => _GROUP_CENTRE_SCHOOL_BODY_TITLE,
      'description' => _GROUP_CENTRE_SCHOOL_DESCRIPTION,
      'description_hint' => _GROUP_CENTRE_SCHOOL_DESCRIPTION_HINT,
      'space' => 'centre_school',
    ),
  );

  if (in_array($form_id, array_keys($forms))) {
    // Rewrite the body field title
    $form['body_field']['body']['#title'] = $forms[$form_id]['body_title'];

    // Rewrite descriptoion field
    $form['og_description']['#title']
      = $forms[$form_id]['description'];
    $form['og_description']['#description']
      = $forms[$form_id]['description_hint'];

    if (!isset($form['nid']['#value'])) {
      $path = drupal_get_path('module', 'afg_groups_views') . '/afg_groups_views.js';
      drupal_add_js($path);
    }

    // Preconfigure the group space
    $form['spaces_preset']['spaces_preset_og']['#disabled'] = TRUE;
    $form['spaces_preset']['spaces_preset_og']['#default_value']
      = $forms[$form_id]['space'];
  }
}


/*
// This function is not needed as we rely on core atrium validation of form
function afg_groups_views_pul_validate($form, &$form_state) {
  dpm($form);
  dpm($form_state);
  $form['values']['purl']['value'] = 'RYRYRY';
}
*/