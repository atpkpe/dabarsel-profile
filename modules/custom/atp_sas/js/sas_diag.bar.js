/**
 * Created by mikkel on 6/12/14.
 */

(function ($) {


  Drupal.behaviors.atp_sas_diag = {
    attach: function(context, settings) {
      console.log(typeof settings.google.visualization);
      if (typeof settings.google.visualization == 'undefined') {
        return;
      }
    // Callback that creates and populates a data table,
    // instantiates the pie chart, passes in the data and
    // draws it.
      // Create the data table.
      var data = new settings.google.visualization.DataTable();
      data.addColumn('string', 'Topping');
      data.addColumn('number', 'Slices');
      data.addRows([
        ['Aktier', 56],
        ['Kredit', 7],
        ['Renter', 10],
        ['Råvarer', 9],
        ['Inflation ', 19]
      ]);
      // Set chart options
      var options = {
        'title':'ATP\'s aktivfordeling ultimo 1. kvartal 2014.',
        'width':400,
        'height':300,
        'is3D': true
      };
      console.log(settings.atp_sas_diag.selector);
      // Instantiate and draw our chart, passing in some options.
      var chart = new settings.google.visualization.PieChart(document.getElementById(settings.atp_sas_diag.selector));
      chart.draw(data, options);
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
