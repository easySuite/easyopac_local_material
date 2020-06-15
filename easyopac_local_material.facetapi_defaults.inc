<?php
/**
 * @file
 * easyopac_local_material.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function easyopac_local_material_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lm_object_author';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lm_object_author';
  $facet->enabled = TRUE;
  $facet->hash = 'Hs0FKlNg8aNisHYsfpyA5BzIYMlyLF1E';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'filter_depth' => array(
        'status' => 0,
        'weight' => '-43',
      ),
      'hide_if_selected' => array(
        'status' => 0,
        'weight' => '-42',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 1,
    'title' => 'Forfatter',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
    'exclude' => '',
    'regex' => 0,
    'invert' => 0,
    'show_minimum_items' => 2,
    'depth' => 0,
    'parents' => 0,
  );
  $export['search_api@local_material_index:block:field_lm_object_author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lm_object_type';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lm_object_type';
  $facet->enabled = TRUE;
  $facet->hash = 'UAHNQFUax2u2z9VmPDvG03oj9CnwJhv0';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 1,
    'title' => 'Materialetype',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
  );
  $export['search_api@local_material_index:block:field_lm_object_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lm_object_year';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lm_object_year';
  $facet->enabled = TRUE;
  $facet->hash = '0UQXMY0nMHaDOUFQ3cOmAiOK5m3ypuxj';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 'active',
      'count' => 'count',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'display' => '-50',
      'active' => '-49',
      'count' => '-48',
      'natural' => '-47',
      'indexed' => '-46',
    ),
    'sort_order' => array(
      'display' => '3',
      'active' => '3',
      'count' => '3',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 1,
    'title' => 'Årstal',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
  );
  $export['search_api@local_material_index:block:field_lm_object_year'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lm_subjects';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lm_subjects';
  $facet->enabled = TRUE;
  $facet->hash = 'IjsR3dyuSFuT1hZizgCFW8J0thfGikeg';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'filter_depth' => array(
        'status' => 0,
        'weight' => '-43',
      ),
      'hide_if_selected' => array(
        'status' => 0,
        'weight' => '-42',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 1,
    'title' => 'Emne',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
    'exclude' => '',
    'regex' => 0,
    'invert' => 0,
    'show_minimum_items' => 2,
    'depth' => 0,
    'parents' => 0,
  );
  $export['search_api@local_material_index:block:field_lm_subjects'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lmd_audience';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lmd_audience';
  $facet->enabled = TRUE;
  $facet->hash = 'AEsNjofjZ3cZ7yI6WOMO1St5WIaI0yHs';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 1,
    'title' => 'Målgruppe',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
  );
  $export['search_api@local_material_index:block:field_lmd_audience'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lmd_contributor';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lmd_contributor';
  $facet->enabled = TRUE;
  $facet->hash = 'LDNPYISfZYWWjb0e4pMdiUxy2X0w8W6Z';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Contributor',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@local_material_index:block:field_lmd_contributor'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lmd_language';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lmd_language';
  $facet->enabled = TRUE;
  $facet->hash = '0NGDoTU308RSgPV0RvS7aUBB3rghPvIn';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 1,
    'title' => 'Sprog',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
  );
  $export['search_api@local_material_index:block:field_lmd_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@local_material_index:block:field_lmd_spatial';
  $facet->searcher = 'search_api@local_material_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lmd_spatial';
  $facet->enabled = TRUE;
  $facet->hash = '3wFETL3CPPyHASIhblmBGa01kDPWRkqW';
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'display_count' => TRUE,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Spatial',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@local_material_index:block:field_lmd_spatial'] = $facet;

  return $export;
}
