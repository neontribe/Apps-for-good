



<!DOCTYPE html>
<html>
<head>
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = null;
 
 
 var CS_env = {"profileUrl":null,"token":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/274877064420089206","projectHomeUrl":"/p/gmaps-utility-library","relativeBaseUrl":"","projectName":"gmaps-utility-library","loggedInUserEmail":null};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-12846745-11'],
 ['projectTracker._trackPageview']);
 
 
 </script>
 
 
 <title>markermanager_packed.js - 
 gmaps-utility-library -
 
 
 Google Maps API Utility Library (Deprecated) - Google Project Hosting
 </title>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/274877064420089206/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/274877064420089206/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/274877064420089206/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/274877064420089206/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 <a href="#" id="projects-dropdown" onclick="return false;"><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fgmaps-utility-library%2Fsource%2Fbrowse%2Ftrunk%2Fmarkermanager%2Frelease%2Fsrc%2Fmarkermanager_packed.js%3Fr%3D115&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fgmaps-utility-library%2Fsource%2Fbrowse%2Ftrunk%2Fmarkermanager%2Frelease%2Fsrc%2Fmarkermanager_packed.js%3Fr%3D115" onclick="_CS_click('/gb/ph/signin');"><u>Sign in</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->




 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 <td id="plogo">
 <link itemprop="url" href="/p/gmaps-utility-library">
 <a href="/p/gmaps-utility-library/">
 
 <img src="http://www.gstatic.com/codesite/ph/images/search-48.gif" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/gmaps-utility-library/"><span itemprop="name">gmaps-utility-library</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/gmaps-utility-library/"><span itemprop="description">Google Maps API Utility Library (Deprecated)</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/gmaps-utility-library/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 
 
 
 
 
 
 <a href="/p/gmaps-utility-library/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/gmaps-utility-library/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/gmaps-utility-library/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/gmaps-utility-library/source/list">Changes</a></span> &nbsp;
 
 <form action="http://www.google.com/codesearch" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value + ' package:http://gmaps-utility-library\\.googlecode\\.com'">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 </form>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 
<!-- IE -->




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/gmaps-utility-library/source/browse/?r=115">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/gmaps-utility-library/source/browse/trunk/?r=115">trunk</a><span class="sp">/&nbsp;</span><a href="/p/gmaps-utility-library/source/browse/trunk/markermanager/?r=115">markermanager</a><span class="sp">/&nbsp;</span><a href="/p/gmaps-utility-library/source/browse/trunk/markermanager/release/?r=115">release</a><span class="sp">/&nbsp;</span><a href="/p/gmaps-utility-library/source/browse/trunk/markermanager/release/src/?r=115">src</a><span class="sp">/&nbsp;</span>markermanager_packed.js</span>
 
 

 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper"><b>r115</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn115_1"

><td id="1"><a href="#1">1</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-js"><table id="src_table_0"><tr
id=sl_svn115_1

><td class="source">function MarkerManager(map,opt_opts){var me=this;me.map_=map;me.mapZoom_=map.getZoom();me.projection_=map.getCurrentMapType().getProjection();opt_opts=opt_opts||{};me.tileSize_=MarkerManager.DEFAULT_TILE_SIZE_;var maxZoom=MarkerManager.DEFAULT_MAX_ZOOM_;if(opt_opts.maxZoom!=undefined){maxZoom=opt_opts.maxZoom}me.maxZoom_=maxZoom;me.trackMarkers_=opt_opts.trackMarkers;var padding;if(typeof opt_opts.borderPadding==&quot;number&quot;){padding=opt_opts.borderPadding}else{padding=MarkerManager.DEFAULT_BORDER_PADDING_}me.swPadding_=new GSize(-padding,padding);me.nePadding_=new GSize(padding,-padding);me.borderPadding_=padding;me.gridWidth_=[];me.grid_=[];me.grid_[maxZoom]=[];me.numMarkers_=[];me.numMarkers_[maxZoom]=0;GEvent.bind(map,&quot;moveend&quot;,me,me.onMapMoveEnd_);me.removeOverlay_=function(marker){map.removeOverlay(marker);me.shownMarkers_--};me.addOverlay_=function(marker){map.addOverlay(marker);me.shownMarkers_++};me.resetManager_();me.shownMarkers_=0;me.shownBounds_=me.getMapGridBounds_()};MarkerManager.DEFAULT_TILE_SIZE_=1024;MarkerManager.DEFAULT_MAX_ZOOM_=17;MarkerManager.DEFAULT_BORDER_PADDING_=100;MarkerManager.MERCATOR_ZOOM_LEVEL_ZERO_RANGE=256;MarkerManager.prototype.resetManager_=function(){var me=this;var mapWidth=MarkerManager.MERCATOR_ZOOM_LEVEL_ZERO_RANGE;for(var zoom=0;zoom&lt;=me.maxZoom_;++zoom){me.grid_[zoom]=[];me.numMarkers_[zoom]=0;me.gridWidth_[zoom]=Math.ceil(mapWidth/me.tileSize_);mapWidth&lt;&lt;=1}};MarkerManager.prototype.clearMarkers=function(){var me=this;me.processAll_(me.shownBounds_,me.removeOverlay_);me.resetManager_()};MarkerManager.prototype.getTilePoint_=function(latlng,zoom,padding){var pixelPoint=this.projection_.fromLatLngToPixel(latlng,zoom);return new GPoint(Math.floor((pixelPoint.x+padding.width)/this.tileSize_),Math.floor((pixelPoint.y+padding.height)/this.tileSize_))};MarkerManager.prototype.addMarkerBatch_=function(marker,minZoom,maxZoom){var mPoint=marker.getPoint();if(this.trackMarkers_){GEvent.bind(marker,&quot;changed&quot;,this,this.onMarkerMoved_)}var gridPoint=this.getTilePoint_(mPoint,maxZoom,GSize.ZERO);for(var zoom=maxZoom;zoom&gt;=minZoom;zoom--){var cell=this.getGridCellCreate_(gridPoint.x,gridPoint.y,zoom);cell.push(marker);gridPoint.x=gridPoint.x&gt;&gt;1;gridPoint.y=gridPoint.y&gt;&gt;1}};MarkerManager.prototype.isGridPointVisible_=function(point){var me=this;var vertical=me.shownBounds_.minY&lt;=point.y&amp;&amp;point.y&lt;=me.shownBounds_.maxY;var minX=me.shownBounds_.minX;var horizontal=minX&lt;=point.x&amp;&amp;point.x&lt;=me.shownBounds_.maxX;if(!horizontal&amp;&amp;minX&lt;0){var width=me.gridWidth_[me.shownBounds_.z];horizontal=minX+width&lt;=point.x&amp;&amp;point.x&lt;=width-1}return vertical&amp;&amp;horizontal};MarkerManager.prototype.onMarkerMoved_=function(marker,oldPoint,newPoint){var me=this;var zoom=me.maxZoom_;var changed=false;var oldGrid=me.getTilePoint_(oldPoint,zoom,GSize.ZERO);var newGrid=me.getTilePoint_(newPoint,zoom,GSize.ZERO);while(zoom&gt;=0&amp;&amp;(oldGrid.x!=newGrid.x||oldGrid.y!=newGrid.y)){var cell=me.getGridCellNoCreate_(oldGrid.x,oldGrid.y,zoom);if(cell){if(me.removeFromArray(cell,marker)){me.getGridCellCreate_(newGrid.x,newGrid.y,zoom).push(marker)}}if(zoom==me.mapZoom_){if(me.isGridPointVisible_(oldGrid)){if(!me.isGridPointVisible_(newGrid)){me.removeOverlay_(marker);changed=true}}else{if(me.isGridPointVisible_(newGrid)){me.addOverlay_(marker);changed=true}}}oldGrid.x=oldGrid.x&gt;&gt;1;oldGrid.y=oldGrid.y&gt;&gt;1;newGrid.x=newGrid.x&gt;&gt;1;newGrid.y=newGrid.y&gt;&gt;1;--zoom}if(changed){me.notifyListeners_()}};MarkerManager.prototype.removeMarker=function(marker){var me=this;var zoom=me.maxZoom_;var changed=false;var point=marker.getPoint();var grid=me.getTilePoint_(point,zoom,GSize.ZERO);while(zoom&gt;=0){var cell=me.getGridCellNoCreate_(grid.x,grid.y,zoom);if(cell){me.removeFromArray(cell,marker)}if(zoom==me.mapZoom_){if(me.isGridPointVisible_(grid)){me.removeOverlay_(marker);changed=true}}grid.x=grid.x&gt;&gt;1;grid.y=grid.y&gt;&gt;1;--zoom}if(changed){me.notifyListeners_()}};MarkerManager.prototype.addMarkers=function(markers,minZoom,opt_maxZoom){var maxZoom=this.getOptMaxZoom_(opt_maxZoom);for(var i=markers.length-1;i&gt;=0;i--){this.addMarkerBatch_(markers[i],minZoom,maxZoom)}this.numMarkers_[minZoom]+=markers.length};MarkerManager.prototype.getOptMaxZoom_=function(opt_maxZoom){return opt_maxZoom!=undefined?opt_maxZoom:this.maxZoom_};MarkerManager.prototype.getMarkerCount=function(zoom){var total=0;for(var z=0;z&lt;=zoom;z++){total+=this.numMarkers_[z]}return total};MarkerManager.prototype.addMarker=function(marker,minZoom,opt_maxZoom){var me=this;var maxZoom=this.getOptMaxZoom_(opt_maxZoom);me.addMarkerBatch_(marker,minZoom,maxZoom);var gridPoint=me.getTilePoint_(marker.getPoint(),me.mapZoom_,GSize.ZERO);if(me.isGridPointVisible_(gridPoint)&amp;&amp;minZoom&lt;=me.shownBounds_.z&amp;&amp;me.shownBounds_.z&lt;=maxZoom){me.addOverlay_(marker);me.notifyListeners_()}this.numMarkers_[minZoom]++};GBounds.prototype.containsPoint=function(point){var outer=this;return(outer.minX&lt;=point.x&amp;&amp;outer.maxX&gt;=point.x&amp;&amp;outer.minY&lt;=point.y&amp;&amp;outer.maxY&gt;=point.y)};MarkerManager.prototype.getGridCellCreate_=function(x,y,z){var grid=this.grid_[z];if(x&lt;0){x+=this.gridWidth_[z]}var gridCol=grid[x];if(!gridCol){gridCol=grid[x]=[];return gridCol[y]=[]}var gridCell=gridCol[y];if(!gridCell){return gridCol[y]=[]}return gridCell};MarkerManager.prototype.getGridCellNoCreate_=function(x,y,z){var grid=this.grid_[z];if(x&lt;0){x+=this.gridWidth_[z]}var gridCol=grid[x];return gridCol?gridCol[y]:undefined};MarkerManager.prototype.getGridBounds_=function(bounds,zoom,swPadding,nePadding){zoom=Math.min(zoom,this.maxZoom_);var bl=bounds.getSouthWest();var tr=bounds.getNorthEast();var sw=this.getTilePoint_(bl,zoom,swPadding);var ne=this.getTilePoint_(tr,zoom,nePadding);var gw=this.gridWidth_[zoom];if(tr.lng()&lt;bl.lng()||ne.x&lt;sw.x){sw.x-=gw}if(ne.x-sw.x+1&gt;=gw){sw.x=0;ne.x=gw-1}var gridBounds=new GBounds([sw,ne]);gridBounds.z=zoom;return gridBounds};MarkerManager.prototype.getMapGridBounds_=function(){var me=this;return me.getGridBounds_(me.map_.getBounds(),me.mapZoom_,me.swPadding_,me.nePadding_)};MarkerManager.prototype.onMapMoveEnd_=function(){var me=this;me.objectSetTimeout_(this,this.updateMarkers_,0)};MarkerManager.prototype.objectSetTimeout_=function(object,command,milliseconds){return window.setTimeout(function(){command.call(object)},milliseconds)};MarkerManager.prototype.refresh=function(){var me=this;if(me.shownMarkers_&gt;0){me.processAll_(me.shownBounds_,me.removeOverlay_)}me.processAll_(me.shownBounds_,me.addOverlay_);me.notifyListeners_()};MarkerManager.prototype.updateMarkers_=function(){var me=this;me.mapZoom_=this.map_.getZoom();var newBounds=me.getMapGridBounds_();if(newBounds.equals(me.shownBounds_)&amp;&amp;newBounds.z==me.shownBounds_.z){return}if(newBounds.z!=me.shownBounds_.z){me.processAll_(me.shownBounds_,me.removeOverlay_);me.processAll_(newBounds,me.addOverlay_)}else{me.rectangleDiff_(me.shownBounds_,newBounds,me.removeCellMarkers_);me.rectangleDiff_(newBounds,me.shownBounds_,me.addCellMarkers_)}me.shownBounds_=newBounds;me.notifyListeners_()};MarkerManager.prototype.notifyListeners_=function(){GEvent.trigger(this,&quot;changed&quot;,this.shownBounds_,this.shownMarkers_)};MarkerManager.prototype.processAll_=function(bounds,callback){for(var x=bounds.minX;x&lt;=bounds.maxX;x++){for(var y=bounds.minY;y&lt;=bounds.maxY;y++){this.processCellMarkers_(x,y,bounds.z,callback)}}};MarkerManager.prototype.processCellMarkers_=function(x,y,z,callback){var cell=this.getGridCellNoCreate_(x,y,z);if(cell){for(var i=cell.length-1;i&gt;=0;i--){callback(cell[i])}}};MarkerManager.prototype.removeCellMarkers_=function(x,y,z){this.processCellMarkers_(x,y,z,this.removeOverlay_)};MarkerManager.prototype.addCellMarkers_=function(x,y,z){this.processCellMarkers_(x,y,z,this.addOverlay_)};MarkerManager.prototype.rectangleDiff_=function(bounds1,bounds2,callback){var me=this;me.rectangleDiffCoords(bounds1,bounds2,function(x,y){callback.apply(me,[x,y,bounds1.z])})};MarkerManager.prototype.rectangleDiffCoords=function(bounds1,bounds2,callback){var minX1=bounds1.minX;var minY1=bounds1.minY;var maxX1=bounds1.maxX;var maxY1=bounds1.maxY;var minX2=bounds2.minX;var minY2=bounds2.minY;var maxX2=bounds2.maxX;var maxY2=bounds2.maxY;for(var x=minX1;x&lt;=maxX1;x++){for(var y=minY1;y&lt;=maxY1&amp;&amp;y&lt;minY2;y++){callback(x,y)}for(var y=Math.max(maxY2+1,minY1);y&lt;=maxY1;y++){callback(x,y)}}for(var y=Math.max(minY1,minY2);y&lt;=Math.min(maxY1,maxY2);y++){for(var x=Math.min(maxX1+1,minX2)-1;x&gt;=minX1;x--){callback(x,y)}for(var x=Math.max(minX1,maxX2+1);x&lt;=maxX1;x++){callback(x,y)}}};MarkerManager.prototype.removeFromArray=function(array,value,opt_notype){var shift=0;for(var i=0;i&lt;array.length;++i){if(array[i]===value||(opt_notype&amp;&amp;array[i]==value)){array.splice(i--,1);shift++}}return shift};<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn115_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn115_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta('', 'p', 'gmaps-utility-library', this)">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta('', 'p', 'gmaps-utility-library', this)">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/gmaps-utility-library/source/detail?spec=svn115&amp;r=115">r115</a>
 by pamela.fox
 on Jun 11, 2008
 &nbsp; <a href="/p/gmaps-utility-library/source/diff?spec=svn115&r=115&amp;format=side&amp;path=/trunk/markermanager/release/src/markermanager_packed.js&amp;old_path=/trunk/markermanager/release/src/markermanager_packed.js&amp;old=">Diff</a>
 </div>
 <pre>Retroactively adding packed version of
MarkerManager</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/gmaps-utility-library/source/detail?r=115&spec=svn115';
 var publish_url = '/p/gmaps-utility-library/source/detail?r=115&spec=svn115#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/markermanager/1.0/src/markermanager_packed.js');
 changed_urls.push('/p/gmaps-utility-library/source/browse/trunk/markermanager/1.0/src/markermanager_packed.js?r\x3d115\x26spec\x3dsvn115');
 
 
 changed_paths.push('/trunk/markermanager/release/src/markermanager_packed.js');
 changed_urls.push('/p/gmaps-utility-library/source/browse/trunk/markermanager/release/src/markermanager_packed.js?r\x3d115\x26spec\x3dsvn115');
 
 var selected_path = '/trunk/markermanager/release/src/markermanager_packed.js';
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/gmaps-utility-library/source/browse/trunk/markermanager/1.0/src/markermanager_packed.js?r=115&amp;spec=svn115"
 
 >.../1.0/src/markermanager_packed.js</option>
 
 <option value="/p/gmaps-utility-library/source/browse/trunk/markermanager/release/src/markermanager_packed.js?r=115&amp;spec=svn115"
 selected="selected"
 >...ease/src/markermanager_packed.js</option>
 
 </select>
 </td></tr></table>
 
 
 



 <div style="white-space:nowrap">
 Project members,
 <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fgmaps-utility-library%2Fsource%2Fbrowse%2Ftrunk%2Fmarkermanager%2Frelease%2Fsrc%2Fmarkermanager_packed.js%3Fr%3D115&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fgmaps-utility-library%2Fsource%2Fbrowse%2Ftrunk%2Fmarkermanager%2Frelease%2Fsrc%2Fmarkermanager_packed.js%3Fr%3D115"
 >sign in</a> to write a code review</div>


 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 <a href="/p/gmaps-utility-library/source/list?path=/trunk/markermanager/release/src/markermanager_packed.js&start=115">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 8668 bytes,
 1 line</div>
 
 <div><a href="//gmaps-utility-library.googlecode.com/svn-history/r115/trunk/markermanager/release/src/markermanager_packed.js">View raw file</a></div>
 </div>
 
 <div id="props">
 <p>File properties</p>
 <dl>
 
 <dt>svn:executable</dt>
 <dd>*</dd>
 
 </dl>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/274877064420089206/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/274877064420089206/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://kibbles.googlecode.com/files/kibbles-1.3.3.comp.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/274877064420089206/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn115': '/trunk/markermanager/release/src/markermanager_packed.js'}
 codereviews = CR_controller.setup(
 {"profileUrl":null,"token":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/274877064420089206","projectHomeUrl":"/p/gmaps-utility-library","relativeBaseUrl":"","projectName":"gmaps-utility-library","loggedInUserEmail":null}, '', 'svn115', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/274877064420089206/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/274877064420089206/js/ph_core.js"></script>
 
 
 
 
 <script type="text/javascript" src="/js/codesite_product_dictionary_ph.pack.04102009.js"></script>
</div> 
<div id="footer" dir="ltr">
 <div class="text">
 &copy;2011 Google -
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>
 
 


 
 </body>
</html>

