/**
 * Created by mikkel on 6/11/14.
 */

(function ($) {

  Drupal.wysiwyg.plugins['sas_diag'] = {

    /**
     * Return whether the passed node belongs to this plugin (note that "node" in this context is a JQuery node, not a Drupal node).
     *
     * We identify code managed by this sas_diag plugin by giving it the HTML class
     * 'atp_sas-sas_diag'.
     */
    isNode: function(node) {
      res = $(node).is('img.atp_sas-sas_diag');
      return ($(node).is('img.atp_sas-sas_diag'));
    },

    /**
     * Invoke is called when the toolbar button is clicked.
     */
    invoke: function(data, settings, instanceId) {
      // Typically, an icon might be added to the WYSIWYG, which HTML gets added
      // to the plain-text version.
      if (data.format == 'html') {
        var content = this._getPlaceholder(settings);
      }
      else {
        var content = '<!--atp_sas-->';
      }
      if (typeof content != 'undefined') {
        Drupal.wysiwyg.instances[instanceId].insert(content);
      }
    },

    /**
     * Replace all <!--atp_sas--> tags with the icon.
     */
    attach: function(content, settings, instanceId) {
      content = content.replace(/<!--atp_sas-->/g, this._getPlaceholder(settings));
      return content;
    },

    /**
     * Replace the icons with <!--atp_sas--> tags in content upon detaching editor.
     */
    detach: function(content, settings, instanceId) {
      var $content = $('<div>' + content + '</div>');
      $.each($('img.atp_sas-sas_diag', $content), function (i, elem) {
        elem.parentNode.insertBefore(document.createComment('atp_sas'), elem);
        elem.parentNode.removeChild(elem);
      });
      return $content.html();
    },

    /**
     * Helper function to return a HTML placeholder.
     *
     * Here we provide an image to visually represent the hidden HTML in the Wysiwyg editor.
     */
    _getPlaceholder: function (settings) {
      return '<img src="' + settings.path + '/images/sas_diag.content_icon.png" alt="&lt;--atp_sas-&gt;" title="&lt;--atp_sas--&gt;" class="atp_sas-sas_diag drupal-content" />';
    }
  };

})(jQuery);