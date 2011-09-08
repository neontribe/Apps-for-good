<?php
// $Id: vu.inc,v 1.9 2008/11/17 16:01:58 alexiswilke Exp $

/**
 * @file
 * "Vanuatu" specific data
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
function addresses_province_list_vu() {
  return array(
    'MA' => t('Malampa'),
    'PE' => t('Penama'),
    'SA' => t('Sanma'),
    'SH' => t('Shefa'),
    'TA' => t('Tafea'),
    'TO' => t('Torba')
  );
}
