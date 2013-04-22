<?php
/**
 * @file
 * fsrio_rpd.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fsrio_rpd_taxonomy_default_vocabularies() {
  return array(
    'rpd_farm_to_table_categories' => array(
      'name' => 'RPD Farm-to-table categories',
      'machine_name' => 'rpd_farm_to_table_categories',
      'description' => 'Lists farm-to-table categories of research projects',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'rpd_food_safety_categories' => array(
      'name' => 'RPD Food safety categories',
      'machine_name' => 'rpd_food_safety_categories',
      'description' => 'Lists food safety categories of research projects',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'rpd_institutions' => array(
      'name' => 'RPD Institutions',
      'machine_name' => 'rpd_institutions',
      'description' => 'Lists institutions involved in research projects',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'rpd_jifsr_categories' => array(
      'name' => 'RPD JIFSR categories',
      'machine_name' => 'rpd_jifsr_categories',
      'description' => 'Lists JIFSR categories of research projects',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'rpd_project_types' => array(
      'name' => 'RPD Project types',
      'machine_name' => 'rpd_project_types',
      'description' => 'Lists types of food safety research projects',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
