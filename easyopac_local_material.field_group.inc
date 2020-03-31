<?php
/**
 * @file
 * easyopac_local_material.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function easyopac_local_material_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_holdings_available|node|local_material|default';
  $field_group->group_name = 'group_holdings_available';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_local_material_right_col';
  $field_group->data = array(
    'label' => 'Holdings available on the shelf',
    'weight' => '14',
    'children' => array(
      0 => 'field_lm_holdings_information',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Holdings available on the shelf',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_holdings_available|node|local_material|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|local_material|teaser';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_materials_right_col_search';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_lm_object_abstract',
      1 => 'field_lm_series',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'info-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info|node|local_material|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lm_material_details|node|local_material|form';
  $field_group->group_name = 'group_lm_material_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Material details',
    'weight' => '14',
    'children' => array(
      0 => 'field_lmd_age',
      1 => 'field_lmd_audience',
      2 => 'field_lmd_contains',
      3 => 'field_lmd_description',
      4 => 'field_lmd_extent',
      5 => 'field_lmd_format',
      6 => 'field_lmd_genre',
      7 => 'field_lmd_host_publication',
      8 => 'field_lmd_isbn_no',
      9 => 'field_lmd_later_title',
      10 => 'field_lmd_musician',
      11 => 'field_lmd_original_title',
      12 => 'field_lmd_pegi_mark',
      13 => 'field_lmd_previous_title',
      14 => 'field_lmd_referenced_by',
      15 => 'field_lmd_rights',
      16 => 'field_lmd_speech',
      17 => 'field_lmd_subject',
      18 => 'field_lmd_subtitle',
      19 => 'field_lmd_version',
      20 => 'field_lmd_type',
      21 => 'field_lmd_language',
      22 => 'field_lmd_classification',
      23 => 'field_lmd_available_in',
      24 => 'field_lmd_contributor',
      25 => 'field_lmd_publisher',
      26 => 'field_lmd_spatial',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lm-material-details field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_lm_material_details|node|local_material|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_material_left_col|node|local_material|default';
  $field_group->group_name = 'group_local_material_left_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left column',
    'weight' => '1',
    'children' => array(
      0 => 'field_lm_cover',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'ting-object-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_local_material_left_col|node|local_material|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_material_meta|node|local_material|default';
  $field_group->group_name = 'group_local_material_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_local_material_right_col';
  $field_group->data = array(
    'label' => 'Right column meta',
    'weight' => '12',
    'children' => array(
      0 => 'field_lm_object_author',
      1 => 'field_lm_object_title',
      2 => 'field_lm_object_year',
      3 => 'field_lm_object_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right column meta',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'ting-object-right-meta',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_local_material_meta|node|local_material|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_material_right_col|node|local_material|default';
  $field_group->group_name = 'group_local_material_right_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right column',
    'weight' => '2',
    'children' => array(
      0 => 'field_lm_ting_relations',
      1 => 'group_holdings_available',
      2 => 'group_local_material_meta',
      3 => 'group_local_material_right_c',
      4 => 'group_material_details',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'ting-object-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_local_material_right_col|node|local_material|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_material_right_c|node|local_material|default';
  $field_group->group_name = 'group_local_material_right_c';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_local_material_right_col';
  $field_group->data = array(
    'label' => 'Right column content',
    'weight' => '13',
    'children' => array(
      0 => 'field_lm_object_abstract',
      1 => 'field_lm_series',
      2 => 'field_lm_subjects',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right column content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'ting-object-right-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_local_material_right_c|node|local_material|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_material_details|node|local_material|default';
  $field_group->group_name = 'group_material_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_local_material_right_col';
  $field_group->data = array(
    'label' => 'Material details',
    'weight' => '15',
    'children' => array(
      0 => 'field_lmd_age',
      1 => 'field_lmd_audience',
      2 => 'field_lmd_contains',
      3 => 'field_lmd_description',
      4 => 'field_lmd_extent',
      5 => 'field_lmd_format',
      6 => 'field_lmd_genre',
      7 => 'field_lmd_isbn_no',
      8 => 'field_lmd_later_title',
      9 => 'field_lmd_musician',
      10 => 'field_lmd_original_title',
      11 => 'field_lmd_pegi_mark',
      12 => 'field_lmd_previous_title',
      13 => 'field_lmd_referenced_by',
      14 => 'field_lmd_rights',
      15 => 'field_lmd_speech',
      16 => 'field_lmd_subject',
      17 => 'field_lmd_subtitle',
      18 => 'field_lmd_version',
      19 => 'field_lmd_type',
      20 => 'field_lmd_language',
      21 => 'field_lmd_classification',
      22 => 'field_lmd_available_in',
      23 => 'field_lmd_contributor',
      24 => 'field_lmd_publisher',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Material details',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_material_details|node|local_material|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_materials_left_col_search|node|local_material|teaser';
  $field_group->group_name = 'group_materials_left_col_search';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left column',
    'weight' => '0',
    'children' => array(
      0 => 'field_lm_cover',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'ting-object-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_materials_left_col_search|node|local_material|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_materials_right_col_search|node|local_material|teaser';
  $field_group->group_name = 'group_materials_right_col_search';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_material';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right column',
    'weight' => '1',
    'children' => array(
      0 => 'field_lm_object_author',
      1 => 'field_lm_object_title',
      2 => 'group_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'ting-object-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_materials_right_col_search|node|local_material|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Holdings available on the shelf');
  t('Info');
  t('Left column');
  t('Material details');
  t('Right column');
  t('Right column content');
  t('Right column meta');

  return $field_groups;
}
