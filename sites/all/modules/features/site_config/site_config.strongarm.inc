<?php
/**
 * @file
 * site_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Wall Street Pizza 205';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
<<<<<<< HEAD
  $strongarm->value = 'wallstreet_theme';
=======
  $strongarm->value = 'bartik';
>>>>>>> 63278a599db802d2b406334882907010845d53a3
  $export['theme_default'] = $strongarm;

  return $export;
}
