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
    'rpd_activity_statuses' => array(
      'name' => 'RPD Activity statuses',
      'machine_name' => 'rpd_activity_statuses',
      'description' => 'Lists activity statuses of food safety research projects',
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
    'rpd_funding_sources_international' => array(
      'name' => 'RPD Funding sources - International govt.',
      'machine_name' => 'rpd_funding_sources_international',
      'description' => 'Lists international government funding sources of research projects',
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
    'rpd_funding_sources_state_private' => array(
      'name' => 'RPD Funding sources - State and private org.',
      'machine_name' => 'rpd_funding_sources_state_private',
      'description' => 'Lists state and private organization funding sources of research projects',
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
    'rpd_funding_sources_us' => array(
      'name' => 'RPD Funding sources - US govt.',
      'machine_name' => 'rpd_funding_sources_us',
      'description' => 'Lists US government funding sources of research projects',
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
