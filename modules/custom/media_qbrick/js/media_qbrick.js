(function($) {
  Drupal.behaviors.media_qbrick = {
    attach: function(context, settings){
      $("img.file-overlay-open").magnificPopup({
        type:"ajax",
      });
    }
  };
})(jQuery);
