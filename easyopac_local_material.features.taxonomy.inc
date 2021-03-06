<?php
/**
 * @file
 * easyopac_local_material.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function easyopac_local_material_taxonomy_default_vocabularies() {
  return array(
    'lm_audience' => array(
      'name' => 'LM: Audience',
      'machine_name' => 'lm_audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lm_authors' => array(
      'name' => 'LM: Authors',
      'machine_name' => 'lm_authors',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lm_classifications' => array(
      'name' => 'LM: Classifications',
      'machine_name' => 'lm_classifications',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lm_languages' => array(
      'name' => 'LM: Languages',
      'machine_name' => 'lm_languages',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lm_object_types' => array(
      'name' => 'LM: Object types',
      'machine_name' => 'lm_object_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lm_relations' => array(
      'name' => 'LM: Relations',
      'machine_name' => 'lm_relations',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lm_spatials' => array(
      'name' => 'LM: Spatials',
      'machine_name' => 'lm_spatials',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lm_subjects' => array(
      'name' => 'LM: Subjects',
      'machine_name' => 'lm_subjects',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
