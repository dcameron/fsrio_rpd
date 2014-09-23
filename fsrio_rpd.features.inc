<?php
/**
 * @file
 * fsrio_rpd.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function fsrio_rpd_eck_bundle_info() {
  $items = array(
  'rpd_institution_rpd_institution' => array(
  'machine_name' => 'rpd_institution_rpd_institution',
  'entity_type' => 'rpd_institution',
  'name' => 'rpd_institution',
  'label' => 'RPD Institution',
),
  'rpd_investigator_rpd_investigator' => array(
  'machine_name' => 'rpd_investigator_rpd_investigator',
  'entity_type' => 'rpd_investigator',
  'name' => 'rpd_investigator',
  'label' => 'RPD Investigator',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function fsrio_rpd_eck_entity_type_info() {
$items = array(
       'rpd_institution' => array(
  'name' => 'rpd_institution',
  'label' => 'RPD Institution',
  'properties' => array(
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'changed' => array(
      'label' => 'Changed',
      'type' => 'integer',
      'behavior' => 'changed',
    ),
    'title' => array(
      'label' => 'Name',
      'type' => 'text',
      'behavior' => 'title',
    ),
  ),
),
       'rpd_investigator' => array(
  'name' => 'rpd_investigator',
  'label' => 'RPD Investigator',
  'properties' => array(
    'title' => array(
      'label' => 'Name',
      'type' => 'text',
      'behavior' => 'title',
    ),
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'changed' => array(
      'label' => 'Changed',
      'type' => 'integer',
      'behavior' => 'changed',
    ),
  ),
),
  );
  return $items;
}

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
