<?php
/**
* Access plugin that provides role-based access control.
*/
class og_user_roles_views_plugin_access extends views_plugin_access {
  function access($account) {
    return og_user_roles_views_access(array_filter($this->options['role']), $this->options['group_arg'], $account);
  }

  function get_access_callback() {
    return array('og_user_roles_views_access', array(array_filter($this->options['role']), $this->options['group_arg']));
  }

  function summary_title() {
    $count = count($this->options['role']);
    if ($count < 1) {
      return t('No role(s) selected');
    }
    else if ($count > 1) {
      return t('Multiple roles');
    }
    else {
      $rids = views_ui_get_roles();
      $rid = array_shift($this->options['role']);
      return $rids[$rid];
    }
  }

  function option_defaults(&$options) {
    $options['role'] = array();
    $options['group_arg'] = '1';
  }

  function options_form(&$form, &$form_state) {
    $form['role'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Role'),
      '#default_value' => $this->options['role'],
      '#options' => views_ui_get_roles(),
      '#description' => t('Only the checked roles will be able to access this display. Note that users with "access all views" can see any view, regardless of role.'),
    );
   
    $form['group_arg'] = array(
      '#type' => 'textfield',
      '#title' => t('Group Argument'),
      '#default_value' => $this->options['group_arg'],
      '#description' => t('Define which path argument is the group nid.'),
    );
  }

  function options_validate(&$form, &$form_state) {
    if (!array_filter($form_state['values']['access_options']['role'])) {
      form_error($form['role'], t('You must select at least one role if type is "by role"'));
    }
   
    if (empty($form_state['values']['access_options']['group_arg'])) {
      form_error($form['group_arg'], t('You must specify a valid path argument.'));
    }
  }

  function options_submit(&$form, &$form_state) {
    // I hate checkboxes.
    $form_state['values']['access_options']['role'] = array_filter($form_state['values']['access_options']['role']);
    $form_state['values']['access_options']['group_arg'] = $form_state['values']['access_options']['group_arg'];
  }
}