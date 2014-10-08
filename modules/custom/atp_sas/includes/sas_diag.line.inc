<?php
/**
 * sas_diag.line.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

/**
 * Class sasDiagLine
 * SAS diagram presenting a single line.
 */
class sasDiagLine extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions(){
    $options = $this->optionsAxisLabels();
    $options['height'] = '400';
    $options['backgroundColor'] = 'transparent';
    $options['colors'] = array(
      self::color1,
      self::color2,
      self::color3,
      self::color4,
      self::color5,
      self::color6,
      self::color7
    );
    $options['legend']['position'] = 'none';
    $options['chartArea']['backgroundColor'] = self::colLightGrey;
    $options['vAxis']['gridlines']['color'] = self::colGrey;
    $options['vAxis']['baselineColor'] = 'none';
    $options['vAxis']['titleTextStyle']['italic'] = FALSE;
    $options['annotations']['textStyle']['color'] = self::color4;
    return $options;
  }

  protected function defineData() {
    $data = array();
    $data['rows'] = array();
    $data['rows'][] = array('', '', array('type' => 'string', 'role' => 'annotation'));

    foreach ($this->xml->values->children() as $value) {
      $header_value = (string) $value->attributes()->name;
      $i = 0;
      foreach ($value->children() as $item) {
        $value = str_replace(',', '.', (string) $item);
        $row = array('', (float) $value);
        if ($i == 0) {
          array_push($row, $header_value);
        }
        else {
          array_push($row, '');
        }
        $data['rows'][] = $row;
        $i++;
      }
    }

    return $data;
  }

}
