<?php
/**
 * @file
 * fsrio_rpd.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fsrio_rpd_node_info() {
  $items = array(
    'research_project' => array(
      'name' => t('Research project'),
      'base' => 'node_content',
      'description' => t('<em>Research project</em> nodes contain data about food-safety-related research projects including associated investigators, reports, and publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
