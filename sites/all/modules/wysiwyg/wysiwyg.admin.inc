<?php

/**
 * @file
 * Integrate Wysiwyg editors into Drupal.
 */

/**
 * Form builder for Wysiwyg profile form.
 */
function wysiwyg_profile_form($form_state, $profile) {
  // Merge in defaults.
  $profile = (array) $profile;
  $profile += array(
    'format' => 0,
    'editor' => '',
  );
  if (empty($profile['settings'])) {
    $profile['settings'] = array();
  }
  $profile['settings'] += array(
    'default' => TRUE,
    'user_choose' => FALSE,
    'show_toggle' => TRUE,
    'theme' => 'advanced',
    'language' => 'en',
    'access' => 1,
    'access_pages' => "node/*\nuser/*\ncomment/*",
    'buttons' => array(),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => TRUE,
    // Also available, but buggy in TinyMCE 2.x: blockquote,code,dt,dd,samp.
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'verify_html' => TRUE,
    'preformatted' => FALSE,
    'convert_fonts_to_spans' => TRUE,
    'remove_linebreaks' => TRUE,
    'apply_source_formatting' => FALSE,
    'paste_auto_cleanup_on_paste' => FALSE,
    'css_setting' => 'theme',
    'css_path' => NULL,
    'css_classes' => NULL,
  );
  $profile = (object) $profile;

  $formats = filter_formats();
  $editor = wysiwyg_get_editor($profile->editor);
  drupal_set_title(t('%editor profile for %format', array('%editor' => $editor['title'], '%format' => $formats[$profile->format]->name)));

  $form['format'] = array('#type' => 'value', '#value' => $profile->format);
  $form['input_format'] = array('#type' => 'value', '#value' => $formats[$profile->format]->name);
  $form['editor'] = array('#type' => 'value', '#value' => $profile->editor);

  $form['basic'] = array(
    '#type' => 'fieldset',
    '#title' => t('Basic setup'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['basic']['default'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled by default'),
    '#default_value' => $profile->settings['default'],
    '#return_value' => 1,
    '#description' => t('The default editor state for users having access to this profile. Users are able to override this state if the next option is enabled.'),
  );

  $form['basic']['user_choose'] = array(
    '#type' => 'checkbox',
    '#title' => t('Allow users to choose default'),
    '#default_value' => $profile->settings['user_choose'],
    '#return_value' => 1,
    '#description' => t('If allowed, users will be able to choose their own editor default state in their user account settings.'),
  );

  $form['basic']['show_toggle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show <em>enable/disable rich text</em> toggle link'),
    '#default_value' => $profile->settings['show_toggle'],
    '#return_value' => 1,
    '#description' => t('Whether or not to show the <em>enable/disable rich text</em> toggle link below a textarea. If disabled, the user setting or global default is used (see above).'),
  );

  $form['basic']['theme'] = array(
    '#type' => 'hidden',
    '#value' => $profile->settings['theme'],
  );

  $form['basic']['language'] = array(
    '#type' => 'select',
    '#title' => t('Interface language'),
    '#default_value' => $profile->settings['language'],
  );
  // @see _locale_prepare_predefined_list()
  require_once './includes/locale.inc';
  $predefined = _locale_get_predefined_list();
  foreach ($predefined as $key => $value) {
    // Include native name in output, if possible
    if (count($value) > 1) {
      $tname = t($value[0]);
      $predefined[$key] = ($tname == $value[1]) ? $tname : "$tname ($value[1])";
    }
    else {
      $predefined[$key] = t($value[0]);
    }
  }
  asort($predefined);
  $form['basic']['language']['#options'] = $predefined;

  $form['buttons'] = array(
    '#type' => 'fieldset',
    '#title' => t('Buttons and plugins'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#tree' => TRUE,
    '#theme' => 'wysiwyg_admin_button_table',
  );

  $plugins = wysiwyg_get_plugins($profile->editor);
  // Generate the button list.
  foreach ($plugins as $name => $meta) {
    if (isset($meta['buttons']) && is_array($meta['buttons'])) {
      foreach ($meta['buttons'] as $button => $title) {
        $icon = '';
        if (!empty($meta['path'])) {
          // @todo Button icon locations are different in editors, editor versions,
          //   and contrib/custom plugins (like Image Assist, f.e.).
          $img_src = $meta['path'] . "/images/$name.gif";
          // Handle plugins that have more than one button.
          if (!file_exists($img_src)) {
            $img_src = $meta['path'] . "/images/$button.gif";
          }
          $icon = file_exists($img_src) ? '<img src="' . base_path() . $img_src . '" title="' . $button . '" style="border: 1px solid grey; vertical-align: middle;" />' : '';
        }
        $title = (isset($meta['url']) ? l($title, $meta['url'], array('target' => '_blank')) : $title);
        $title = (!empty($icon) ? $icon . ' ' . $title : $title);
        $form['buttons'][$name][$button] = array(
          '#type' => 'checkbox',
          '#title' => $title,
          '#default_value' => !empty($profile->settings['buttons'][$name][$button]) ? $profile->settings['buttons'][$name][$button] : FALSE,
        );
      }
    }
    else if (isset($meta['extensions']) && is_array($meta['extensions'])) {
      foreach ($meta['extensions'] as $extension => $title) {
        $form['buttons'][$name][$extension] = array(
          '#type' => 'checkbox',
          '#title' => isset($meta['url']) ? l($title, $meta['url'], array('target' => '_blank')) : $title,
          '#default_value' => !empty($profile->settings['buttons'][$name][$extension]) ? $profile->settings['buttons'][$name][$extension] : FALSE,
        );
      }
    }
  }

  $form['appearance'] = array(
    '#type' => 'fieldset',
    '#title' => t('Editor appearance'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['appearance']['toolbar_loc'] = array(
    '#type' => 'select',
    '#title' => t('Toolbar location'),
    '#default_value' => $profile->settings['toolbar_loc'],
    '#options' => array('bottom' => t('Bottom'), 'top' => t('Top')),
    '#description' => t('This option controls whether the editor toolbar is displayed above or below the editing area.'),
  );

  $form['appearance']['toolbar_align'] = array(
    '#type' => 'select',
    '#title' => t('Button alignment'),
    '#default_value' => $profile->settings['toolbar_align'],
    '#options' => array('center' => t('Center'), 'left' => t('Left'), 'right' => t('Right')),
    '#description' => t('This option controls the alignment of icons in the editor toolbar.'),
  );

  $form['appearance']['path_loc'] = array(
    '#type' => 'select',
    '#title' => t('Path location'),
    '#default_value' => $profile->settings['path_loc'],
    '#options' => array('none' => t('Hide'), 'top' => t('Top'), 'bottom' => t('Bottom')),
    '#description' => t('Where to display the path to HTML elements (i.e. <code>body > table > tr > td</code>).'),
  );

  $form['appearance']['resizing'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable resizing button'),
    '#default_value' => $profile->settings['resizing'],
    '#return_value' => 1,
    '#description' => t('This option gives you the ability to enable/disable the resizing button. If enabled, the Path location toolbar must be set to "Top" or "Bottom" in order to display the resize icon.'),
  );

  $form['output'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cleanup and output'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['output']['verify_html'] = array(
    '#type' => 'checkbox',
    '#title' => t('Verify HTML'),
    '#default_value' => $profile->settings['verify_html'],
    '#return_value' => 1,
    '#description' => t('If enabled, potentially malicious code like <code>&lt;HEAD&gt;</code> tags will be removed from HTML contents.'),
  );

  $form['output']['preformatted'] = array(
    '#type' => 'checkbox',
    '#title' => t('Preformatted'),
    '#default_value' => $profile->settings['preformatted'],
    '#return_value' => 1,
    '#description' => t('If enabled, the editor will insert TAB characters on tab and preserve other whitespace characters just like a PRE element in HTML does.'),
  );

  $form['output']['convert_fonts_to_spans'] = array(
    '#type' => 'checkbox',
    '#title' => t('Convert &lt;font&gt; tags to styles'),
    '#default_value' => $profile->settings['convert_fonts_to_spans'],
    '#return_value' => 1,
    '#description' => t('If enabled, HTML tags declaring the font size, font family, font color and font background color will be replaced by inline CSS styles.'),
  );

  $form['output']['remove_linebreaks'] = array(
    '#type' => 'checkbox',
    '#title' => t('Remove linebreaks'),
    '#default_value' => $profile->settings['remove_linebreaks'],
    '#return_value' => 1,
    '#description' => t('If enabled, the editor will remove most linebreaks from contents. Disabling this option could avoid conflicts with other input filters.'),
  );

  $form['output']['apply_source_formatting'] = array(
    '#type' => 'checkbox',
    '#title' => t('Apply source formatting'),
    '#default_value' => $profile->settings['apply_source_formatting'],
    '#return_value' => 1,
    '#description' => t('If enabled, the editor will re-format the HTML source code. Disabling this option could avoid conflicts with other input filters.'),
  );

  $form['output']['paste_auto_cleanup_on_paste'] = array(
    '#type' => 'checkbox',
    '#title' => t('Force cleanup on standard paste'),
    '#default_value' => $profile->settings['paste_auto_cleanup_on_paste'],
    '#return_value' => 1,
    '#description' => t('If enabled, the default paste function (CTRL-V or SHIFT-INS) behaves like the "paste from word" plugin function.'),
  );

  $form['css'] = array(
    '#type' => 'fieldset',
    '#title' => t('CSS'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['css']['block_formats'] = array(
    '#type' => 'textfield',
    '#title' => t('Block formats'),
    '#default_value' => $profile->settings['block_formats'],
    '#size' => 40,
    '#maxlength' => 250,
    '#description' => t('Comma separated list of HTML block formats. Possible values: <code>@format-list</code>.', array('@format-list' => 'p,h1,h2,h3,h4,h5,h6,div,blockquote,address,pre,code,dt,dd')),
  );

  $form['css']['css_setting'] = array(
    '#type' => 'select',
    '#title' => t('Editor CSS'),
    '#default_value' => $profile->settings['css_setting'],
    '#options' => array('theme' => t('Use theme CSS'), 'self' => t('Define CSS'), 'none' => t('Editor default CSS')),
    '#description' => t('Defines the CSS to be used in the editor area.<br />Use theme CSS - loads stylesheets from current site theme.<br/>Define CSS - enter path for stylesheet files below.<br />Editor default CSS - uses default stylesheets from editor.'),
  );

  $form['css']['css_path'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS path'),
    '#default_value' => $profile->settings['css_path'],
    '#size' => 40,
    '#maxlength' => 255,
    '#description' => t('If "Define CSS" was selected above, enter path to a CSS file or a list of CSS files separated by a comma.') . '<br />' . t('Available tokens: <code>%b</code> (base path, eg: <code>/</code>), <code>%t</code> (path to theme, eg: <code>themes/garland</code>)') . '<br />' . t('Example:') . ' css/editor.css,/themes/garland/style.css,%b%t/style.css,http://example.com/external.css',
  );

  $form['css']['css_classes'] = array(
    '#type' => 'textarea',
    '#title' => t('CSS classes'),
    '#default_value' => $profile->settings['css_classes'],
    '#description' => t('Optionally define CSS classes for the "Font style" dropdown list.<br />Enter one class on each line in the format: !format. Example: !example<br />If left blank, CSS classes are automatically imported from all loaded stylesheet(s).', array('!format' => '<code>[title]=[class]</code>', '!example' => 'My heading=header1')),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#weight' => 100,
  );
  $form['cancel'] = array(
    '#value' => l(t('Cancel'), 'admin/settings/wysiwyg'),
    '#weight' => 110,
  );

  return $form;
}

/**
 * Submit callback for Wysiwyg profile form.
 *
 * @see wysiwyg_profile_form()
 */
function wysiwyg_profile_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  if (isset($values['buttons'])) {
    // Store only enabled buttons for each plugin.
    foreach ($values['buttons'] as $plugin => $buttons) {
      $values['buttons'][$plugin] = array_filter($values['buttons'][$plugin]);
    }
    // Store only enabled plugins.
    $values['buttons'] = array_filter($values['buttons']);
  }
  // Remove any white-space from 'block_formats' setting, since editor
  // implementations rely on a comma-separated list to explode().
  $values['block_formats'] = preg_replace('@\s+@', '', $values['block_formats']);

  // Remove input format name.
  $format = $values['format'];
  $input_format = $values['input_format'];
  $editor = $values['editor'];
  unset($values['format'], $values['input_format'], $values['editor']);

  // Remove FAPI values.
  // @see system_settings_form_submit()
  unset($values['submit'], $values['form_id'], $values['op'], $values['form_token'], $values['form_build_id']);

  // Insert new profile data.
  // Determine if this is an update.
  if (!db_result(db_query("SELECT 1 FROM {wysiwyg} WHERE format = %d", $format))) {
    $update = array();
  }
  else {
    $update = array('format');
  }
  $wysiwyg = new stdClass();
  $wysiwyg->format = $format;
  $wysiwyg->editor = $editor;
  $wysiwyg->settings = serialize($values);
  drupal_write_record('wysiwyg', $wysiwyg, $update);

  drupal_set_message(t('Wysiwyg profile for %format has been saved.', array('%format' => $input_format)));

  $form_state['redirect'] = 'admin/settings/wysiwyg';
}

/**
 * Layout for the buttons in the Wysiwyg Editor profile form.
 */
function theme_wysiwyg_admin_button_table($form) {
  $buttons = array();

  // Flatten forms array.
  foreach (element_children($form) as $name) {
    foreach (element_children($form[$name]) as $button) {
      $buttons[] = drupal_render($form[$name][$button]);
    }
  }

  // Split checkboxes into rows with 3 columns.
  $total = count($buttons);
  $rows = array();
  for ($i = 0; $i < $total; $i++) {
    $row = array();
    $row[] = array('data' => $buttons[$i]);
    if (isset($buttons[++$i])) {
      $row[] = array('data' => $buttons[$i]);
    }
    if (isset($buttons[++$i])) {
      $row[] = array('data' => $buttons[$i]);
    }
    $rows[] = $row;
  }

  $output = theme('table', array(), $rows, array('width' => '100%'));

  return $output;
}

/**
 * Display overview of setup Wysiwyg Editor profiles; menu callback.
 */
function wysiwyg_profile_overview() {
  include_once './includes/install.inc';

  // Check which wysiwyg editors are installed.
  $editors = wysiwyg_get_all_editors();
  $count = count($editors);
  $status = array();
  $options = array('' => t('No editor'));

  foreach ($editors as $name => $editor) {
    $status[$name] = array(
      'severity' => (isset($editor['error']) ? REQUIREMENT_ERROR : ($editor['installed'] ? REQUIREMENT_OK : REQUIREMENT_INFO)),
      'title' => t('<a href="!vendor-url">@editor</a> (<a href="!download-url">Download</a>)', array('!vendor-url' => $editor['vendor url'], '@editor' => $editor['title'], '!download-url' => $editor['download url'])),
      'value' => (isset($editor['installed version']) ? $editor['installed version'] : t('Not installed.')),
      'description' => (isset($editor['error']) ? $editor['error'] : ''),
    );
    if ($editor['installed']) {
      $options[$name] = $editor['title'] . (isset($editor['installed version']) ? ' ' . $editor['installed version'] : '');
    }
    else {
      // Build on-site installation instructions.
      // @todo Setup $library in wysiwyg_load_editor() already.
      $library = (isset($editor['library']) ? $editor['library'] : key($editor['libraries']));
      $targs = array(
        '@editor-path' => $editor['editor path'],
        '@library-filepath' => $editor['library path'] . '/' . (isset($editor['libraries'][$library]['files'][0]) ? $editor['libraries'][$library]['files'][0] : key($editor['libraries'][$library]['files'])),
      );
      $instructions = '<p>' . t('Extract the archive and copy its contents into a new folder in the following location:<br /><code>@editor-path</code>', $targs) . '</p>';
      $instructions .= '<p>' . t('So the actual library can be found at:<br /><code>@library-filepath</code>', $targs) . '</p>';

      $status[$name]['description'] .= $instructions;
      $count--;
    }
    // In case there is an error, always show installation instructions.
    if (isset($editor['error'])) {
      $show_instructions = TRUE;
    }
  }
  if (!$count) {
    $show_instructions = TRUE;
  }
  $form['status'] = array(
    '#type' => 'fieldset',
    '#title' => t('Installation instructions'),
    '#collapsible' => TRUE,
    '#collapsed' => !isset($show_instructions),
    '#description' => (!$count ? t('There are no editor libraries installed currently. The following list contains a list of currently supported editors:') : ''),
    '#weight' => 10,
  );
  $form['status']['report'] = array('#value' => theme('status_report', $status));

  if (!$count) {
    return $form;
  }

  $formats = filter_formats();
  // Reset wysiwyg cache
  $profiles = wysiwyg_profile_load_all(TRUE);
  $form['formats'] = array(
    '#type' => 'item',
    '#description' => t('To assign a different editor to a text format, click "delete" to remove the existing first.'),
    '#tree' => TRUE,
  );

  $ctools_installed = module_exists('ctools');
  $enable_save = FALSE;
  foreach ($formats as $id => $format) {
    $form['formats'][$id]['name'] = array(
      '#value' => check_plain($format->name),
    );
    // Only display editor selection for associated input formats to avoid
    // confusion about disabled selection.
    if (isset($profiles[$id]) && !empty($profiles[$id]->editor)) {
      $form['formats'][$id]['editor'] = array(
        '#value' => $options[$profiles[$id]->editor],
      );
    }
    else {
      $form['formats'][$id]['editor'] = array(
        '#type' => 'select',
        '#default_value' => '',
        '#options' => $options,
      );
      $enable_save = TRUE;
    }
    if (isset($profiles[$id]) && !empty($profiles[$id]->editor)) {
      if (isset($profiles[$id]->default)) {
        $form['formats'][$id]['edit'] = array(
          '#value' => l(t('Override'), "admin/settings/wysiwyg/profile/$id/edit"),
        );
      }
      else {
        $form['formats'][$id]['edit'] = array(
          '#value' => l(t('Edit'), "admin/settings/wysiwyg/profile/$id/edit"),
        );
      }
      if ($ctools_installed) {
        $form['formats'][$id]['export'] = array(
          '#value' => l(t('Export'), "admin/settings/wysiwyg/profile/$id/export"),
        );
      }
      if (isset($profiles[$id]->default)) {
        $form['formats'][$id]['delete'] = array(
          '#value' => l(t('Revert'), "admin/settings/wysiwyg/profile/$id/revert"),
        );
      }
      else {
        $form['formats'][$id]['delete'] = array(
          '#value' => l(t('Delete'), "admin/settings/wysiwyg/profile/$id/delete"),
        );
      }
    }
  }

  // Submitting the form when no editors can be selected causes errors.
  if ($enable_save) {
    $form['submit'] = array('#type' => 'submit', '#value' => t('Save'));
  }
  if (!$ctools_installed) {
    drupal_set_message(t('If you install !ctools module, you will be able to export and import wysiwyg profiles.', array('!ctools' => l('CTools', 'http://drupal.org/project/ctools'))), 'status');
  }
  return $form;
}

/**
 * Import a format setting.
 */
function wysiwyg_import_profile_page(&$form_state) {
  if (module_exists('ctools')) {
    $format_objs = filter_formats();
    $formats[0] = t('As defined in the import');
    foreach ($format_objs as $obj) {
      $formats[$obj->format] = $obj->name;
    }

    $form['wysiwyg'] = array(
      '#type' => 'textarea',
      '#title' => t('Paste wysiwyg settings code here'),
      '#required' => TRUE,
    );

    $form['target_format'] = array(
      '#type' => 'select',
      '#title' => t('Target format'),
      '#options' => $formats,
      '#description' => t('Input format for the wysiwyg settings'),
    );

    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Import'),
      '#submit' => array('wysiwyg_import_submit'),
      '#validate' => array('wysiwyg_import_validate'),
    );

    return $form;
  }
  else {
    form_set_error('', t('You need to install the !ctools module to be able to export and import wysiwyg profiles.', array('!ctools' => l('Ctools', 'http://drupal.org/project/ctools'))));
    return array();
  }
}

/**
 * Validate that the pasted in code works.
 */
function wysiwyg_import_validate($form, &$form_state) {
  $wysiwyg = '';
  // Put any necessary includes here
  ob_start();
  eval($form_state['values']['wysiwyg']);
  ob_end_clean();

  if (!is_object($wysiwyg)) {
    return form_error($form['wysiwyg'], t('Unable to interpret wysiwyg code.'));
  }
  if (empty($wysiwyg->api_version) || $wysiwyg->api_version < 2) {
    form_error($form['wysiwyg'], t('That wysiwyg format setting is not compatible with this version of the wysiwyg module.'));
  }

  
  if ($form_state['values']['target_format']) {
    $wysiwyg->format = $form_state['values']['target_format'];
  }
  drupal_alter('wysiwyg_import_profile', $wysiwyg);

  // Refuse any settings that already exist for that format type
  $profile_exists = db_result(db_query("SELECT format FROM {wysiwyg} WHERE format = %d AND settings IS NOT NULL", $wysiwyg->format));
  if ($profile_exists) {
    form_error($form['wysiwyg'], t('Wysiwyg settings already exists for that input format type. Please delete the existing settings and attempt the import again if you wish to replace the existing settings.'));
  }
}

/**
 * Submit handler for wysiwyg settings import
 */
function wysiwyg_import_submit($form, &$form_state) {
  // Check to see if the setting exits (should have been caught by validation hook above); if so give an error;
  // else write the format settings to the database and then redirect the user to the edit page
  $wysiwyg = '';
  eval($form_state['values']['wysiwyg']);

  if ($form_state['values']['target_format']) {
    $wysiwyg->format = $form_state['values']['target_format'];
  }

  // Write the settings to the database
  $wysiwyg->settings = serialize($wysiwyg->settings);
  drupal_alter('wysiwyg_import_profile', $wysiwyg);

  $settings_exists = db_result(db_query("SELECT 1 FROM {wysiwyg} WHERE format = %d", $wysiwyg->format));
  if ($settings_exists) {
    drupal_set_message(t('Settings for that format input type already exists; your import was not used and nothing was done.  Please delete the existing wysiwyg format settings for that input type and import again.'), 'error');
    return;
  }

  $dwr_ret = drupal_write_record('wysiwyg', $wysiwyg);

  if ($dwr_ret === FALSE) {
    drupal_set_message(t('An error occurred when writing the wysiwyg settings to the database.') , 'error');
    return;
  }
  drupal_set_message(t('Wysiwyg settings were imported successfully.'));
  $form_state['redirect'] = 'admin/settings/wysiwyg/profile/'. $wysiwyg->format .'/edit';
}

/**
 * Return HTML for the Wysiwyg profile overview form.
 */
function theme_wysiwyg_profile_overview($form) {
  if (!isset($form['formats'])) {
    return;
  }
  $output = '';
  $header = array(t('Input format'), t('Editor'), array('data' => t('Operations'), 'colspan' => 3));
  $rows = array();
  foreach (element_children($form['formats']) as $item) {
    $format = &$form['formats'][$item];
    $rows[] = array(
      drupal_render($format['name']),
      drupal_render($format['editor']),
      isset($format['edit']) ? drupal_render($format['edit']) : '',
      isset($format['export']) ? drupal_render($format['export']) : '',
      isset($format['delete']) ? drupal_render($format['delete']) : '',
    );
  }
  $form['formats']['table']['#value'] = theme('table', $header, $rows);
  $output .= drupal_render($form);
  return $output;
}

/**
 * Submit callback for Wysiwyg profile overview form.
 */
function wysiwyg_profile_overview_submit($form, &$form_state) {
  foreach ($form_state['values']['formats'] as $format => $values) {
    db_query("UPDATE {wysiwyg} SET editor = '%s' WHERE format = %d", $values['editor'], $format);
    if (!db_affected_rows()) {
      db_query("INSERT INTO {wysiwyg} (format, editor) VALUES (%d, '%s')", $format, $values['editor']);
    }
  }
}

/**
 * Delete editor profile confirmation form.
 */
function wysiwyg_profile_delete_confirm(&$form_state, $profile) {
  $formats = filter_formats();
  $format = $formats[$profile->format];
  $form['format'] = array('#type' => 'value', '#value' => $format);
  return confirm_form(
    $form,
    t('Are you sure you want to remove the profile for %name?', array('%name' => $format->name)),
    'admin/settings/wysiwyg',
    t('This action cannot be undone.'), t('Remove'), t('Cancel')
  );
}

/**
 * Submit callback for Wysiwyg profile delete form.
 *
 * @see wysiwyg_profile_delete_confirm()
 */
function wysiwyg_profile_delete_confirm_submit($form, &$form_state) {
  $format = $form_state['values']['format'];
  wysiwyg_profile_delete($format->format);
  drupal_set_message(t('Wysiwyg profile for %name has been deleted.', array('%name' => $format->name)));
  $form_state['redirect'] = 'admin/settings/wysiwyg';
}
/**
 * Delete editor profile confirmation form.
 */
function wysiwyg_profile_revert_confirm(&$form_state, $profile) {
  $formats = filter_formats();
  $format = $formats[$profile->format];
  $form['format'] = array('#type' => 'value', '#value' => $format);
  return confirm_form(
    $form,
    t('Are you sure you want to revert the profile\'s settings for %name?', array('%name' => $format->name)),
    'admin/settings/wysiwyg',
    t('This action cannot be undone.'), t('Revert'), t('Cancel')
  );

}

/**
 * Submit callback for Wysiwyg profile delete form.
 *
 * @see wysiwyg_profile_revert_confirm()
 */
function wysiwyg_profile_revert_confirm_submit($form, &$form_state) {
  $format = $form_state['values']['format'];
  // Delete settings from database, they will be rebuilded from code.
  wysiwyg_profile_delete($format->format);
  drupal_set_message(t('Wysiwyg profile settings for %name has been reverted.', array('%name' => $format->name)));
  $form_state['redirect'] = 'admin/settings/wysiwyg';
}

/**
 * Remove a profile from the database.
 */
function wysiwyg_profile_delete($format) {
  db_query("DELETE FROM {wysiwyg} WHERE format = %d", $format);
}
