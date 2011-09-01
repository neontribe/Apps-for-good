$(document).ready(function(){
	// $menus = $('#block-atrium-account, #block-atrium-create, #block-atrium-admin_links');
	
	var menus = new Array(
		$('#block-atrium-account'),
		$('#block-atrium-create'),
		$('#block-atrium-admin_links')
	);
	
	// Styling
	$('#content-left .block').append('<div class="block-shadow"></div>');
	$('#content-left #stats .item').append('<span class="item-arrow"></span>');
	
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
	
	for (var i = 0; i < tabs.length; i++){
		var title = $('#block-quicktabs-cdi_features .quicktabs_tabpage').eq(i).find('#editorial-title-teaser h3 a').text();
		$('#block-quicktabs-cdi_features .quicktabs_tabs li a').eq(i).text( title );
	}
	
});




//$(window).load(function() {
	//$('<div id="map-mask"></div>').prependTo('#gmap-auto1map-gmap0 > div:first-child > div');
//});