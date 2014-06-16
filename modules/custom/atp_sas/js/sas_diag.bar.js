/**
 * Created by mikkel on 6/12/14.
 */

(function ($) {


  Drupal.behaviors.atp_sas_diag_bar = {
    attach: function(context, settings) {
      if (typeof settings.atp_sas_diag == 'undefined') {
        return;
      }
      var diag = settings.atp_sas_diag;
      var google = settings.google;
      var data = new google.visualization.DataTable();

      var header = diag.data['header'];

      for (var i in header) {
        data.addColumn(header[i].type, header[i].data);
      }

      data.addRows(diag.data['rows']);

      var chart = new google.visualization.ColumnChart(
        document.getElementById(diag.selector)
      );
      chart.draw(data, diag.options);
    }
  }


  Drupal.settings.google = google;
  // Load the Visualization API and the piechart package.
  Drupal.settings.google.load('visualization', '1.0', {'packages':['corechart']});

  // Set a callback to run when the Google Visualization API is loaded.
  Drupal.settings.google.setOnLoadCallback(
    Drupal.behaviors.atp_sas_diag_bar.attach(document, Drupal.settings)
  );

})(jQuery, Drupal);
