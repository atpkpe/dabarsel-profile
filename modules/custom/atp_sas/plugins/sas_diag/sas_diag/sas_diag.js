// $Id$
(function ($) {

  Drupal.wysiwyg.plugins['sas_diag'] = {

    /**
     * Return whether the passed node belongs to this plugin (note that "node" in this context is a JQuery node, not a Drupal node).
     *
     * We identify code managed by this example plugin by giving it the HTML class
     * 'sas_diag'.
     */
    isNode: function(node) {
      res = $(node).is('.sas_diag');
      return ($(node).is('.sas_diag'));
    },

    /**
     * Invoke is called when the toolbar button is clicked.
     */
    invoke: function(data, settings, instanceId) {
      // Typically, an icon might be added to the WYSIWYG, which HTML gets added
      // to the plain-text version.
      if (data.format == 'html') {
        var content = data.content;
      }
      else {
        var content = '<!--sasDiag-->';
      }
      if (typeof content !== 'undefined') {
        Drupal.wysiwyg.plugins.sas_diag.insert_form(data, settings, instanceId);
      }
    },
    insert_form: function (data, settings, instanceId) {
      // Location, where to fetch the dialog.
      var aurl = Drupal.settings.basePath + 'atp-sas/insert/ajax';
      var dialogdiv = $('<div id="example-insert-dialog"></div>');

      dialogdiv.load(aurl, function(){
        var dialogClose = function () {
          try {
            dialogdiv.dialog('destroy').remove();
          } catch (e) {};
        };

        var btns = {};
        btns[Drupal.t('Cancel')] = function () {
          $(this).dialog("close");
        };

        dialogdiv.find('.form-save-diagram').click(function(evt) {
          evt.preventDefault();
          settings.sasDiagId = $('#sas-diagrams input:radio:checked', dialogdiv).val();
          var content = Drupal.wysiwyg.plugins['sas_diag']._getPlaceholder(settings);
          Drupal.wysiwyg.instances[instanceId].insert(content);
          dialogdiv.dialog("close");
        });

        dialogdiv.dialog({
          modal: true,
          autoOpen: false,
          closeOnEscape: true,
          resizable: true,
          draggable: true,
          autoresize: true,
          namespace: 'jquery_ui_dialog_default_ns',
          dialogClass: 'jquery_ui_dialog-dialog',
          title: Drupal.t('Insert SAS diagram'),
          buttons: btns,
          width: '70%',
          close: dialogClose
        });

        dialogdiv.dialog("open");
        Drupal.attachBehaviors();
      });

    },
    /**
     * Replace all <!--sasDiag--> tags with the icon.
     */
    attach: function(content, settings, instanceId) {
      var reg = new RegExp("\\[sasDiag:"+ "([^\\]]+)" +"\\]", "gi");
      content = content.replace(reg, '<p>&nbsp;</p><p class="sas-diag sas-diag-id-$1">This is a $1</p>');
      return content;
    },

    /**
     * Replace the icons with <!--sasDiag--> tags in content upon detaching editor.
     */
    detach: function(content, settings, instanceId) {
      var reg = new RegExp('<p>&nbsp;</p><p class="sas-diag sas-diag-id-([^"]+)">[^<]+</p>', "gi");
      content = content.replace(reg, '[sasDiag:$1]');
      return content;
    },

    /**
     * Helper function to return a HTML placeholder.
     */
    _getPlaceholder: function (settings) {
      if(settings.sasDiagId) {
        return '[sasDiag:' + settings.sasDiagId + ']';
      }
      return '';
    }

  };

})(jQuery);