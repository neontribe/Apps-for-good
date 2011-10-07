$(document).ready(function(){
	// $menus = $('#block-atrium-account, #block-atrium-create, #block-atrium-admin_links');
	
	var menus = new Array(
		$('#block-atrium-account'),
		$('#block-atrium-create'),
		$('#block-atrium-admin_links')
	);
	
	// Styling
	$('<div class="block-shadow"></div>').insertAfter('#block-quicktabs-cdi_features, #content-left .browse-centres, #block-quicktabs-app_directory, #block-quicktabs-app_media');
	$('#content-left #stats .item').append('<span class="item-arrow"></span>');
	
	$('#content-left .views-label-field-about-me-value').wrapInner('<div class="block-title"><h2 /></div>');
	var text = $('#content-left .views-label-field-about-me-value h2').text();
	$('#content-left .views-label-field-about-me-value h2').text( text.trim().slice(0, -1) );
	
	// Toggle Menus
	$.each(menus, function(i, menu){
		// Hide menu by default
		$('ul', menu).hide();
		
		$('h3, h2', menu).bind('click', function(evt){
			// Toggle menu state
			$('.pane-right h3, ul', menu).toggle(); 
			menu.toggleClass('account-menu-active');
		}).css('cursor', 'pointer'); // Anchor affect on header element
	});
	
	// CDI Features Carousel
	var tabs = $('#block-quicktabs-cdi_features .quicktabs_tabs').children('li')
	var max_title_chars = 17;
	
	for (var i = 0; i < tabs.length; i++){
		var title = $('#block-quicktabs-cdi_features .quicktabs_tabpage').eq(i).find('#editorial-title-teaser h3 a').text().substring(0, max_title_chars);
		$('#block-quicktabs-cdi_features .quicktabs_tabs li a').eq(i).text( title );
	}
	
	// App Media Carousel
	var tabs = $('#block-quicktabs-app_media .quicktabs_tabs').children('li');
	$.each(tabs, function(){
		var $this = $(this);
		
		// Add span for background image
		$this.children('a').wrapInner('<span class="tab-text" />');
		
		// Add media type class
		var text = $this.text();
		var words = text.split(' ');
		var last = words[words.length - 1].toLowerCase();
		var tabclass = 'tab-' + last;
		$this.addClass(tabclass);
	});
	
	// Get User's name from hidden span
	$('.pane-left').children('h3').text( $('#header-top span.user_name').text() );
	
	// Social Links
	$('.social-links').parent().parent().addClass('social-links-container');
	$('.social-links-container').children('.block-content').css('padding', '0');
	
	// Admin form tag active state
	var tags = $('.page-node-form .fieldset-content').find('.form-option input');
	
	tags.each(function(){
		var parent = $(this).parent();
		
		// Add active state
		if ($(this).is(':radio:checked')){	
			parent.addClass('tag-active');
			parent.contents().filter(function(){ return this.nodeType === 3; }).wrap('<span />');
		}
		
		// Bind click event
		$(this).bind('click', function(e){
			if ($(this).is(':radio')){
				// Remove any current active classes set
				removeActiveTag();
				
				// Add active state
				if ($(this).is(':radio:checked')){	
					parent.addClass('tag-active');
					parent.contents().filter(function(){ return this.nodeType === 3; }).wrap('<span />');
				}
			}
		});
	});
	
});

/**
 * Removes the active tag state class from all input items
 */
function removeActiveTag(){
	var tags = $('.page-node-form .fieldset-content').find('.form-option input');
	
	tags.each(function(){
		var parent = $(this).parent();
		parent.removeClass('tag-active');
	});
}


//$(window).load(function() {
	//$('<div id="map-mask"></div>').prependTo('#gmap-auto1map-gmap0 > div:first-child > div');
//});