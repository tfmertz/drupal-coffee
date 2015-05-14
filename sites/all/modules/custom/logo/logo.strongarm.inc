<?php
/**
 * @file
 * logo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function logo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Cameron\'s Coffee';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'The Darkest Brew in Middle-Earth';
  $export['site_slogan'] = $strongarm;

  return $export;
}
