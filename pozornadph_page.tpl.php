<?php

foreach ($plans as $plan) {

  if($plan->plan == 0) {
    $args = array(
      '@time' => format_date($plan->end_date),
    );

    echo '<p>' . format_plural($plan->count,
                      'You have 1 weekly check till @time',
                      'You have @count weekly checks till @time',
                      $args) .'</p>';
  }

  if($plan->plan == 1) {
    $args = array(
        '@time' => format_date($plan->end_date),
    );

    echo '<p>' . format_plural($plan->count,
        'You have 1 daily check till @time',
        'You have @count daily checks till @time',
        $args) . '</p>';
  }
}

$form = drupal_get_form('pozornadph_form',$companies,$plans);
print drupal_render($form);




//echo drupal_render($form);

echo l(t('Add a company'),'node/add/company',array('query' => array('destination' => 'pozornadph/checkvat')));


?>