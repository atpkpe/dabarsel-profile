<?php
/**
 * sas_diag.bar.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

class sasDiagBar extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions() {
    $header_attr_map = array(
      'xlabel' => 'hAxis',
      'ylabel' => 'vAxis',
    );

    foreach ($this->xml->headers->attributes() as $name => $value) {
      if (!empty($value) && !empty($header_attr_map[$name])) {
        $options[$header_attr_map[$name]] = array('title' => (string)$value);
      }
    }

    $options['colors'] = array(self::colDarkGrey, self::colGreen);
    $options['chartArea']['backgroundColor'] = self::colLightGrey;
    $options['vAxis']['gridlines']['color'] = self::colWhite;

    return $options;
  }

  protected function defineData() {
    $head = (array)$this->xml->headers->head;
    $head_items = $head['item'];
    $data = array();
    $data['header'][] = array('type' => 'string', 'data' => '&nbsp;');
    foreach ($head_items as $head_item) {
      $data['header'][] = array('type' => 'number', 'data' => $head_item);
    }
    foreach ($this->xml->values as $value) {
      foreach($value as $entry) {
        $row = array((string)$entry['name']);
        $i = 0;
        foreach ($entry->item as $bar) {
          $val = (string)$bar;
          $row[] = is_numeric($val) ? (float) $bar : (string) $bar;
          $i++;
        }
        $data['rows'][] = $row;
      }
    }
    return $data;
  }

}
/*
 <?xml version="1.0" encoding="UTF-8"?>
<data>
	<title>Figur 5 - dansk</title>
	<summary>Selskaber: Historiske resultater</summary>
	<date>2014-05-14 10:10:26</date>
	<type>bar</type>
	<headers xlabel="" ylabel="Pct">
		<head>
			<item>Andre selskaber</item>
			<item>ATP</item>
		</head>
	</headers>
	<values>
		<value name="1993-2012">
			<item name="Andre selskaber">8</item>
			<item name="ATP">10</item>
		</value>
		<value name="2003-2012">
			<item name="Andre selskaber">7</item>
			<item name="ATP">12</item>
		</value>
	</values>
</data>

 */