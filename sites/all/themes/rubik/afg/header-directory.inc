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
          	<div class="profile-image">
              <?php print get_profile_image(); ?>
              <span class="user_name"><?php print get_user_name(); ?></span>
            </div>
		  	<?php print $header ?>
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
        <!-- do not print tab links on directory pages -->
        <//?php if (isset($primary_links)) print theme('links', $primary_links) ?>
		    <?php if (isset($secondary_links)) print theme('links', $secondary_links, array('class' => 'links secondary-links')) ?> 
      </div>
      
      
    </div>
  </div>
  
  </div>
