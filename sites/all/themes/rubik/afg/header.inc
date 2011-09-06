<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <?php print $head ?>
    <?php print $styles ?>
    <?php print $scripts ?>
    <title><?php print $head_title ?></title>
  </head>
  <body <?php print drupal_attributes($attr) ?>>

  <?php //print $skipnav ?>

  <div id='top'>
    <div class='limiter clear-block'>
    
	  <?php //if ($help_toggler) print $help_toggler ?>
    
      <div id="header" class='dropdown-blocks toggle-blocks clear-block'>

		  <?php if ($logo): ?>
            <a href="<?php print base_path(); ?>" title="<?php print t('Apps for Good Home'); ?>">
              <img src="<?php print $logo ?>" alt="<?php print t('Home'); ?>" />
            </a>
          <?php endif; ?>
          
          <?php if ($help): ?>
          <div id='page-help'><div class='limiter clear-block'>
            <?php //if ($help_toggler) print $help_toggler ?>
            <?php //if ($help) print $help ?>
          </div></div>
          <?php endif; ?>

          <div id="header-top">
		  	<?php /* print $header */ ?>
			<div id="header-sec-links">
				<ul>
					<li id="get-involved" class="first"><a href="/get-involved">Get involved!</a></li>
					<li class="link"><a href="/about">Log in</a></li>
					<li class="link"><a href="/about">About</a></li>
					<li class="link"><a href="/blog">Blog</a></li>
					<li class="icon"><a href="http://www.facebook.com/appsforgood" title="Like us on Facebook"><img src="<?php print base_path() . path_to_theme(); ?>/images/afg/facebook_32.png" alt="Facebook icon"></a></li>
					<li class="icon"><a href="http://twitter.com/appsforgoodcdi"><img src="<?php print base_path() . path_to_theme(); ?>/images/afg/twitter_32.png" alt="Twitter icon" title="Follow us on Twitter"></a></li>
					<li class="icon"><a href="http://www.linkedin.com/groups/Apps-Good-3606611" title="Join our group on LinkedIn"><img src="<?php print base_path() . path_to_theme(); ?>/images/afg/linkedin_32.png" alt="LinkedIN icon"></a></li>
				</ul>
			</div>
          </div>
          
          <div id='header-links'>
              <?php print theme('links', $header_links); ?>
            </div>
          
      </div>   
      <div id='page-title' class='limiter clear-block'>
        
        <h1 class='page-title <?php print $page_icon_class ?>'>
          <?php if ($title) print $title ?>
        </h1>
        <span class='header-description'>
          <?php print $header_desc ?>
        </span>
        
      </div>
	  
	  <?php if ($space_tools): ?>
	    <div id='space-tools'><div class='dropdown-blocks toggle-blocks clear-block'><?php print $space_tools ?></div></div>
	  <?php endif; ?>
	  <?php if ($page_tools): ?><div class='dropdown-blocks toggle-blocks clear-block'><?php print $page_tools ?></div><?php endif; ?>

      <div id='primary-links'>
        <?php if (isset($primary_links)) print theme('links', $primary_links) ?>
		<?php if (isset($secondary_links)) print theme('links', $secondary_links, array('class' => 'links secondary-links')) ?>
      </div>
      
      
    </div>
  </div>
  
  </div>
