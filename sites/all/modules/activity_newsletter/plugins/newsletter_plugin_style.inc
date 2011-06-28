<?php

class activity_newsletter_plugin_style extends views_plugin_style {
	function render() {
		return 'test';	
	}
	function option_definition() {
		$options = parent::option_definition();
	}
	function options_form(&$form, &$form_state) {
	}
}
