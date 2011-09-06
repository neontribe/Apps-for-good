<?php

/**
 * @file
 * Template file for LinkedIn "Educations" items as displayed on user page
 * Copy it to your theme's folder if you want to override it.
 *
 * Be sure to check and comply to  http://developer.linkedin.com/docs/DOC-1091 before tweaking.
 */
//print 'linkedin-user-page-educations.tpl.php';
//print '<pre>';
//print_r($educations);
//print '</pre>';
?>
<div class="linkedin-educations">
  <ul>
<?php foreach ($educations as $education) : ?>
      <li><?php print $education; ?></li>
<?php endforeach; ?>
  </ul>
</div>

