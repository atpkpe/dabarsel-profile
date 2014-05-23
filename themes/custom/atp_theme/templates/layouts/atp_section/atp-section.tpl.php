<?php
/**
 * @file
 * This is the one column template
 */
?>

<section class="onecol" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
<?php if (!empty($content['row1'])): ?>
  <section class="section-row"><?php print $content['row1']; ?></section>
<?php endif; ?>
<?php if (!empty($content['row2'])): ?>
  <section class="section-row"><?php print $content['row2']; ?></section>
<?php endif; ?>
<?php if (!empty($content['row3'])): ?>
  <section class="section-row"><?php print $content['row3']; ?></section>
<?php endif; ?>
<?php if (!empty($content['row4'])): ?>
  <section class="section-row"><?php print $content['row4']; ?></section>
<?php endif; ?>
<?php if (!empty($content['row5'])): ?>
  <section class="section-row"><?php print $content['row5']; ?></section>
<?php endif; ?>
</section>
