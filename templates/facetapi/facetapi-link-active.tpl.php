<?php

/**
 * @file
 * Template file for overriding default FacetAPI Active Link.
 *
 * @var string $text
 * @var string $count
 */

$common_attr_id = "edit-$text";
$original_options = $options;
$options = [
  'html' => TRUE,
  'absolute' => TRUE,
  'attributes' => [
    'title' => $text,
    'id' => !empty($original_options['attributes']['id']) ? $original_options['attributes']['id'] : '',
    'rel' => !empty($original_options['attributes']['rel']) ? $original_options['attributes']['rel'] : '',
  ],
  'query' => !empty($original_options['query']) ? $original_options['query'] : [],
];
?>

<div
  class="form-item form-type-checkbox form-item-<?php print $text; ?> selected-checkbox">
  <input type="checkbox" id="<?php print $common_attr_id; ?>"
         name="type[<?php print $text; ?>]" value="<?php print $text; ?>"
         checked="checked" class="form-checkbox">
  <label class="option" for="<?php print $common_attr_id; ?>">
    <?php print l(strtolower($text) . '<span class="count"> (' . $count . ')</span>', $path, $options); ?>
  </label>
</div>
