<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ddk_job_content_default_fields() {
  module_load_include('inc', 'ddk_job', 'ddk_job.defaults');
  $args = func_get_args();
  return call_user_func_array('_ddk_job_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ddk_job_ctools_plugin_api() {
  module_load_include('inc', 'ddk_job', 'ddk_job.defaults');
  $args = func_get_args();
  return call_user_func_array('_ddk_job_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ddk_job_node_info() {
  module_load_include('inc', 'ddk_job', 'ddk_job.features.node');
  $args = func_get_args();
  return call_user_func_array('_ddk_job_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ddk_job_strongarm() {
  module_load_include('inc', 'ddk_job', 'ddk_job.defaults');
  $args = func_get_args();
  return call_user_func_array('_ddk_job_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function ddk_job_views_default_views() {
  module_load_include('inc', 'ddk_job', 'ddk_job.features.views');
  $args = func_get_args();
  return call_user_func_array('_ddk_job_views_default_views', $args);
}
