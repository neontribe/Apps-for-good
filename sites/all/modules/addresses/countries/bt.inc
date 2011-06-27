<?php
// $Id: bt.inc,v 1.9 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "Bhutan" specific data
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
function addresses_province_list_bt() {
  return array(
    'BUM' => t('Bumthang'),
    'CHU' => t('Chukha'),
    'DAG' => t('Dagana'),
    'GAS' => t('Gasa'),
    'HAA' => t('Haa'),
    'LHU' => t('Lhuntse'),
    'MON' => t('Mongar'),
    'PAR' => t('Paro'),
    'PEM' => t('Pemagatshel'),
    'PUN' => t('Punakha'),
    'SJO' => t('Samdrup Jongkhar'),
    'SAT' => t('Samtse'),
    'SAR' => t('Sarpang'),
    'THI' => t('Thimphu'),
    'TRG' => t('Trashigang'),
    'TRY' => t('Trashiyangste'),
    'TRO' => t('Trongsa'),
    'TSI' => t('Tsirang'),
    'WPH' => t('Wangdue Phodrang'),
    'ZHE' => t('Zhemgang')
  );
}
