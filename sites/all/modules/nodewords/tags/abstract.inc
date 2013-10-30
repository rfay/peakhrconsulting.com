<?php
// $Id: abstract.inc,v 1.2 2006/09/13 09:38:27 robrechtj Exp $

/**
 * @file
 * Support file for ABSTRACT meta tag.
 */

function nodewords_abstract_form($type, $value, $settings) {
  return array(
    '#type' => 'textfield',
    '#title' => t('Abstract'),
    '#default_value' => $value,
    '#size' => 60,
    '#maxlength' => $settings['max_size'],
    '#description' => t('Enter a short abstract for this page. Typically it is one sentence.'),
  );
}
