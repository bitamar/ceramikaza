<?php
/**
 * @file
 * ckza.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ckza_strongarm() {
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
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_ckza_omega_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'omega_toggle_front_page_content' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'omega_toggle_extension_scripts' => 1,
    'omega_js_footer' => 1,
    'omega_js_exclude' => array(),
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => 0,
      ),
      'css3mediaqueries' => array(
        'status' => 0,
      ),
      'respond' => array(
        'status' => 0,
      ),
      'css3pie' => array(
        'status' => 0,
        'selectors' => array(),
      ),
      'html5shiv' => array(
        'status' => 0,
      ),
      'messages' => array(
        'status' => 1,
      ),
    ),
    'omega_toggle_extension_layouts' => 1,
    'omega_layout' => 'epiqo',
    'omega_toggle_extension_development' => 1,
    'omega_rebuild_theme_registry' => 0,
    'omega_rebuild_aggregates' => 0,
    'omega_browser_width_indicator' => 0,
    'omega_dummy_blocks' => 0,
    'omega_toggle_extension_css' => 1,
    'omega_media_queries_inline' => 1,
    'omega_class_rules' => array(),
    'omega_css_exclude' => array(),
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_chrome_edge' => 1,
  );
  $export['theme_ckza_omega_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'ckza_omega';
  $export['theme_default'] = $strongarm;

  return $export;
}
