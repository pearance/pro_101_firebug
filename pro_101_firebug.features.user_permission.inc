<?php
/**
 * @file
 * pro_101_firebug.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_firebug_user_default_permissions() {
  $permissions = array();

  // Exported permission: Access Firebug Debug
  $permissions['Access Firebug Debug'] = array(
    'name' => 'Access Firebug Debug',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'drupalforfirebug',
  );

  // Exported permission: Execute Firebug PHP
  $permissions['Execute Firebug PHP'] = array(
    'name' => 'Execute Firebug PHP',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'drupalforfirebug',
  );

  return $permissions;
}
