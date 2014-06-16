/**
 * Created by mikkel on 6/12/14.
 */

(function ($) {

  Drupal.behaviors.atp_sas_diag = {

    attach: function(context, settings) {
      if (typeof settings.atp_sas_diag == 'undefined') {
        return;
      }
      $(window).on("debouncedresize", function( event ) {
        Drupal.behaviors.atp_sas_diag.draw(context, settings);
      });
      $(window).on("throttledresize", function( event ) {
        Drupal.behaviors.atp_sas_diag.draw(context, settings);
      });
      Drupal.behaviors.atp_sas_diag.draw(context, settings);
    },

    draw: function(context, settings) {
      var diag = settings.atp_sas_diag;
      var google = settings.google;

      for (var selector in diag.charts) {
        var diagInstance = diag.charts[selector];

        switch (diagInstance.type) {
          case 'circle':
            var googleChartsType = 'PieChart';
            var data = google.visualization.arrayToDataTable(diagInstance.data['rows']);
            break;

          case 'bar':
            var googleChartsType = 'ColumnChart';
            var data = new google.visualization.DataTable();
            var header = diagInstance.data['header'];
            for (var i in header) {
              data.addColumn(header[i].type, header[i].data);
            }
            data.addRows(diagInstance.data['rows']);
            break;

          case 'lineSimple':
            var googleChartsType = 'LineChart';
            var data = new google.visualization.DataTable();
            var header = diagInstance.data['header'];
            for (var i in header) {
              data.addColumn(header[i].type, header[i].data);
            }
            data.addRows(diagInstance.data['rows']);
            break;
        }

        var chart = new google.visualization[googleChartsType](
          document.getElementById(selector)
        );

        chart.draw(data, diagInstance.options);
      }
    }

  }

  Drupal.settings.google = google;
  // Load the Visualization API and the piechart package.
  Drupal.settings.google.load('visualization', '1.0', {'packages':['corechart']});

  // Set a callback to run when the Google Visualization API is loaded.
  Drupal.settings.google.setOnLoadCallback(
    Drupal.behaviors.atp_sas_diag.attach(document, Drupal.settings)
  );

})(jQuery, Drupal);
