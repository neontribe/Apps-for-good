<?php include('header.inc'); ?>

<div id='page' class='end-node clear-block limiter page-content'>

  <?php if ($show_messages && $messages): ?>
    <div id='console' class='clear-block'><?php print $messages; ?></div>
  <?php endif; ?>
   
  <div id='content'>
  
  	<?php //dpm( get_defined_vars() ); ?>
  
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
        <div class='content-wrapper clear-block'>
        	<?php print $content ?>
         </div>
      <?php endif; ?>
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