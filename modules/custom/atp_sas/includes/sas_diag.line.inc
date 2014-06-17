<?php
/**
 * sas_diag.line.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

class sasDiagLine extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions(){
    $options = $this->optionsAxisLabels();
    $options['colors'] = array(
      self::colDarkGreen,
      self::colDarkGrey,
      self::colGreen,
      self::colLightGrey,
      self::colLightGreen,
      self::colGrey,
    );
    $options['legend']['position'] = 'none';
    $options['chartArea']['backgroundColor'] = self::colLightGrey;
    $options['vAxis']['gridlines']['color'] = self::colWhite;
    $options['vAxis']['baselineColor'] = 'none';
    return $options;
  }

  protected function defineData() {
    $data = array();
    $data['rows'] = array();
    $header = array('');
    $group_count = count($this->xml->values->children());
//    var_dump($group_count); die;
    $group_rows = array();
    $g = 0;
    foreach ($this->xml->values->children() as $value) {
      $header[] = (string) $value->attributes()->name;
      foreach ($value->children() as $item) {
        $value = str_replace(',', '.', (string) $item);
//        var_dump($data['rows'][$item_count - 1]);
        $group_rows[$g][] = (float) $value;
      }
      $g++;
    }

    $last_count = $max_group_id = 0;
    foreach ($group_rows as $id => $group) {
      $group_count = count($group);
      if ($group_count > $last_count) {
        $max_group_id = $id;
      }
      $last_count = $group_count;
    }
    foreach($group_rows[$max_group_id] as $g_row_id => $g_row){
      $row = array('');
      foreach($group_rows as &$group) {
        if (!isset($group[$g_row_id])) {
          $group[$g_row_id] = 'null';
        }
        $row[] = $group[$g_row_id];
      }
      $data['rows'][] = $row;
    }

    array_unshift($data['rows'], $header);

    return $data;
  }

  protected function defineDataOld() {
    $options = $this->defineOptions();
    $data = array();
    $data['header'] = array(
      array('type' => 'string', 'data' => 'point'),
      array('type' => 'number', 'data' => $options['vAxis']['title']),
    );

    foreach ($this->xml->values->children() as $value) {
      foreach ($value->children() as $item) {
        $value = str_replace(',', '.', (string) $item);
        $data['rows'][] = array('', (float) $value);
      }
    }
    return $data;
  }

}

/*
  var data = google.visualization.arrayToDataTable([
          ['Year', 'Sales', 'Expenses'],
          ['2004',  1000,      400],
          ['2005',  1170,      460],
          ['2006',  660,       1120],
          ['2007',  1030,      540]
        ]);

        var options = {
          title: 'Company Performance'
        };

 <?xml version="1.0" encoding="UTF-8"?>
<data>
	<title>Figur 13 - dansk</title>
	<summary>Netto indkomst i første kvartal</summary>
	<date>2014-06-11 11:12:56</date>
	<type>line</type>
	<headers xlabel="" ylabel="Mia. kr.">
		<head>
			<item/>
		</head>
	</headers>
	<values>
		<value name="1. kvartal">
			<item xvalue="0,1">0</item>
			<item xvalue="0,2">-0,1</item>
			<item xvalue="0,3">0</item>
			<item xvalue="0,4">0.1</item>
			<item xvalue="0,5">-0,1</item>
			<item xvalue="0,6">0,1</item>
			<item xvalue="0,7">0,3</item>
			<item xvalue="0,8">0,1</item>
			<item xvalue="0,9">0,2</item>
			<item xvalue="1,0">0,4</item>
			<item xvalue="1,1">0,5</item>
			<item xvalue="1,2">0,455</item>
			<item xvalue="1,3">0,5</item>
			<item xvalue="1,4">0,7</item>
			<item xvalue="1,5">0,6</item>
			<item xvalue="1,6">0,9</item>
			<item xvalue="1,7">1,1</item>
			<item xvalue="1,8">0,9</item>
			<item xvalue="1,9">1,3</item>
			<item xvalue="2,0">1,2</item>
			<item xvalue="2,1">1,4</item>
			<item xvalue="2,2">1,5</item>
			<item xvalue="2,3">1,3</item>
			<item xvalue="2,4">1,2</item>
			<item xvalue="2,5">1,3</item>
			<item xvalue="2,6">1,2</item>
			<item xvalue="2,7">1,3564</item>
			<item xvalue="2,8">1,5</item>
			<item xvalue="2,9">1,4</item>
			<item xvalue="3,0">1,55</item>
			<item xvalue="3,1">1,4</item>
			<item xvalue="3,2">1,353</item>
			<item xvalue="3,3">1,3</item>
			<item xvalue="3,4">1,4</item>
			<item xvalue="3,5">1,2</item>
			<item xvalue="3,6">1,33</item>
			<item xvalue="3,7">1,4</item>
			<item xvalue="3,8">1,3</item>
			<item xvalue="3,9">1,21</item>
			<item xvalue="4,0">1,15</item>
			<item xvalue="4,1">1,2</item>
			<item xvalue="4,2">1,5</item>
			<item xvalue="4,3">1,4</item>
		</value>
	</values>
</data>

 */