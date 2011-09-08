<?php
// $Id: ky.inc,v 1.9 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "Cayman Islands" specific data
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
function addresses_province_list_ky() {
  return array(
    'CR' => t('Creek'),
    'EA' => t('Eastern'),
    'ML' => t('Midland'),
    'ST' => t('South Town'),
    'SP' => t('Spot Bay'),
    'SK' => t('Stake Bay'),
    'WD' => t('West End'),
    'WN' => t('Western')
  );
}
