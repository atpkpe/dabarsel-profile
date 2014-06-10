<?php
/**
 * @file
 * Template for ATP 2 column panel layout.
 *
 */
?>
<section class="twocol-right" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <article>
    <?php if (!empty($content['row1'])): ?>
      <div class="section-row"><?php print $content['row1']; ?></div>
    <?php endif; ?>
    <?php if (!empty($content['row2'])): ?>
      <div class="section-row"><?php print $content['row2']; ?></div>
    <?php endif; ?>
    <?php if (!empty($content['row3'])): ?>
      <div class="section-row"><?php print $content['row3']; ?></div>
    <?php endif; ?>
    <?php if (!empty($content['row4'])): ?>
      <div class="section-row"><?php print $content['row4']; ?></div>
    <?php endif; ?>
    <?php if (!empty($content['row5'])): ?>
      <div class="section-row"><?php print $content['row5']; ?></div>
    <?php endif; ?>
  </article>
  <aside>
    <?php print $content['left']; ?>
  </aside >
</div>
