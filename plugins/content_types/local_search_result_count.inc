<?php

/**
 * @file
 * Panels pane to display page title with result count.
 */

$plugin = [
  'title' => t('Local search - page title'),
  'description' => t("Display title with result count."),
  'render callback' => 'easyopac_local_material_result_count_content_type_render',
  'category' => t('easyOPAC'),
  'required context' => new ctools_context_required(t('Keywords'), 'string'),
  'render last' => TRUE,
];

/**
 * Render the ting search results amount block.
 */
function easyopac_local_material_result_count_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $search_result = search_api_current_search();
  $search_result = reset($search_result);

  if (!empty($search_result)) {
    /** @var \SearchApiQuery $search_api_object */
    $search_api_object = $search_result[0];
    $search_key = $search_api_object->getOriginalKeys();
    $results = isset($search_result[1]['result count']) ? (int) $search_result[1]['result count'] : 0;

    $block->content = [
      'title' => [
        '#theme' => 'html_tag',
        '#tag' => 'h1',
        '#attributes' => ['class' => ['page-title']],
        '#value' => t('Search result'),
      ],
      'string' => [
        '#theme' => 'html_tag',
        '#tag' => 'span',
        '#attributes' => ['class' => ['search-string']],
        '#value' => '"' . $search_key . '"',
      ],
      'count' => [
        '#theme' => 'html_tag',
        '#tag' => 'span',
        '#attributes' => ['class' => ['count']],
        '#value' => '(' . format_plural($results, '1 Result', '@count Results') . ')',
      ],
    ];
  }

  return $block;
}

/**
 * Enable admin settings page.
 */
function easyopac_local_material_search_result_count_content_type_edit_form($form, &$form_state) {
  return $form;
}
