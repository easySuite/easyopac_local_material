<?php

/**
 * @file
 *
 * EasyOPAC local material module administrative  functionality.
 */

/**
 * Imported materials cleanup form.
 */
function easyopac_local_material_cleanup_form() {
  $form['clean'] = [
    '#value' => 'Clean',
    '#type' => 'submit',
  ];

  $form['comment'] = [
    '#markup' => t('Collect all local material nodes, files and taxonomy terms and remove them.'),
  ];

  return $form;
}

/**
 * Imported materials cleanup form submit callback.
 */
function easyopac_local_material_cleanup_form_submit($form, &$form_state) {
  $nids = db_select('node', 'n')
    ->fields('n', ['nid'])
    ->condition('type', 'local_material')
    ->execute()
    ->fetchCol();

  $fids = db_select('file_managed', 'f')
    ->fields('f', ['fid'])
    ->execute()
    ->fetchCol();

  $vocabularies = [
    'lm_audience',
    'lm_authors',
    'lm_relations',
    'lm_subjects',
    'lm_spatials',
  ];

  $vids = [];
  foreach ($vocabularies as $machine_name) {
    $vocabulary = taxonomy_vocabulary_machine_name_load($machine_name);
    $vids[] = $vocabulary->vid;
  }

  $terms = db_select('taxonomy_term_data', 'ttd')
    ->fields('ttd', ['tid'])
    ->condition('vid', $vids, 'IN')
    ->execute()
    ->fetchCol();

  foreach ($nids as $k => $nid) {
    node_delete($nid);
  }

  foreach ($fids as $j => $fid) {
    file_delete(file_load($fid));
  }

  foreach ($terms as $term) {
    taxonomy_term_delete($term);
  }
}
