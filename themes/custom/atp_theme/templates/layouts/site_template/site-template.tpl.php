<?php
/**
 * @file
 * This layout is designed to be the site template layout when using
 * the Panels Everywhere module.
 */
?>
<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="page-wrapper">
  <?php if (!empty($content['header'])): ?>
    <header>
      <div class="inner"><?php print $content['header']; ?></div>
    </header>
  <?php endif; ?>
  <?php if (!empty($content['main'])): ?>
    <section id="main">
      <?php print render($content['main']); ?>
    </section>
  <?php endif; ?>
  <?php if (!empty($content['footer'])): ?>
    <footer>
      <div class="inner">
        <?php print $content['footer']; ?>
      </div>
    </footer>
  <?php endif; ?>
</div>