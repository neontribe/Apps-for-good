<?php
// $Id: cr.inc,v 1.9 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "Costa Rica" specific data
 */

/**
 * Implementation of hook_province_list().
 *
 * Its a hook from Addresses module to list all
 * states/provinces/teritories of a given country
 *
 * @return
 *   Array. states where the keys are the state
 *   code and the value is the state name
 */
function addresses_province_list_cr() {
  return array(
    'AL' => t('Alajuela'),
    'CA' => t('Cartago'),
    'GU' => t('Guanacaste'),
    'HE' => t('Heredia'),
    'LI' => t('Limon'),
    'PU' => t('Puntarenas'),
    'SJ' => t('San Jose')
  );
}
