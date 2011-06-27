<?php
// $Id: ad.inc,v 1.10 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "Andorra" specific data
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
function addresses_province_list_ad() {
  return array(
    'ALV' => t('Andorra la Vella'),
    'CAN' => t('Canillo'),
    'ENC' => t('Encamp'),
    'ESE' => t('Escaldes-Engordany'),
    'LMA' => t('La Massana'),
    'ORD' => t('Ordino'),
    'SJL' => t('Sant Julia de Loria')
  );
}
