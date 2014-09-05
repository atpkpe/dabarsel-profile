
// Javascript executed on every page load

function stickyHeader() {
  var body = jQuery('body');
  if (jQuery(window).scrollTop() > 30)
    body.addClass('stickyhead');
  else
    body.removeClass('stickyhead');
}
(function ($) {
  $(window).scroll(stickyHeader);
  stickyHeader();
  $(".main-menu > ul > li").hover(
    function(){
      $(this).addClass("hover");
    },
    function(){
      $(this).removeClass("hover");
    }
  );
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
  $('.level-2-3, .atp-document-archive-nav').bind( "touchstart, click", function(){
    $(this).toggleClass("expand");
  });
  Drupal.behaviors.main = {
  attach: function(context, settings) {

    // Add javascript here

  }};
})(jQuery);
