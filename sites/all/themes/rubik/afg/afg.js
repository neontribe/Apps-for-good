$(document).ready(function(){
	$('#content-left .block').append('<div class="block-shadow"></div>');
	$('#content-left #stats .item').append('<span class="item-arrow"></span>');
	
	// Toggle 'My Account', 'My Groups' menu
	$('#block-atrium-account .pane-left h3').click(function(){
		$('#block-atrium-account .pane-right h3, #block-atrium-account .pane-left ul, #block-atrium-account .pane-right ul').toggle();
	});
});

//$(window).load(function() {
	//$('<div id="map-mask"></div>').prependTo('#gmap-auto1map-gmap0 > div:first-child > div');
//});

