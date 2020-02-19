<?php
/**
 * @file
 * easyopac_local_material.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function easyopac_local_material_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'local_materials_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_local_material_index';
  $view->human_name = 'Local Materials Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item search-result';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'search-results';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_local_material_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_local_material_index';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'field_lm_issues' => 'field_lm_issues',
    'field_lm_object_abstract' => 'field_lm_object_abstract',
    'field_lm_object_title' => 'field_lm_object_title',
    'field_lm_object_type' => 'field_lm_object_type',
    'field_lm_object_year' => 'field_lm_object_year',
    'field_lm_on_this_site' => 'field_lm_on_this_site',
    'field_lm_series' => 'field_lm_series',
    'field_lm_ting_relations' => 'field_lm_ting_relations',
    'field_lmd_age' => 'field_lmd_age',
    'field_lmd_available_in' => 'field_lmd_available_in',
    'field_lmd_classification' => 'field_lmd_classification',
    'field_lmd_contains' => 'field_lmd_contains',
    'field_lmd_contributor' => 'field_lmd_contributor',
    'field_lmd_description' => 'field_lmd_description',
    'field_lmd_extent' => 'field_lmd_extent',
    'field_lmd_format' => 'field_lmd_format',
    'field_lmd_genre' => 'field_lmd_genre',
    'field_lmd_isbn_no' => 'field_lmd_isbn_no',
    'field_lmd_language' => 'field_lmd_language',
    'field_lmd_later_title' => 'field_lmd_later_title',
    'field_lmd_musician' => 'field_lmd_musician',
    'field_lmd_original_title' => 'field_lmd_original_title',
    'field_lmd_pegi_mark' => 'field_lmd_pegi_mark',
    'field_lmd_previous_title' => 'field_lmd_previous_title',
    'field_lmd_publisher' => 'field_lmd_publisher',
    'field_lmd_referenced_by' => 'field_lmd_referenced_by',
    'field_lmd_rights' => 'field_lmd_rights',
    'field_lmd_spatial' => 'field_lmd_spatial',
    'field_lmd_speech' => 'field_lmd_speech',
    'field_lmd_subtitle' => 'field_lmd_subtitle',
    'field_lmd_type' => 'field_lmd_type',
    'title' => 'title',
  );
  $translatables['local_materials_search'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Alle'),
  );
  $export['local_materials_search'] = $view;

  return $export;
}
