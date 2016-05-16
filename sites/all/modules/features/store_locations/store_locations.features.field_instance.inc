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

  // Exported field_instance: 'node-location-field_address'.
  $field_instances['node-location-field_address'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_all',
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
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');

  return $field_instances;
}
