<?php
/**
 * @file
 * hbi.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hbi_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hbi_node_info() {
  $items = array(
    'ebo_video' => array(
      'name' => t('eBO Video'),
      'base' => 'node_content',
      'description' => t('Videos from the eBO/HBI Team'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
