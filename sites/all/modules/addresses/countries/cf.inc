<?php
// $Id: cf.inc,v 1.10 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "Central African Republic" specific data
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
function addresses_province_list_cf() {
  return array(
    'BBA' => t('Bamingui-Bangoran'),
    'BKO' => t('Basse-Kotto'),
    'HKO' => t('Haute-Kotto'),
    'HMB' => t('Haut-Mbomou'),
    'KEM' => t('Kemo'),
    'LOB' => t('Lobaye'),
    'MKD' => t('Mambere-Kadéï'),
    'MBO' => t('Mbomou'),
    'NMM' => t('Nana-Mambere'),
    'OMP' => t("Ombella-M'Poko"),
    'OUK' => t('Ouaka'),
    'OUH' => t('Ouham'),
    'OPE' => t('Ouham-Pende'),
    'VAK' => t('Vakaga'),
    'NGR' => t('Nana-Grebizi'),
    'SMB' => t('Sangha-Mbaere'),
    'BAN' => t('Bangui')
  );
}
