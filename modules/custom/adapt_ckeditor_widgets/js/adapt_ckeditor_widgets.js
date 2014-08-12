(function($) {
  Drupal.behaviors.customToggler = {
    attach: function(context, settings){
      $("div.expanding", context).once('textbox-title').click(function(){
        $(this).toggleClass("expanded").toggleClass("collapsed");
        return false;
      });
      if (window.location.hash !== '') {
        var name = window.location.hash.substring(1);
        $('a[name=' + name + ']').once().parents('div.expanding')
          .addClass("expanded")
          .removeClass("collapsed");
      }
    }
  };
})(jQuery);
