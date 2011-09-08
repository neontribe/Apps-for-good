<?php
// $Id: pa.inc,v 1.9 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "Panama" specific data
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
function addresses_province_list_pa() {
  return array(
    'BT' => t('Bocas del Toro'),
    'CH' => t('Chiriqui'),
    'CC' => t('Cocle'),
    'CL' => t('Colon'),
    'DA' => t('Darien'),
    'HE' => t('Herrera'),
    'LS' => t('Los Santos'),
    'PA' => t('Panama'),
    'SB' => t('San Blas'),
    'VG' => t('Veraguas')
  );
}
