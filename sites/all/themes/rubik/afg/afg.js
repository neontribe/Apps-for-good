$(document).ready(function(){
	$('#content-left .block').append('<div class="block-shadow"></div>');
	$('#content-left #stats .item').append('<span class="item-arrow"></span>');
	
	var active = false;
	
	// Toggle 'My Account', 'My Groups' menu
	$('#block-atrium-account .pane-left h3').click(function(){
		$('#block-atrium-account .pane-right h3, #block-atrium-account .pane-left ul, #block-atrium-account .pane-right ul').toggle();
		
		if (!active) {
			$('#block-atrium-account').addClass('account-menu-active');
		}
		else {
			$('#block-atrium-account').removeClass('account-menu-active');
		}
		
		active = !active;
	});
});

//$(window).load(function() {
	//$('<div id="map-mask"></div>').prependTo('#gmap-auto1map-gmap0 > div:first-child > div');
//});

