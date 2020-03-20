<?php

/**
 * @file
 * Template file for overriding default FacetAPI Inactive Link.
 *
 * @var string $text
 * @var string $count
 */

$text = strtolower($text);
$common_attr_id = "edit-$text";
$original_options = $options;
$options = [
  'html' => TRUE,
  'absolute' => TRUE,
  'attributes' => [
    'title' => $text,
    'id' => $original_options['attributes']['id'],
    'rel' => $original_options['attributes']['rel'],
  ],
  'query' => $original_options['query'],
];
?>

<div class="form-item form-type-checkbox form-item-<?php print $text; ?> unselected-checkbox">
  <input type="checkbox" id="<?php print $common_attr_id; ?>" name="creator[<?php print $text; ?>]" value="<?php print $text; ?>" class="form-checkbox">
  <label class="option" for="<?php print $common_attr_id; ?>">
    <?php print l("$text <span class='count'>($count)</span>", $path, $options); ?>
  </label>
</div>
