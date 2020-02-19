<?php

/**
 * @file
 * Changed classes of field wrapper.
 *
 * @var bool $label_hidden
 * @var string $label
 *
 * @see template_preprocess_field()
 */
?>
<div class="subjects label <?php print $classes; ?>">
  <div class="inner">
    <?php if (!$label_hidden): ?>
      <strong><?php print $label ?></strong>
    <?php endif; ?>
    <?php foreach ($items as $delta => $item): ?>
      <?php print render($item); ?>
    <?php endforeach; ?>
  </div>
</div>
