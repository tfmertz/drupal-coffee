<?php
/**
 * @file
 * vip_role.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vip_role_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'create todotoday_task content'.
  $permissions['create todotoday_task content'] = array(
    'name' => 'create todotoday_task content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
      'vip' => 'vip',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own todotoday_task content'.
  $permissions['delete own todotoday_task content'] = array(
    'name' => 'delete own todotoday_task content',
    'roles' => array(
      'moderator' => 'moderator',
      'vip' => 'vip',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own todotoday_task content'.
  $permissions['edit own todotoday_task content'] = array(
    'name' => 'edit own todotoday_task content',
    'roles' => array(
      'moderator' => 'moderator',
      'vip' => 'vip',
    ),
    'module' => 'node',
  );

  return $permissions;
}
