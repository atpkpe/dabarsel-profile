
// Javascript executed on every page load

(function ($) {
  $(".toggle-menu").click(function(){
    if($("body").hasClass("show-menu")) {
      $("body").removeClass("show-menu");
    } else {
      $("body").addClass("show-menu");
    }
  });
  $('.level-2-3').bind( "touchstart, click", function(){
    $(this).toggleClass("expand");
  });
  Drupal.behaviors.main = {
  attach: function(context, settings) {

    // Add javascript here

  }};
})(jQuery);
