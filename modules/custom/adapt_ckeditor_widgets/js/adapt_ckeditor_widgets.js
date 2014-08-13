(function($) {
  Drupal.behaviors.customToggler = {
    attach: function(context, settings){
      $(".expanding .textbox-title", context).once().click(function(){
        $(this).parent('.expanding').toggleClass("expanded").toggleClass("collapsed");
        return false;
      });
      if (window.location.hash !== '') {
        var name = window.location.hash.substring(1);
        $('a[name=' + name + ']').once().parents('.expanding')
          .addClass("expanded")
          .removeClass("collapsed");
      }
    }
  };
})(jQuery);
