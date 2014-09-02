(function ($) {
  Drupal.behaviors.important_message = {
    attach: function (context, settings) {

      $('#important-message', context).click(function() {
        $.cookie('important_message', Drupal.settings.important_message_id, {expires:1000, path:'/'});
        $('#important-message').hide();
      });

      $('#important-message', context).once('important-message', function() {

        var important_message = 0;
        if ($.cookie('important_message') !== undefined) {
          important_message = $.cookie('important_message');
        }

        $.post("js/atp_important_message/results/" + important_message, function( data ) {
          if (data.show_message) {
            $('#important-message').html( data.title );
            Drupal.settings.important_message_id = data.important_message_id;
          }
        });
      });
    }
  };
})(jQuery);