<?php
/**
 * @file
 * store_locations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function store_locations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function store_locations_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('Location of the store. Used for Google Map markers.'),
      'has_title' => '1',
      'title_label' => t('Store Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
