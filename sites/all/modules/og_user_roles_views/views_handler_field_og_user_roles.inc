<?php
// $Id: views_handler_field_og_user_roles.inc,v 1.0 2010/08/08 17:34:00 destination_node Exp $
/**
 * Field handler to provide a list of roles.
 */
class views_handler_field_og_user_roles extends views_handler_field_prerender_list {
  function construct() {
    parent::construct();
    $this->additional_fields['uid'] = array('table' => 'users', 'field' => 'uid');
    $this->additional_fields['gid'] = array('table' => 'og_users_roles', 'field' => 'gid');
    }

  function query() {
    $this->add_additional_fields();
    $this->field_alias = $this->aliases['uid'];
  }

  function pre_render($values) {
    $uids = array();
    $this->items = array();

    foreach ($values as $result) {
      $uids[] = $result->{$this->aliases['uid']};
      $gids[] = $result->{$this->aliases['gid']};
    }

    if ($uids) {
      $result = db_query("SELECT u.uid, u.rid, r.name FROM {role} r INNER JOIN {og_users_roles} u ON u.rid = r.rid WHERE u.uid IN (" . implode(', ', $uids) . ") AND u.gid IN (" . implode(', ', $gids) . ") ORDER BY r.name");
      while ($role = db_fetch_object($result)) {
        $this->items[$role->uid][$role->rid]['role'] = check_plain($role->name);
        $this->items[$role->uid][$role->rid]['rid'] = $role->rid;
      }
    }
  }

  function render_item($count, $item) {
    return $item['role'];
  }

}
