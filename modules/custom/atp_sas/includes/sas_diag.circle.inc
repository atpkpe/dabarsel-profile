<?php
/**
 * sas_diag.circle.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

class sasDiagCircle extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions(){
    return array(
      'pieSliceText' => 'value',
      'chartArea' => array(
        'width' => '100%',
        'height' => '100%',
        'top' => '20',
      ),
      'pieSliceBorderColor' => 'none',
      'pieSliceTextStyle' => array('color' => '#333'),
      'is3D' => 'true',
      'colors' => array(
        self::colLightGreen,
        self::colGreen,
        self::colDarkGreen,
        self::colLightGrey,
        self::colGrey,
        self::colDarkGrey,
      ),
    );
  }

  protected function defineData() {
    $head = (array)$this->xml->headers->head;
    $head_items = $head['item'];
    $data = array();
    $data['rows'][] = array('name', 'value');
    foreach ($head_items as $head_item) {
      $data['rows'][] = array($head_item);
    }
    $i = 1;
    foreach ($this->xml->values->children() as $node) {
      $data['rows'][$i][] = (float)$node->item;
      $i++;
    }
    return $data;
  }

}
