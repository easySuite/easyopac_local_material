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
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Object Author',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
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
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Object Type',
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
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Object year',
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
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Subjects',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
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
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Audience',
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
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'display_count' => 1,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'title_override' => 0,
    'title' => 'Language',
    'soft_limit' => '5',
    'nofollow' => '1',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'ding_wysiwyg',
    ),
  );
  $export['search_api@local_material_index:block:field_lmd_language'] = $facet;

  return $export;
}
