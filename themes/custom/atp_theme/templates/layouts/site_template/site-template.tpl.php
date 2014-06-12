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
      <div class="top">
        <div class="inner">
          <?php print $content['header']; ?>
          <nav class="toggle-menu"></nav>
        </div>
      </div>
      <?php if (!empty($content['header-bottom'])): ?>
        <div class="bottom">
          <div class="inner"><?php print $content['header-bottom']; ?></div>
        </div>
      <?php endif; ?>
    </header>
  <?php endif; ?>
  <?php if (!empty($content['main'])): ?>
    <section id="main">
      <?php print render($content['main']); ?>
    </section>
  <?php endif; ?>
  <?php if (!empty($content['footer'])): ?>
    <footer>
      <section>
        <?php print $content['footer']; ?>
      </section>
      <section>
        <?php print $content['bottom']; ?>
      </section>
    </footer>
  <?php endif; ?>
</div>
