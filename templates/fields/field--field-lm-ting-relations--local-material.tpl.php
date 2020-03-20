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
<?php if (!$label_hidden): ?>
  <strong><?php print $label ?></strong>
<?php endif; ?>
<?php foreach ($items as $delta => $item): ?>
  <?php print render($item); ?>
<?php endforeach; ?>
