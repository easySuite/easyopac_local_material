<?php

/**
 * @file
 * Template to render objects from the Ting database.
 *
 * @var string $attributes
 */
?>

<div class="<?php print $classes; ?> clearfix view-mode-full"<?php print $attributes; ?>>
  <?php echo render($content); ?>
</div>
