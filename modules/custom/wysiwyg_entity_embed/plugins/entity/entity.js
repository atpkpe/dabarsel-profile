(function ($) {

Drupal.wysiwyg.plugins['entity'] = {

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
    if (typeof content != 'undefined') {
      Drupal.wysiwyg.plugins.entity.insert_form(data, settings, instanceId)
    }
  },

  insert_form: function (data, settings, instanceId) {
    var formatFieldId = instanceId.replace('-value', '-format--2');
    var formatName = $('#' + formatFieldId).find(":selected").val();

    var dialogUrl = Drupal.settings.basePath + 'admin/wysiwyg-entity-embed/insert/ajax/' + formatName;
    var dialogdiv = $('<div id="entity-insert-dialog"></div>');

    dialogdiv.load(dialogUrl, function(){
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
        var entityString = $('#edit-find-entity', dialogdiv).val();
        var content = Drupal.wysiwyg.plugins['entity']._getPlaceholder(entityString);
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
        title: Drupal.t('Insert Entity'),
        buttons: btns,
        width: '70%',
        close: dialogClose
      });

      dialogdiv.dialog("open");
      Drupal.attachBehaviors();
    });

  },


  /**
   * Helper function to return a HTML placeholder.
   */
  _getPlaceholder: function (entityString) {
    return '[[' + entityString + ']]';
  }
};

})(jQuery);
