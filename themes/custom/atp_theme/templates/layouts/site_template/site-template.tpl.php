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
          <nav class="show-mobile toggle-search"></nav>
          <nav class="show-mobile toggle-menu"></nav>
          <nav class="mobile-menu">
            <?php print $content['mobile-menu']; ?>
          </nav>
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
  <footer>
    <?php if (!empty($content['footer'])): ?>
    <section class="onecol">
      <?php print $content['footer']; ?>
    </section>
    <?php endif; ?>
    <?php if (!empty($content['bottom'])): ?>  
    <section class="bottom">
      <?php print $content['bottom']; ?>
    </section>
    <?php endif; ?>
  </footer>
</div>
