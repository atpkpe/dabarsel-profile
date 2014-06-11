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
        var content = this._getIds(data.content);
        if(content !== '') {
          settings.ids = content
        } else {
          settings.ids = '';
        }
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
        var $this = this;
        dialogdiv.find('.form-save-diagram').click(function(evt) {
          evt.preventDefault();
          var diagIds = [];
          var items = dialogdiv.find($('#sas-diagrams input:radio:checked', dialogdiv));
//          console.log(dialogdiv.find('#sas_diagrams input:radio'));
//          console.log($('#sas-diagrams input:radio:checked', dialogdiv).val());
          items.each(function() {
            diagIds.push($(this).val());
            console.log($(this).val());
          });
          settings.sasDiagIds = diagIds;
          var content = Drupal.wysiwyg.plugins['sas_diag']._getPlaceholder(settings);
//          console.log(settings.tingIds);
//          console.log(content);
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
      content = content.replace(/<!--sasDiag-->/g, this._getPlaceholder(settings));
      return content;
    },

    /**
     * Replace the icons with <!--sasDiag--> tags in content upon detaching editor.
     */
    detach: function(content, settings, instanceId) {
      var $content = $('<div>' + content + '</div>');
      $.each($('.sasDiag', $content), function (i, elem) {
        elem.parentNode.removeChild(elem);
      });
      return $content.html();
    },

    /**
     * Helper function to return a HTML placeholder.
     */
    _getPlaceholder: function (settings) {
      if(settings.sasDiagIds) {
        return '[sasDiag:' + settings.sasDiagIds.join() + ']';
      }
      return '';
    },

    /**
     * Helper function to return ids from a placeholder.
     */
    _getIds: function (content) {
      var ids = ''
      if(content.indexOf('[sasDiag:') === 0 && content.indexOf(']') === (content.length - 1)) {
        content = content.replace('[sasDiag:', '');
        content = content.replace(']', '');
        ids = content.split(',');
      }
      return ids;
    }
  };

})(jQuery);