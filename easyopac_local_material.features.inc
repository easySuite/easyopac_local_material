<?php
/**
 * @file
 * easyopac_local_material.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easyopac_local_material_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function easyopac_local_material_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function easyopac_local_material_default_page_manager_handlers_alter(&$data) {
  if (isset($data['search_node_panel_context'])) {
    $data['search_node_panel_context']->conf['display']->content['new-013526d8-9dca-420c-94bc-44a6ce714438'] = (object) array(
          'pid' => 'new-013526d8-9dca-420c-94bc-44a6ce714438',
          'panel' => 'left_sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-IjsR3dyuSFuT1hZizgCFW8J0thfGikeg',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Emne',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '013526d8-9dca-420c-94bc-44a6ce714438',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-15ec2ba0-fa7c-4b73-9622-52aef322d9ff'] = (object) array(
          'pid' => 'new-15ec2ba0-fa7c-4b73-9622-52aef322d9ff',
          'panel' => 'left_sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-0NGDoTU308RSgPV0RvS7aUBB3rghPvIn',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Sprog',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
          'uuid' => '15ec2ba0-fa7c-4b73-9622-52aef322d9ff',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-2704bc72-3b4d-49cb-9781-5817c49e85a8'] = (object) array(
          'pid' => 'new-2704bc72-3b4d-49cb-9781-5817c49e85a8',
          'panel' => 'left_sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-UAHNQFUax2u2z9VmPDvG03oj9CnwJhv0',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Materialetype',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '2704bc72-3b4d-49cb-9781-5817c49e85a8',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-62b2a0ee-b45a-43f1-9425-10fba6056ca8'] = (object) array(
          'pid' => 'new-62b2a0ee-b45a-43f1-9425-10fba6056ca8',
          'panel' => 'left_sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-AEsNjofjZ3cZ7yI6WOMO1St5WIaI0yHs',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Målgruppe',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 5,
          'locks' => array(),
          'uuid' => '62b2a0ee-b45a-43f1-9425-10fba6056ca8',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-8ec7fcdf-c3fa-4a98-a361-32e0895d4a58'] = (object) array(
          'pid' => 'new-8ec7fcdf-c3fa-4a98-a361-32e0895d4a58',
          'panel' => 'main_content',
          'type' => 'views',
          'subtype' => 'local_materials_search',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_pager_settings' => 0,
            'use_pager' => 1,
            'nodes_per_page' => 0,
            'pager_id' => 0,
            'offset' => 0,
            'more_link' => 0,
            'feed_icons' => 0,
            'panel_args' => 0,
            'link_to_view' => 0,
            'args' => '%2',
            'url' => '',
            'display' => 'default',
            'context' => array(
              0 => 'argument_string_1.raw',
            ),
            'override_title' => 0,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '8ec7fcdf-c3fa-4a98-a361-32e0895d4a58',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-a9a2583a-32e3-4eae-ad21-9de81854be56'] = (object) array(
          'pid' => 'new-a9a2583a-32e3-4eae-ad21-9de81854be56',
          'panel' => 'left_sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-0UQXMY0nMHaDOUFQ3cOmAiOK5m3ypuxj',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Årstal',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 6,
          'locks' => array(),
          'uuid' => 'a9a2583a-32e3-4eae-ad21-9de81854be56',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-aeacf057-37e1-4b53-ad66-174c541b96ef'] = (object) array(
          'pid' => 'new-aeacf057-37e1-4b53-ad66-174c541b96ef',
          'panel' => 'main_content',
          'type' => 'custom',
          'subtype' => 'custom',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => 'Fandt du',
            'title' => 'Fandt du ikke hvad du søgte?',
            'title_heading' => 'h2',
            'body' => '<p>Spørg os på biblioteket eller få hjælp på <a href="http://biblioteksvagten.dk/" target="_blank">biblioteksvagten.dk</a><br />Du kan også søge videre på <a href="https://bibliotek.dk" target="_blank">bibliotek.dk</a></p>',
            'format' => 'ding_wysiwyg',
            'substitute' => 1,
          ),
          'cache' => array(),
          'css' => array(
            'css_id' => '',
            'css_class' => 'search-help',
          ),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'aeacf057-37e1-4b53-ad66-174c541b96ef',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-e97d9217-0818-416a-80a5-233c205be763'] = (object) array(
          'pid' => 'new-e97d9217-0818-416a-80a5-233c205be763',
          'panel' => 'left_sidebar',
          'type' => 'local_search_result_count',
          'subtype' => 'local_search_result_count',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'e97d9217-0818-416a-80a5-233c205be763',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->content['new-e9990f4c-8c69-40e2-ba6b-66cfdea5249a'] = (object) array(
          'pid' => 'new-e9990f4c-8c69-40e2-ba6b-66cfdea5249a',
          'panel' => 'left_sidebar',
          'type' => 'block',
          'subtype' => 'facetapi-Hs0FKlNg8aNisHYsfpyA5BzIYMlyLF1E',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Forfatter',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'e9990f4c-8c69-40e2-ba6b-66cfdea5249a',
        ); /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->panels['left_sidebar']['0'] = 'new-e97d9217-0818-416a-80a5-233c205be763'; /* WAS: 'new-06e03f81-aacd-462e-be56-7cd9bcd2e5dc' */
    $data['search_node_panel_context']->conf['display']->panels['left_sidebar']['1'] = 'new-2704bc72-3b4d-49cb-9781-5817c49e85a8'; /* WAS: 'new-d998c42f-f7b2-4140-91d3-b1e3d049c04c' */
    $data['search_node_panel_context']->conf['display']->panels['left_sidebar']['2'] = 'new-e9990f4c-8c69-40e2-ba6b-66cfdea5249a'; /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->panels['left_sidebar']['3'] = 'new-013526d8-9dca-420c-94bc-44a6ce714438'; /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->panels['left_sidebar']['4'] = 'new-15ec2ba0-fa7c-4b73-9622-52aef322d9ff'; /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->panels['left_sidebar']['5'] = 'new-62b2a0ee-b45a-43f1-9425-10fba6056ca8'; /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->panels['left_sidebar']['6'] = 'new-a9a2583a-32e3-4eae-ad21-9de81854be56'; /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->panels['main_content']['0'] = 'new-8ec7fcdf-c3fa-4a98-a361-32e0895d4a58'; /* WAS: 'new-097acc39-287b-48dd-9622-ca3098cc478c' */
    $data['search_node_panel_context']->conf['display']->panels['main_content']['1'] = 'new-aeacf057-37e1-4b53-ad66-174c541b96ef'; /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->storage_id = 'search_node_panel_context'; /* WAS: '' */
    $data['search_node_panel_context']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
    unset($data['search_node_panel_context']->conf['display']->content['new-06e03f81-aacd-462e-be56-7cd9bcd2e5dc']);
    unset($data['search_node_panel_context']->conf['display']->content['new-097acc39-287b-48dd-9622-ca3098cc478c']);
    unset($data['search_node_panel_context']->conf['display']->content['new-d998c42f-f7b2-4140-91d3-b1e3d049c04c']);
  }
}

/**
 * Implements hook_node_info().
 */
function easyopac_local_material_node_info() {
  $items = array(
    'local_material' => array(
      'name' => t('Local Material'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function easyopac_local_material_default_search_api_index() {
  $items = array();
  $items['local_material_index'] = entity_import('search_api_index', '{
    "name" : "Local Material Index",
    "machine_name" : "local_material_index",
    "description" : null,
    "server" : "local_materials_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "local_material" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_lm_issues" : { "type" : "text" },
        "field_lm_object_abstract" : { "type" : "text" },
        "field_lm_object_author" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_lm_object_title" : { "type" : "text" },
        "field_lm_object_type" : { "type" : "text" },
        "field_lm_object_year" : { "type" : "text" },
        "field_lm_on_this_site" : { "type" : "text" },
        "field_lm_series" : { "type" : "text" },
        "field_lm_subjects" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_lm_subjects:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lm_subjects:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_lm_ting_relations" : { "type" : "text" },
        "field_lmd_age" : { "type" : "text" },
        "field_lmd_audience" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_lmd_available_in" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_classification" : { "type" : "text" },
        "field_lmd_contains" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_contributor" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_extent" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_format" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_genre" : { "type" : "text" },
        "field_lmd_isbn_no" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_language" : { "type" : "text" },
        "field_lmd_later_title" : { "type" : "text" },
        "field_lmd_musician" : { "type" : "text" },
        "field_lmd_original_title" : { "type" : "text" },
        "field_lmd_pegi_mark" : { "type" : "text" },
        "field_lmd_previous_title" : { "type" : "text" },
        "field_lmd_publisher" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_referenced_by" : { "type" : "text" },
        "field_lmd_rights" : { "type" : "text" },
        "field_lmd_spatial" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lmd_speech" : { "type" : "text" },
        "field_lmd_subject" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_lmd_subtitle" : { "type" : "text" },
        "field_lmd_type" : { "type" : "text" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "ding_frontend_published_filter" : { "status" : 0, "weight" : "-10", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "ding_frontend_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "ding_frontend_role_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "match_type" : "partial", "roles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "New Age Field",
                "type" : "fulltext",
                "fields" : [ "field_lmd_age" ],
                "description" : "A Fulltext aggregation of the following fields: Age."
              }
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_lm_issues" : true,
              "field_lm_object_abstract" : true,
              "field_lm_object_title" : true,
              "field_lm_object_type" : true,
              "field_lm_object_year" : true,
              "field_lm_on_this_site" : true,
              "field_lm_series" : true,
              "field_lm_ting_relations" : true,
              "field_lmd_age" : true,
              "field_lmd_available_in" : true,
              "field_lmd_classification" : true,
              "field_lmd_contains" : true,
              "field_lmd_contributor" : true,
              "field_lmd_description" : true,
              "field_lmd_extent" : true,
              "field_lmd_format" : true,
              "field_lmd_genre" : true,
              "field_lmd_isbn_no" : true,
              "field_lmd_language" : true,
              "field_lmd_later_title" : true,
              "field_lmd_musician" : true,
              "field_lmd_original_title" : true,
              "field_lmd_pegi_mark" : true,
              "field_lmd_previous_title" : true,
              "field_lmd_publisher" : true,
              "field_lmd_referenced_by" : true,
              "field_lmd_rights" : true,
              "field_lmd_spatial" : true,
              "field_lmd_speech" : true,
              "field_lmd_subtitle" : true,
              "field_lmd_type" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_lm_issues" : true,
              "field_lm_object_abstract" : true,
              "field_lm_object_title" : true,
              "field_lm_object_type" : true,
              "field_lm_object_year" : true,
              "field_lm_on_this_site" : true,
              "field_lm_series" : true,
              "field_lm_ting_relations" : true,
              "field_lmd_age" : true,
              "field_lmd_available_in" : true,
              "field_lmd_classification" : true,
              "field_lmd_contains" : true,
              "field_lmd_contributor" : true,
              "field_lmd_description" : true,
              "field_lmd_extent" : true,
              "field_lmd_format" : true,
              "field_lmd_genre" : true,
              "field_lmd_isbn_no" : true,
              "field_lmd_language" : true,
              "field_lmd_later_title" : true,
              "field_lmd_musician" : true,
              "field_lmd_original_title" : true,
              "field_lmd_pegi_mark" : true,
              "field_lmd_previous_title" : true,
              "field_lmd_publisher" : true,
              "field_lmd_referenced_by" : true,
              "field_lmd_rights" : true,
              "field_lmd_spatial" : true,
              "field_lmd_speech" : true,
              "field_lmd_subtitle" : true,
              "field_lmd_type" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "field_lm_issues" : true,
              "field_lm_object_abstract" : true,
              "field_lm_object_title" : true,
              "field_lm_object_type" : true,
              "field_lm_object_year" : true,
              "field_lm_on_this_site" : true,
              "field_lm_series" : true,
              "field_lm_ting_relations" : true,
              "field_lmd_age" : true,
              "field_lmd_available_in" : true,
              "field_lmd_classification" : true,
              "field_lmd_contains" : true,
              "field_lmd_contributor" : true,
              "field_lmd_description" : true,
              "field_lmd_extent" : true,
              "field_lmd_format" : true,
              "field_lmd_genre" : true,
              "field_lmd_isbn_no" : true,
              "field_lmd_language" : true,
              "field_lmd_later_title" : true,
              "field_lmd_musician" : true,
              "field_lmd_original_title" : true,
              "field_lmd_pegi_mark" : true,
              "field_lmd_previous_title" : true,
              "field_lmd_publisher" : true,
              "field_lmd_referenced_by" : true,
              "field_lmd_rights" : true,
              "field_lmd_spatial" : true,
              "field_lmd_speech" : true,
              "field_lmd_subtitle" : true,
              "field_lmd_type" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_lm_issues" : true,
              "field_lm_object_abstract" : true,
              "field_lm_object_title" : true,
              "field_lm_object_type" : true,
              "field_lm_object_year" : true,
              "field_lm_on_this_site" : true,
              "field_lm_series" : true,
              "field_lm_ting_relations" : true,
              "field_lmd_available_in" : true,
              "field_lmd_classification" : true,
              "field_lmd_contains" : true,
              "field_lmd_contributor" : true,
              "field_lmd_description" : true,
              "field_lmd_extent" : true,
              "field_lmd_format" : true,
              "field_lmd_genre" : true,
              "field_lmd_isbn_no" : true,
              "field_lmd_language" : true,
              "field_lmd_later_title" : true,
              "field_lmd_musician" : true,
              "field_lmd_original_title" : true,
              "field_lmd_pegi_mark" : true,
              "field_lmd_previous_title" : true,
              "field_lmd_publisher" : true,
              "field_lmd_referenced_by" : true,
              "field_lmd_rights" : true,
              "field_lmd_spatial" : true,
              "field_lmd_speech" : true,
              "field_lmd_subtitle" : true,
              "field_lmd_type" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_lm_issues" : true,
              "field_lm_object_abstract" : true,
              "field_lm_object_title" : true,
              "field_lm_object_type" : true,
              "field_lm_object_year" : true,
              "field_lm_on_this_site" : true,
              "field_lm_series" : true,
              "field_lm_ting_relations" : true,
              "field_lmd_age" : true,
              "field_lmd_available_in" : true,
              "field_lmd_classification" : true,
              "field_lmd_contains" : true,
              "field_lmd_contributor" : true,
              "field_lmd_description" : true,
              "field_lmd_extent" : true,
              "field_lmd_format" : true,
              "field_lmd_genre" : true,
              "field_lmd_isbn_no" : true,
              "field_lmd_language" : true,
              "field_lmd_later_title" : true,
              "field_lmd_musician" : true,
              "field_lmd_original_title" : true,
              "field_lmd_pegi_mark" : true,
              "field_lmd_previous_title" : true,
              "field_lmd_publisher" : true,
              "field_lmd_referenced_by" : true,
              "field_lmd_rights" : true,
              "field_lmd_spatial" : true,
              "field_lmd_speech" : true,
              "field_lmd_subtitle" : true,
              "field_lmd_type" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function easyopac_local_material_default_search_api_server() {
  $items = array();
  $items['local_materials_server'] = entity_import('search_api_server', '{
    "name" : "Local Materials Server",
    "machine_name" : "local_materials_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "autocomplete" : { "suggest_suffix" : 1, "suggest_words" : 1 },
      "indexes" : { "local_material_index" : {
          "title" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0",
            "column" : "title"
          },
          "field_lm_issues" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_object_abstract" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_object_author" : {
            "table" : "search_api_db_local_material_index",
            "column" : "field_lm_object_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_lm_object_title" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_object_type" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_object_year" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_on_this_site" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_series" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_subjects" : {
            "table" : "search_api_db_local_material_index_field_lm_subjects",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_lm_ting_relations" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_age" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_audience" : {
            "table" : "search_api_db_local_material_index",
            "column" : "field_lmd_audience",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_lmd_available_in" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_classification" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_contains" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_contributor" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_description" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_extent" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_format" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_genre" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_isbn_no" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_language" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_later_title" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_musician" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_original_title" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_pegi_mark" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_previous_title" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_publisher" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_referenced_by" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_rights" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_spatial" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_speech" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_subject" : {
            "table" : "search_api_db_local_material_index_field_lmd_subject",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_lmd_subtitle" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lmd_type" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_local_material_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lm_subjects:tid" : {
            "table" : "search_api_db_local_material_index_field_lm_subjects_tid",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_lm_subjects:name" : {
            "table" : "search_api_db_local_material_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
