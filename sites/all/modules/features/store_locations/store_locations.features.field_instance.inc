<?php
/**
 * @file
 * store_locations.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function store_locations_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-location-field_store_latitude'.
  $field_instances['node-location-field_store_latitude'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the latitude of the store location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_store_latitude',
    'label' => 'Store Latitude',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-location-field_store_longitude'.
  $field_instances['node-location-field_store_longitude'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the longitude of the store location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_store_longitude',
    'label' => 'Store Longitude',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Please enter the latitude of the store location.');
  t('Please enter the longitude of the store location.');
  t('Store Latitude');
  t('Store Longitude');

  return $field_instances;
}
