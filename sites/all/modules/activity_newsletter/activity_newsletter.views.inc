<?php

/*
 * Implementation of hook_views_plugins()
 */
function activity_newsletter_views_plugins() {
	return array(
		'module' => 'activity_newsletter',
		'style' => array(
			'newsletter' => array(
				'title' => t('Newsletter'),
				'help' => t('Builds a newsletter from recent activity.'),
				'handler' => 'activity_newsletter_plugin_style',
				'theme' => 'newsletter',
				'path' => drupal_get_path('module', 'activity_newsletter') . '/plugins',
				'uses row plugin' => FALSE,
				'uses options' => TRUE,
				'uses fields' => TRUE,
				'type' => 'feed',
			)
		)
	);
}
