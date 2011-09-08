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
  
  <?php print $closure ?>

<!-- Google Analytics -->
    <script type="text/javascript">
      var _gaq = _gaq || [];
     _gaq.push(['_setAccount', 'UA-20301355-5']);
   _gaq.push(['_trackPageview']);
   (function() {
        var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
       ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
      var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
      })();
    </script>

  </body>
</html>
