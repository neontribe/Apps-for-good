<?php

include_once 'sites/all/modules/location/geocoding/google.inc';

// $result = db_query('SELECT li.nid FROM {location} l LEFT JOIN {location_instance} li ON l.lid = li.lid WHERE li.nid IS NOT NULL AND l.latitude = 0');
// $result = db_query('SELECT nid FROM {node}');
$result = db_query('SELECT lid, postal_code FROM {location} WHERE (latitude = 0.000000 AND longitude = 0.000000) OR (latitude = 180.000000 AND longitude = 360.000000)');

while($row = db_fetch_object($result)) {
  $lid = $row->lid;
  $postcode = $row->postal_code;
  // echo $lid . "\n";
  // echo $postcode . "\n";

  $loc = array(
    'postal_code' => $postcode,
    'country' => 'United Kingdom',
  );

  $latlon = google_geocode_location($loc);
  if ($latlon != NULL) {
    $q = 'UPDATE {location} SET latitude = %f, longitude = %f WHERE lid = %d';
    db_query($q, $latlon['lat'], $latlon['lon'], $lid);
    echo 'Lat long set to ' . (implode(', ', $latlon)) . ' for lid ' . $lid . "\n";
  } else {
    echo 'NULL returned for search on post code ' . $postcode . ' on lid ' . $lid . "\n";
  }
}


/*
  $node = node_load($row->nid);
  if ($node->field_centre_loc_details[0]['postal_code']) {
    $latlon = location_latlon_exact($node->field_centre_loc_details[0]);
    var_dump($latlon);
    $node->field_centre_loc_details[0]['latitude'] = $latlon['lat'];
    $node->field_centre_loc_details[0]['longitude'] = $latlon['lon'];
    $node = node_submit($node);
    node_save($node);
    var_dump($node->field_centre_loc_details[0]);
  }
*/
