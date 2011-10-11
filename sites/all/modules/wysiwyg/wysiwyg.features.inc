<?php

// $Id$

/**
 * @file wysiwyg.features.inc
 * 
 * Features integration for wysiwyg.
 * 
 * All this hooks are not required to export settings using CTools.
 * But, due wysiwyg use numeric ids related to input formats, we are
 * allowing other modules to take care about this numeric ids and 
 * provide exportables with machine names.
 */

/**
 * Implementation of hook_features_export_options().
 * 
 * Provide better descriptions for wysiwyg profiles.
 */
function wysiwyg_features_export_options() {
  ctools_include('export');
  $wysiwyg_profiles = ctools_export_load_object('wysiwyg', 'all');
  $filter_formats = filter_formats();
  if (is_array($wysiwyg_profiles)) {
    foreach ($wysiwyg_profiles as $id => $wysiwyg_profile) {
      if ($wysiwyg_profile->editor) {
        $labels[$id] = t('@format (@editor)', array('@editor' => $wysiwyg_profile->editor, '@format' => $filter_formats[$id]->name));
      }
    }
  }
  return $labels;
}

/**
 * Implementation of hook_features_export().
 */
function wysiwyg_features_export($data, &$export, $module_name = '') {

  $return = ctools_component_features_export('wysiwyg', $data, $export, $module_name);

  // Allow other modules to add more dependencies.
  // Only the first paramaeter is passed by reference in drupal_alter
  drupal_alter('wysiwyg_features_export', $export, $data, $module_name);

  return $return;
}

/**
 * Implementation of hook_features_export_render().
 */
function wysiwyg_features_export_render($module = "foo", $data) {
  // This is basically equal to ctools_export_object_render()
  $component = 'wysiwyg';

  ctools_include('export');

  $schema = ctools_export_get_schema($component);

  $code = '  $export = array();'."\n";
  foreach ($data as $object) {
    $identifier = $schema['export']['identifier'];
    $objects = ctools_export_load_object($component, 'names', array($object));
    if (!empty($objects[$object])) {
      // Support objects that have a defined export callback, but fall back to.
      // ctools_export_object().
      if (function_exists($schema['export']['export callback'])) {
        $code .= $schema['export']['export callback']($objects[$object], '  ');
      }
      else {
        $code .= ctools_export_object($component, $objects[$object], '  ', $identifier);
      }
      $code .= "\n";
      // Use $xport[$wysiwyg->format] instead of $export[$object] 
      // $wysiwyg->format can be modified implementing hook_wysiwyg_export_profile_alter
      $code .= '  $export[$'. $identifier . '->format] = $'. $identifier .';'."\n";
    }

    $code .= '  return $export;';
  }

  return array($schema['export']['default hook'] => $code);
}

/**
 * Implementation of hook_features_revert().
 */
function wysiwyg_features_revert($module) {
  $component = 'wysiwyg';
  $objects = module_invoke($module, 'wysiwyg_defaults');
  drupal_alter('wysiwyg_features_revert', $objects);
  if (!empty($objects)) {
    $schema = ctools_export_get_schema($component);
    $export = $schema['export'];
    $names = db_placeholders(array_keys($objects), $schema['fields'][$export['key']]['type']);
    db_query("DELETE FROM {{$component}} WHERE {$export['key']} IN ({$names})", array_keys($objects));
  }
  // Ensure cache is cleared
  wysiwyg_profile_load_all(TRUE);
}
