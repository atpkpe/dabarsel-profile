<?php
/**
 * sas_diag.table.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

class sasDiagTable extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions(){}

  protected function defineData() {}

  public function render() {
    $rows = array();

    foreach ($this->xml->headers->children() as $head) {
      $row_data = array();
      foreach($head->children() as $item) {
        $class = array('header');
        foreach ($item->attributes() as $name => $value) {
          $class[] = $this->attribute2class((string) $name, (string) $value);
        }
//        $row_data[] = (string) $item;
        $row_data[] = array('data' => (string) $item, 'class' => $class);
      }
      $rows[] = array('data' => $row_data, 'class' => array('header'));
    }
    foreach ($this->xml->values->children() as $value) {
      $row_data = array();
      foreach($value->children() as $item) {
        $class = array();
        foreach ($item->attributes() as $name => $value) {
          $class[] = $this->attribute2class((string) $name, (string) $value);
        }
        $row_data[] = array('data' => (string) $item, 'class' => $class);
      }
      $rows[] = array('data' => $row_data, 'class' => $class);
    }
    $table = array(
      '#theme' => 'table',
      '#rows' => $rows,
      '#attributes' => array (
        'class' => array('sas-table'),
        'cellspacing' => array(0),
      ),
    );

    // Only for debug:
    $table = array(
      'debug' => array(
        '#type' => 'markup',
        '#markup' => sprintf('<h3>%s:</h3>', $this->id),
      ),
    ) + array('table' => $table);

    return $table;
  }

  protected function attribute2class($name, $value) {
    return sprintf('%s-%s', $name, $value);
  }

}

/*
 <?xml version="1.0" encoding="UTF-8"?>
<data>
	<title>Figur 11 - english</title>
	<summary>Procedure Report: Investment portfolio report</summary>
	<date>2014-05-14 10:10:23</date>
	<type>table</type>
	<headers>
		<head>
			<item/>
			<item pos="right">Return</item>
			<item pos="right">Portfolio</item>
		</head>
		<head>
			<item/>
			<item pos="right">DKK milion</item>
			<item pos="right">DKK bilion</item>
		</head>
	</headers>
	<values>
		<value>
			<item pos="left">Interest Rates</item>
			<item pos="right">1,491</item>
			<item pos="right">92,9</item>
		</value>
		<value>
			<item pos="left">Credit</item>
			<item pos="right">600</item>
			<item pos="right">29,7</item>
		</value>
		<value>
			<item pos="left">Equities</item>
			<item pos="right">3,981</item>
			<item pos="right">63,4</item>
		</value>
		<value>
			<item pos="left">Inflation</item>
			<item pos="right">(1,115)</item>
			<item pos="right">88,3</item>
		</value>
		<value>
			<item pos="left">Commodities</item>
			<item pos="right">53</item>
			<item pos="right">7,7</item>
		</value>
		<value>
			<item pos="left" format="strong">Total investment portfolio</item>
			<item pos="right" format="strong">4,751</item>
			<item pos="right" format="strong">282,2</item>
		</value>
	</values>
</data>

 */
