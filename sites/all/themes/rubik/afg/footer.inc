  <?php if ($feed_icons || $footer_message): ?>
  <div id='footer' class='limiter clear-block'>


<!-- TEMP -->
  <ul>
  	<li><a href="#" title="">Apps For Good</a></li>
    <li><a href="#" title="">Apps</a></li>
    <li><a href="#" title="">Schools</a></li>
    <li><a href="#" title="">About</a></li>
  </ul>
  
  <ul>
  	<li><a href="#" title="">Lorem Ipsum</a></li>
    <li><a href="#" title="">Lorem Ipsum</a></li>
  </ul>
  
  <ul>
  	<li><a href="#" title="">Useful Links</a></li>
    <li><a href="#" title="">DomainName.com</a></li>
    <li><a href="#" title="">DomainName.com</a></li>
    <li><a href="#" title="">DomainName.com</a></li>
  </ul>
  
  <ul>
  	<li><a href="#" title="">Information</a></li>
    <li><a href="#" title="">Contact Us</a></li>
    <li><a href="#" title="">Privacy Policy</a></li>
  </ul>
<!-- [END] TEMP --> 

  
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

  </body>
</html>
