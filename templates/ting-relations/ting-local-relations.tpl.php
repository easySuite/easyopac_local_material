<?php
/**
 * @file
 * Default template file for ting_relations theme function.
 *
 * Available variables:
 *   - $attributes: Mainly string with the rendered class variables.
 *   - $attributes_array: Array with the attributes.
 *   - $title: The relation group title.
 *   - $source: The name of the type of relations in this group.
 *   - $relations: The relations inside this groups of relations, which should
 *     be rendered as ting_relation.
 */
$a = 1;
?>
<h2><?php print $title; ?></h2>
<div class="field-group-format-wrapper" style="display: none;">
<?php foreach ($items as $item) : ?>
  <?php print render($item); ?>
<?php endforeach; ?>
</div>
