<?php
// $Id: as.inc,v 1.9 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "American Samoa" specific data
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
function addresses_province_list_as() {
  return array(
    'E' => t('Eastern'),
    'M' => t("Manu'a"),
    'R' => t('Rose Island'),
    'S' => t('Swains Island'),
    'W' => t('Western')
  );
}
