/**
 * Created by mikkel on 5/15/14.
 */

(function ($) {
  Drupal.behaviors.atp_news_list = {
    attach: function(context, settings) {
      var viewsDomId = settings.atp_news_list.view_dom_id;
      var instanceSettings = settings.atp_news_list.views.ajaxViews[viewsDomId];
      // Category click event listener.
      $('.news-filter-button', context).once('filter-button').click(function(){
        $(this).toggleClass('active');
        instanceSettings.tid = {};
        $(".news-filter-button", context).each(function() {
          if ($(this).hasClass('active')) {
            var tidInput = $(this).data("tid");
            instanceSettings.tid[tidInput] = tidInput;;
          }
        });
        // Update news list view.
        $.ajax({
          url: Drupal.settings.basePath + 'views/ajax',
          type: 'post',
          data: instanceSettings,
          dataType: 'json',
          success: function (xhr) {
            if (xhr[2] !== undefined) {
              var response = xhr[2];
              $(response.selector)[response.method](response.data);
              Drupal.attachBehaviors(context, settings);
            }
          }
        });

      });

    }
  };
})(jQuery, Drupal);
