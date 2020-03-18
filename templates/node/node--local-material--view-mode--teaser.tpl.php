<?php

/**
 * @file
 * Template to render objects from the Ting database.
 *
 * Available variables:
 * @var array $content
 * @var array $attributes
 */
?>

<div
  class="<?php print $classes; ?> clearfix list-item-style"<?php print $attributes; ?>>

  <div class="inner">
    <a href="<?php print url('node/' . $node->nid); ?>">
      <div
        class="ting-object-left field-group-format group-ting-left-col-search">
        <?php print render($content['group_materials_left_col_search']['field_lm_cover']); ?>
      </div>
    </a>

    <div
      class="ting-object-right field-group-format group-ting-right-col-search">
      <?php print render($content['group_materials_right_col_search']['field_lm_object_title']); ?>
      <?php print render($content['group_materials_right_col_search']['field_lm_object_author']); ?>
      <?php print render($content['group_materials_right_col_search']['group_info']); ?>
    </div>
  </div>
</div>
