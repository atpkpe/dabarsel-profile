<div class="signup">
<!-- Begin MailChimp Signup Form -->
<div id="mc_embed_signup">
<form action="//atp.us8.list-manage.com/subscribe/post?u=06eff39be00dbfa57deb5d09a&amp;id=9bc98b0cb5" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
    <div id="mc_embed_signup_scroll">
	
<div class="mc-field-group">
	<label for="mce-EMAIL"><?php print t("E-mail address"); ?> <span class="asterisk">*</span>
</label>
	<input type="email" value="" name="EMAIL" class="required email form-text" id="mce-EMAIL">
</div>
<div class="mc-field-group">
	<label for="mce-FNAME"><?php print t("First name"); ?> </label>
	<input type="text" value="" name="FNAME" class="form-text" id="mce-FNAME">
</div>
<div class="mc-field-group">
	<label for="mce-LNAME"><?php print t("Last name"); ?> </label>
	<input type="text" value="" name="LNAME" class="form-text" id="mce-LNAME">
</div>
<div class="mc-field-group input-group">
    <h2><?php print t("Topics"); ?> </h2>
    <ul>
    <!-- Danish -->
    <?php if($lang == "da"): ?>
			<li><input type="checkbox" value="1" name="group[15001][1]" id="mce-group[15001]-15001-0"><label for="mce-group[15001]-15001-0"><?php print t("Faktum"); ?></label></li>
			<li><input type="checkbox" value="2" name="group[15001][2]" id="mce-group[15001]-15001-1"><label for="mce-group[15001]-15001-1"><?php print t("Investment"); ?></label></li>
			<li><input type="checkbox" value="4" name="group[15001][4]" id="mce-group[15001]-15001-2"><label for="mce-group[15001]-15001-2"><?php print t("Pension"); ?></label></li>
			<li><input type="checkbox" value="8" name="group[15001][8]" id="mce-group[15001]-15001-3"><label for="mce-group[15001]-15001-3"><?php print t("Jobs"); ?></label></li>
			<li><input type="checkbox" value="16" name="group[15001][16]" id="mce-group[15001]-15001-4"><label for="mce-group[15001]-15001-4"><?php print t("Udbetaling Danmark news"); ?></label></li>
			<li><input type="checkbox" value="32" name="group[15001][32]" id="mce-group[15001]-15001-5"><label for="mce-group[15001]-15001-5"><?php print t("Contracts from Udbetaling Danmark"); ?></label></li>
			<li><input type="checkbox" value="64" name="group[15001][64]" id="mce-group[15001]-15001-6"><label for="mce-group[15001]-15001-6"><?php print t("Press releases"); ?></label></li>
			<li><input type="checkbox" value="128" name="group[15001][128]" id="mce-group[15001]-15001-8"><label for="mce-group[15001]-15001-8"><?php print t("Results and reports"); ?></label></li>
		<?php elseif($lang == "en"): ?>
			<!-- English -->
			<li><input type="checkbox" value="256" name="group[15001][256]" id="mce-group[15001]-15001-7"><label for="mce-group[15001]-15001-7"><?php print t("Press releases"); ?></label></li>
		<?php endif; ?>
</ul>
</div>
	<div id="mce-responses" class="clear">
		<div class="response" id="mce-error-response" style="display:none"></div>
		<div class="response" id="mce-success-response" style="display:none"></div>
	</div>    <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
    <div style="position: absolute; left: -5000px;"><input type="text" name="b_06eff39be00dbfa57deb5d09a_9bc98b0cb5" tabindex="-1" value=""></div>
    <div class="clear"><input type="submit" value="<?php print t('Sign up'); ?>" name="subscribe" id="mc-embedded-subscribe" class="button form-submit"></div>
    </div>
</form>
</div>

<!--End mc_embed_signup-->
</div>
