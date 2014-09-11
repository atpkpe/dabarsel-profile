
// Javascript executed on every page load

function stickyHeader() {
  var body = jQuery('body');
  if (jQuery(window).scrollTop() > 30)
    body.addClass('stickyhead');
  else
    body.removeClass('stickyhead');
}
(function ($) {
  $("header").append('<div class="menu-backdrop"/>');
  $(".menu-backdrop").css("height",$(".main-menu > ul > li.last > ul").height()+41+"px");
  $(".main-menu > ul > li.last").hover(
    function(){
      $(this).addClass("hover");
      $(".menu-backdrop").show();
      $("header").css("margin-bottom",$(".main-menu > ul > li.last > ul").height()+38+"px")
    },
    function(){
      $(this).removeClass("hover");
      $(".menu-backdrop").hide();
      $("header").css("margin-bottom","");
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
