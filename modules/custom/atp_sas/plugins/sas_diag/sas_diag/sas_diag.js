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


        $('.sas-browser-item-file').live('click', function(evt) {
          evt.preventDefault();
          settings.sasDiag = {
            id: $(this).data('id'),
            path: $(this).data('path'),
            type: $(this).data('type')
          }
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
      var reg = /\[\[sasDiag\|id:([^|]+)\|path:([^|]+)\|type:([^\]]+)\]\]/gim;
      content = content.replace(reg, function(token, id, path, type){
        settings.sasDiag = {id: id, path: path, type: type};
        return Drupal.wysiwyg.plugins['sas_diag']._getPlaceholder(settings);
      });


      return content;
    },

    /**
     * Replace the icons with <!--sasDiag--> tags in content upon detaching editor.
     */
    detach: function(content, settings, instanceId) {
      var container = $('<div>').html(content);
      $('img.wysiwyg-sas-diag', container).each(function(){
        var data = $(this).data();
        var sasDiagProps = [];
        for(var prop in data) {
          sasDiagProps.push(prop + ':' + data[prop]);
        }
        $(this).replaceWith('[[sasDiag|' + sasDiagProps.join('|') + ']]');
      });
      return container.html();;
    },

    /**
     * Helper function to return a HTML placeholder.
     */
    _getPlaceholder: function (settings) {
      if (settings.sasDiag) {
        var sasDiag = settings.sasDiag;
        var src = settings.path + '/' + '/images/chart_' + sasDiag.type + '.png';
        var dataAttributes = [];
        for (var prop in sasDiag) {
          dataAttributes.push('data-' + prop + '="' + sasDiag[prop] + '"');
        }
        return '<img style="display:block" src="' + src +'" ' + dataAttributes.join(' ') + ' title="' + sasDiag.id + '" class="wysiwyg-sas-diag drupal-content" />';
      }
      return '';
    }

  };

  Drupal.behaviors.atp_sas_diag_browser = {
    attach: function(context, settings) {
      $('.sas-browser-item-dir').click(function(event) {
        event.preventDefault();
        var $link = $(this);
        $.ajax({
          url: $link.attr('href'),
          type: 'post',
          dataType: 'json',
          success: function (xhr) {
            $('#sas-dir-browser-wrapper').html(xhr);
            Drupal.attachBehaviors(context, settings);
          }
        });
      });
    }
  };

})(jQuery);