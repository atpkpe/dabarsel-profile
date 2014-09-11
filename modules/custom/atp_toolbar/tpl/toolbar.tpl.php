<nav class="toolbox">
  <a class="print" href="javascript:window.print();"><?php print t("Print") ?></a>
  <a class="share"><?php print t("Share") ?></a>
  <div class="addthis_toolbox addthis_default_style">
    <a class="addthis_button_email"><?php print t("E-mail") ?></a>
    <? if (!empty($feed_url)): ?>
      <a href="<?php echo $feed_url ?>" class="rss" target="_blank"><span></span><?php print t("RSS") ?></a>
    <? endif; ?>
    <a class="addthis_button_facebook"><?php print t("Facebook") ?></a>
    <a class="addthis_button_linkedin"><?php print t("LinkedIn") ?></a>
    <a class="addthis_button_twitter"><?php print t("Twitter") ?></a>
    <a class="addthis_button_more"><?php print t("More") ?></a>
  </div>
</nav>
<script src="http://s7.addthis.com/js/300/addthis_widget.js#pubid=ra-53a2a6da56faf5a0" type="text/javascript"></script>
