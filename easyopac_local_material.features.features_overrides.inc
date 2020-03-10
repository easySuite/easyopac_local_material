<?php
/**
 * @file
 * easyopac_local_material.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function easyopac_local_material_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-013526d8-9dca-420c-94bc-44a6ce714438"] = (object) array(
      'pid' => 'new-013526d8-9dca-420c-94bc-44a6ce714438',
      'panel' => 'left_sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-IjsR3dyuSFuT1hZizgCFW8J0thfGikeg',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => 'Emne',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '013526d8-9dca-420c-94bc-44a6ce714438',
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-06e03f81-aacd-462e-be56-7cd9bcd2e5dc"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-097acc39-287b-48dd-9622-ca3098cc478c"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-15ec2ba0-fa7c-4b73-9622-52aef322d9ff"] = (object) array(
      'pid' => 'new-15ec2ba0-fa7c-4b73-9622-52aef322d9ff',
      'panel' => 'left_sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-0NGDoTU308RSgPV0RvS7aUBB3rghPvIn',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => 'Sprog',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '15ec2ba0-fa7c-4b73-9622-52aef322d9ff',
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-2704bc72-3b4d-49cb-9781-5817c49e85a8"] = (object) array(
      'pid' => 'new-2704bc72-3b4d-49cb-9781-5817c49e85a8',
      'panel' => 'left_sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-UAHNQFUax2u2z9VmPDvG03oj9CnwJhv0',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '2704bc72-3b4d-49cb-9781-5817c49e85a8',
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-62b2a0ee-b45a-43f1-9425-10fba6056ca8"] = (object) array(
      'pid' => 'new-62b2a0ee-b45a-43f1-9425-10fba6056ca8',
      'panel' => 'left_sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-AEsNjofjZ3cZ7yI6WOMO1St5WIaI0yHs',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => 'Målgruppe',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '62b2a0ee-b45a-43f1-9425-10fba6056ca8',
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-8ec7fcdf-c3fa-4a98-a361-32e0895d4a58"] = (object) array(
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
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-a9a2583a-32e3-4eae-ad21-9de81854be56"] = (object) array(
      'pid' => 'new-a9a2583a-32e3-4eae-ad21-9de81854be56',
      'panel' => 'left_sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-0UQXMY0nMHaDOUFQ3cOmAiOK5m3ypuxj',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => 'Årstal',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => 'a9a2583a-32e3-4eae-ad21-9de81854be56',
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-aeacf057-37e1-4b53-ad66-174c541b96ef"] = (object) array(
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
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-d998c42f-f7b2-4140-91d3-b1e3d049c04c"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-e97d9217-0818-416a-80a5-233c205be763"] = (object) array(
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
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-e9990f4c-8c69-40e2-ba6b-66cfdea5249a"] = (object) array(
      'pid' => 'new-e9990f4c-8c69-40e2-ba6b-66cfdea5249a',
      'panel' => 'left_sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-Hs0FKlNg8aNisHYsfpyA5BzIYMlyLF1E',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => 'Forfatter',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'e9990f4c-8c69-40e2-ba6b-66cfdea5249a',
    );
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|left_sidebar|0"] = 'new-e97d9217-0818-416a-80a5-233c205be763';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|left_sidebar|1"] = 'new-2704bc72-3b4d-49cb-9781-5817c49e85a8';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|left_sidebar|2"] = 'new-e9990f4c-8c69-40e2-ba6b-66cfdea5249a';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|left_sidebar|3"] = 'new-013526d8-9dca-420c-94bc-44a6ce714438';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|left_sidebar|4"] = 'new-15ec2ba0-fa7c-4b73-9622-52aef322d9ff';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|left_sidebar|5"] = 'new-62b2a0ee-b45a-43f1-9425-10fba6056ca8';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|left_sidebar|6"] = 'new-a9a2583a-32e3-4eae-ad21-9de81854be56';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|main_content|0"] = 'new-8ec7fcdf-c3fa-4a98-a361-32e0895d4a58';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|panels|main_content|1"] = 'new-aeacf057-37e1-4b53-ad66-174c541b96ef';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|storage_id"] = 'search_node_panel_context';
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|storage_type"] = 'page_manager';

 return $overrides;
}
