
// Javascript executed on every page load

(function ($) {
  $(".toggle-menu").click(function(){
    if($("body").hasClass("show-menu")) {
      $("body").removeClass("show-menu");
    } else {
      $("body").addClass("show-menu");
    }
  });
  Drupal.behaviors.main = {
  attach: function(context, settings) {

    // Add javascript here

  }};
})(jQuery);
