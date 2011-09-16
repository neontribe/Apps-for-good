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

       <?php if ($region): ?>
          <span class='region'>
             <h2><?php print $region; if ($city) print ", $city"; ?></h2>
          </span>
       <?php endif; ?>
       
        <span class='header-description'>
          <?php print $header_desc ?>
       </span>

<!--detect if site home for social links-->
<?php if ($base_path!==$front_page): ?>
	   
       <?php $soc_path = $_SERVER['SERVER_NAME'] . $_SERVER['PHP_SELF']; ?>
       
	   <div id="prof-soc-widgets">
			<div id="prof-soc-tw">
				<a href="http://twitter.com/share" class="twitter-share-button" data-count="horizontal" data-url="<?php print $soc_path; ?>" data-via="AppsForGoodCDI">Tweet</a><script type="text/javascript" src="http://platform.twitter.com/widgets.js"></script>
			</div>
			<div id="prof-soc-li">
				<script src="http://platform.linkedin.com/in.js" type="text/javascript"></script>
				<script type="IN/Share" data-url="<?php print $soc_path; ?>" data-counter="right"></script>
			</div>
			<div id="prof-soc-fb">
				<iframe src="http://www.facebook.com/plugins/like.php?app_id=260742727279643&amp;href=<?php print urlencode($soc_path); ?>&amp;send=false&amp;layout=button_count&amp;show_faces=false&amp;action=like&amp;colorscheme=dark&amp;font&amp;height=21" scrolling="no" frameborder="0" style="border:none; overflow:hidden; height:21px;" allowTransparency="true"></iframe>
			</div>
		</div>
		
<?php endif; ?> <!--END social links-->

        </div>
	  
	  <?php if ($space_tools): ?>
	    <div id='space-tools'><div class='dropdown-blocks toggle-blocks clear-block'><?php print $space_tools ?></div></div>
	  <?php endif; ?>
	  <?php if ($page_tools): ?><div class='dropdown-blocks toggle-blocks clear-block'><?php print $page_tools ?></div><?php endif; ?>

      <div id='primary-links'>
<!--detect if site home -->
<?php if ($base_path!==$front_page): ?>
        <?php if (isset($primary_links)) print theme('links', $primary_links) ?>
<?php endif; ?>
	<?php if (isset($secondary_links)) print theme('links', $secondary_links, array('class' => 'links secondary-links')) ?>
      </div>
      
      
    </div>
  </div>
  
  </div>
