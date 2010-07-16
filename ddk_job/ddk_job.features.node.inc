<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ddk_job_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Jobannonce'),
      'module' => 'features',
      'description' => t('En jobannonce'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '1',
      'body_label' => t('Annoncetekst'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
