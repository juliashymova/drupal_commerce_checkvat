<?php

function pozornadph_notify_email(){
  $form['email_text'] = array(
    '#title' => t('Email text to notify about VAT'),
    '#type' => 'textarea',
    '#default_value' => variable_get('pozornadph_notify_email', '')
  );
  $form['#submit'][] = 'pozornadph_notify_email_form_submit';
  return system_settings_form($form);

}

function pozornadph_notify_email_validate($form, &$form_state){
  if ($form_state['values']['email_text'] != '') {
    form_set_error('', t('You must enter the text'));
  }
}

function pozornadph_notify_email_form_submit($form, $form_state){
  variable_set('pozornadph_notify_email',$form_state['values']['email_text']);
}