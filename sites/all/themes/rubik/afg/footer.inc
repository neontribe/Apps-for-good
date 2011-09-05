  <?php if ($feed_icons || $footer_message): ?>
  <div id='footer' class='limiter clear-block'>

	<?php print $footer; ?>

    <?php if ($feed_icons): ?>
      <div class='feed-icons clear-block'>
        <label><?php print t('Feeds') ?></label>
        <?php print $feed_icons ?>
      </div>
    <?php endif; ?>
    <?php if ($footer_message): ?><div class='footer-message'><?php print $footer_message ?></div><?php endif; ?>
  </div>
  <?php endif; ?>
  
  <script type="text/javascript" charset="utf-8">
	  var is_ssl = ("https:" == document.location.protocol);
	  var asset_host = is_ssl ? "https://s3.amazonaws.com/getsatisfaction.com/" : "http://s3.amazonaws.com/getsatisfaction.com/";
	  document.write(unescape("%3Cscript src='" + asset_host + "javascripts/feedback-v2.js' type='text/javascript'%3E%3C/script%3E"));
  </script>
	
  <script type="text/javascript" charset="utf-8">
	  var feedback_widget_options = {};
	
	  feedback_widget_options.display = "overlay";  
	  feedback_widget_options.company = "apps_for_good";
	  feedback_widget_options.placement = "left";
	  feedback_widget_options.color = "#65009e";
	  feedback_widget_options.style = "idea";
	  var feedback_widget = new GSFN.feedback_widget(feedback_widget_options);
  </script>

  <?php print $closure ?>

  </body>
</html>