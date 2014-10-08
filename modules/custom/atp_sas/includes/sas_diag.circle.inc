<?php
/**
 * sas_diag.circle.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

/**
 * Class sasDiagCircle
 * SAS diagram presenting a circle diagram.
 */
class sasDiagCircle extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions(){
    return array(
      'height' => '400',
      'chartArea' => array('height'=>'360'),
      'backgroundColor' => 'transparent',
      'tooltip' => array('trigger' => 'none'),
      'pieSliceText' => 'value',
      'pieSliceBorderColor' => 'none',
      'pieSliceTextStyle' => array('color' => '#fff', 'fontName' => 'Tahoma'),
      'colors' => array(
        self::color1,
        self::color2,
        self::color3,
        self::color4,
        self::color5,
        self::color6,
        self::color7
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
