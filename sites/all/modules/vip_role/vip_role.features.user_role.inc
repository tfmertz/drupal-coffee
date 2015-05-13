<?php
/**
 * @file
 * vip_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function vip_role_user_default_roles() {
  $roles = array();

  // Exported role: vip.
  $roles['vip'] = array(
    'name' => 'vip',
    'weight' => 2,
  );

  return $roles;
}
