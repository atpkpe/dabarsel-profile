/**
 * Created by mikkel on 5/15/14.
 */

(function ($) {
  Drupal.behaviors.atp_document_archive = {
    attach: function(context, settings) {
      // Load document archive tree depending on selected navigation item.
      $('.atp-document-archive-nav-item').click(function(event){
        event.preventDefault();
        var $link = $(this);
        $.ajax({
          url: $(this).attr('href'),
          type: 'get',
          dataType: 'json',
          success: function (xhr) {
            if (typeof(xhr.html) != 'undefined') {
              $("ul.atp-document-archive-tree", context).replaceWith(xhr.html);
              $('.atp-document-archive-nav-item', context).removeClass('active');
              $link.addClass('active');
            }
          }
        });
      });

    }
  };
})(jQuery, Drupal);
