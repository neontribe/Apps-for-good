<div id="registration_form">
  <?php
    //hide group sign up to anonymous users
    global $user;
    if(!$user->uid) {
      $form['og_register']['#type'] = 'hidden';
    }
    //add a submit button
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => 'Submit'
    );
    //render the form
    echo drupal_render($form);
  ?>
</div>
