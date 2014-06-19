
// Javascript executed on every page load

(function ($) {
  $(".toggle-menu").click(function(){
    if($("body").hasClass("show-menu")) {
      $("body").removeClass("show-menu");
    } else {
      $("body").addClass("show-menu");
    }
  });
  $(".toggle-search").click(function(){
    if($("body").hasClass("show-search")) {
      $("body").removeClass("show-search");
    } else {
      $("body").addClass("show-search");
    }
  });
  $(".share").click(function(){
    if($("body").hasClass("show-share")) {
      $("body").removeClass("show-share");
    } else {
      $("body").addClass("show-share");
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
