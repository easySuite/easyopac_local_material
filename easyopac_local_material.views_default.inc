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
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 1;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['query']['options']['parse_mode'] = 'direct';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Din søgning desværre ikke gav noget resultat, men vi vil gerne hjælpe dig med at komme videre!

Spørg os på biblioteket eller se kontaktoplysningerne til biblioteket nederst på siden.

Du kan også søge videre på <a href="http://bibliotek.dk/">Bibliotek.dk</a>';
  $handler->display->display_options['empty']['area']['format'] = 'ding_wysiwyg';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_local_material_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Indexed Node: Author (for sort) */
  $handler->display->display_options['sorts']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['table'] = 'search_api_index_local_material_index';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['sorts']['search_api_aggregation_2']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_aggregation_2']['expose']['label'] = 'Author (for sort)';
  /* Sort criterion: Indexed Node: Title (for sort) */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_local_material_index';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_aggregation_1']['expose']['label'] = 'Title (for sort)';
  /* Sort criterion: Indexed Node: Year (for sort) */
  $handler->display->display_options['sorts']['search_api_aggregation_3']['id'] = 'search_api_aggregation_3';
  $handler->display->display_options['sorts']['search_api_aggregation_3']['table'] = 'search_api_index_local_material_index';
  $handler->display->display_options['sorts']['search_api_aggregation_3']['field'] = 'search_api_aggregation_3';
  $handler->display->display_options['sorts']['search_api_aggregation_3']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_aggregation_3']['expose']['label'] = 'Year (for sort)';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_local_material_index';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'field_lm_issues' => 'field_lm_issues',
    'field_lm_object_abstract' => 'field_lm_object_abstract',
    'field_lm_object_author:name' => 'field_lm_object_author:name',
    'field_lm_object_title' => 'field_lm_object_title',
    'field_lm_object_type' => 'field_lm_object_type',
    'field_lm_object_year' => 'field_lm_object_year',
    'field_lm_on_this_site' => 'field_lm_on_this_site',
    'field_lm_series' => 'field_lm_series',
    'field_lm_subjects:name' => 'field_lm_subjects:name',
    'field_lmd_age' => 'field_lmd_age',
    'field_lmd_available_in' => 'field_lmd_available_in',
    'field_lmd_classification' => 'field_lmd_classification',
    'field_lmd_contains' => 'field_lmd_contains',
    'field_lmd_contributor:name' => 'field_lmd_contributor:name',
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
    'field_lmd_publisher:name' => 'field_lmd_publisher:name',
    'field_lmd_referenced_by' => 'field_lmd_referenced_by',
    'field_lmd_rights' => 'field_lmd_rights',
    'field_lmd_spatial:name' => 'field_lmd_spatial:name',
    'field_lmd_speech' => 'field_lmd_speech',
    'field_lmd_subtitle' => 'field_lmd_subtitle',
    'field_lmd_type' => 'field_lmd_type',
    'title' => 'title',
  );
  $handler->display->display_options['arguments']['search_api_views_fulltext']['conjunction'] = 'OR';
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
    t('Din søgning desværre ikke gav noget resultat, men vi vil gerne hjælpe dig med at komme videre!

Spørg os på biblioteket eller se kontaktoplysningerne til biblioteket nederst på siden.

Du kan også søge videre på <a href="http://bibliotek.dk/">Bibliotek.dk</a>'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Author (for sort)'),
    t('Title (for sort)'),
    t('Year (for sort)'),
    t('Alle'),
  );
  $export['local_materials_search'] = $view;

  return $export;
}
