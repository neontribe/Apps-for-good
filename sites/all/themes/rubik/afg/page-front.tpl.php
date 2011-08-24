<?php include('header.inc'); ?>

<div id='page' class='clear-block limiter page-content'>
  <?php if ($show_messages && $messages): ?>
    <div id='console' class='clear-block'><?php print $messages; ?></div>
  <?php endif; ?>

  <div id='content'>
  
    <?php if ($tabs): ?>
      <div id='tabs'>
        <div class='page-tabs limiter clear-block'><?php print $tabs ?></div>
        <?php if ($tabs2): ?><div class='page-tabs limiter clear-block'><?php print $tabs2 ?></div><?php endif; ?>
      </div>
    <?php endif; ?>
	
	<?php if ($left): ?>
      <div id='left' class='clear-block'><?php print $left ?></div>
    <?php endif; ?>
    
    <div id='content-left'>
      <?php if (!empty($content)): ?>
        <div class='content-wrapper clear-block'><?php print $content ?></div>
      <?php endif; ?>



      
      <!-- [begin] Stats -->
      
      <div id="stats">
      
      	<div class="item first">
          <div class="item-content item-supporters">
            <span><em><?php print afg_user_count(); ?></em>supporters</span>
            <a href="#" title="Become a Supporter">Become a Supporter</a>
          </div>
        </div>
        
        <div class="item">
          <div class="item-content item-schools">
            <?php
			
			//$view = views_get_view('groups_listing_centre_school');
 		    //list($a) = $view->execute_display('block_8');
			//echo 'bye'; print $a; echo 'hi';
			
			/*
			  $view = views_get_view('groups_listing_centre_school');
			  $rendered = $view->execute_display('block_8');
			  print $rendered['content'];
			*/
			
			?>
            <span><em><?php print afg_content_count('group_centre_school'); ?></em>schools</span>
            <a href="#" title="Find out more">Find out more</a>
          </div>
        </div>
        
        <div class="item last item-results">
          <div class="item-content">
            <span><em>wow</em>is our result</span>
            <a href="#" title="How can I help?">How can I help?</a>
          </div>
        </div>
        
      </div>
      <div style="clear: both;"></div>
      
      <!-- [end] Stats -->
      
      
      
      
      <?php print $content_region ?>
    </div>
    
    <?php if ($right): ?>
     
	  <div id='content-right'>
        <?php print $right ?>
      </div>
     
	<?php endif; ?>
    
    <div style="clear:both;"></div>
     
    <?php include('footer.inc'); ?>
    
  </div>
</div>