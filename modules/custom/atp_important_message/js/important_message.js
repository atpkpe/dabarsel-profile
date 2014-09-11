(function ($) {
  Drupal.behaviors.important_message = {
    attach: function (context, settings) {

      $('#important-message div.close', context).click(function() {
        $.cookie('important_message', Drupal.settings.important_message_id, {expires:1000, path:'/'});
        $('#important-message').hide();
      });

      $('#important-message', context).once('important-message', function() {
        var messageId = 0;
        if ($.cookie('important_message')) {
          messageId = $.cookie('important_message');
        }
        $.post(Drupal.settings.pathPrefix + "js/atp_important_message/results/" + messageId, function( data ) {
          if (data.show_message) {
            $('#important-message div.content').html( data.html );
            Drupal.settings.important_message_id = data.message_id;
            $('#important-message').show();

            $('#important-message a.close-button', context).click(function() {
              $.cookie('important_message', data.message_id, {expires:1000, path:'/'});
              $('#important-message').hide();
            });

          }
        });
      });

    }
  };
})(jQuery);