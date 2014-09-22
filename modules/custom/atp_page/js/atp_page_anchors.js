(function ($) {
  Drupal.behaviors.page_anchors = {
    attach: function (context, settings) {
      $('#main', context).once('page_anchors', function() {
        $('#main a').each(function() {
          if (this.name !== '') {
            $('#anchors').append('<li><a href="#' + this.name + '">' + this.name + '</a></li>');
          }
        });
      });

      $('#anchors a[href^="#"]').not('a[href="#"]').each(function() {
        var name = $(this).attr('href').substring(1);
        $(this).click(function(){
	       $('a[name=' + name + ']').parents('.expanding')
	        .addClass("expanded")
	        .removeClass("collapsed");
	      });
        })

  }
}})(jQuery);
