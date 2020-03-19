<?php

/**
 * @file
 * Default implementation of ting_relation template file.
 *
 * Available variables:
 *   - $title: Relation title string.
 *   - $abstract: Short description of the relation (from the entities
 *     description field or abstract field).
 *   - $online: Array with title, url, external to more information online.
 *   - $fulltext_link: Link to docbook format inserted by ting_fulltext module.
 */
?>
<div class="ting-relation ting-object-related-item">
  <h4><?php print $item['title'] ?></h4>
  <?php if (isset($item['abstract'])) :?>
    <div class="abstract"><?php print $item['abstract']; ?></div>
  <?php endif; ?>
  <?php if (isset($item['online']['url'])) :?>
    <a class="online_url" target="_blank" href="<?php print $item['online']['url'] ?>"><?php print $item['online']['title']; ?></a>
  <?php endif; ?>
  <?php if (isset($fulltext_link)) :?>
    <?php print $fulltext_link; ?>
  <?php endif; ?>
</div>
