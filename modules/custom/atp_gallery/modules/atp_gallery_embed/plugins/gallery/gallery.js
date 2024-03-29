(function ($) {

Drupal.wysiwyg.plugins['gallery'] = {

  /**
   * Return whether the passed node belongs to this plugin.
   */
  isNode: function(node) {
    return ($(node).is('img.wysiwyg-gallery'));
  },

  /**
   * Execute the button.
   */
  invoke: function(data, settings, instanceId) {
    if (data.format == 'html') {
      // Prevent duplicating a teaser gallery.
      if ($(data.node).is('img.wysiwyg-gallery')) {
        return;
      }
      var content = this._getPlaceholder(settings);
    }
    else {
      // Prevent duplicating a teaser gallery.
      // @todo data.content is the selection only; needs access to complete content.
      if (data.content.match(/\[\[gallery.+\]\]/)) {
        return;
      }
      //var content = '<!--gallery-->';
    }
    if (typeof content != 'undefined') {
      Drupal.wysiwyg.plugins.gallery.insert_form(data, settings, instanceId)
    }
  },

    insert_form: function (data, settings, instanceId) {
      // Location, where to fetch the dialog.
      var aurl = Drupal.settings.basePath + 'admin/gallery/insert/ajax';
      var dialogdiv = $('<div id="gallery-insert-dialog"></div>');

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

        dialogdiv.find('input.form-submit').click(function(evt) {
          evt.preventDefault();
          settings.galleryId = $('#edit-galleries input:radio:checked', dialogdiv).val();
          var content = Drupal.wysiwyg.plugins['gallery']._getPlaceholder(settings);
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
          title: Drupal.t('Insert Gallery'),
          buttons: btns,
          width: '70%',
          close: dialogClose
        });

        dialogdiv.dialog("open");
        Drupal.attachBehaviors();
      });

    },


  /**
   * Replace all [[gallery:id]] tags with images.
   */
  attach: function(content, settings, instanceId) {
    var reg = /\[\[gallery:(.+)\]\]/gim;
    content = content.replace(reg, function(token, id){
        settings.galleryId = id;
        return Drupal.wysiwyg.plugins['gallery']._getPlaceholder(settings);
      });

    return content;
  },

  /**
   * Replace images with [[gallery:id]] tags in content upon detaching editor.
   */
  detach: function(content, settings, instanceId) {
    var $content = $('<div>' + content + '</div>'); // No .outerHTML() in jQuery :(
    // #404532: document.createComment() required or IE will strip the comment.
    // #474908: IE 8 breaks when using jQuery methods to replace the elements.
    // @todo Add a generic implementation for all Drupal plugins for this.
    $.each($('img.wysiwyg-gallery', $content), function (i, elem) {
      var data = ($(this).data());
      $(this).replaceWith('[[gallery:' + data.galleryId + ']]');
    });
    return $content.html();
  },

  /**
   * Helper function to return a HTML placeholder.
   */
  _getPlaceholder: function (settings) {
    return '<img src="' + settings.path +
      '/images/galleryplaceholder.png" alt="Gallery" title="Gallery" class="wysiwyg-gallery drupal-content" data-gallery-id="'
      + settings.galleryId +'"/>';
  }
};

})(jQuery);
