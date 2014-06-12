/**
 * Created by mikkel on 6/12/14.
 */

(function ($) {
  // Load the Visualization API and the piechart package.
  google.load('visualization', '1.0', {'packages':['corechart']});

  // Set a callback to run when the Google Visualization API is loaded.
  google.setOnLoadCallback(drawChart);
//      drawChart();
  // Callback that creates and populates a data table,
  // instantiates the pie chart, passes in the data and
  // draws it.
  function drawChart() {

    // Create the data table.
    var data = new google.visualization.DataTable();
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
    console.log(document.getElementById('chart_div'));
    // Instantiate and draw our chart, passing in some options.
    var chart = new google.visualization.PieChart(document.getElementById('chart_div'));
    chart.draw(data, options);
  }
})(jQuery, Drupal);
