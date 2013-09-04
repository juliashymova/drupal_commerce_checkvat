<?php

function pozornadph_variable_info($options) {
  $variables['pozornadph_notify_email'] = array(
    'title' => t('Email body', NULL, $options),
    'description' => t('Email text to notify about VAT.', NULL, $options),
  );
  return $variables;
}
