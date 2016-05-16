<?php
/**
 * @file
 * store_locations.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function store_locations_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_store_latitude'.
  $field_bases['field_store_latitude'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_store_latitude',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 32,
      'scale' => 10,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_store_longitude'.
  $field_bases['field_store_longitude'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_store_longitude',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 32,
      'scale' => 10,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  return $field_bases;
}
