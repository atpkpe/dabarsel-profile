<?php
/**
 * sas_diag.bar.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

/**
 * Class sasDiagBar
 * SAS diagram presenting a bar diagram.
 */
class sasDiagBar extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions() {
    $options = $this->optionsAxisLabels();
    $options['height'] = '400';
    $options['backgroundColor'] = 'transparent';
    $options['tooltip'] = array('trigger' => 'none');
    $options['colors'] = array(
        self::color1,
        self::color2,
        self::color3,
        self::color4,
        self::color5,
        self::color6,
        self::color7
    );
    $options['chartArea']['backgroundColor'] = self::colLightGrey;
    $options['vAxis']['gridlines']['color'] = self::colGrey;
    $options['vAxis']['baselineColor'] = 'none';
    $options['vAxis']['titleTextStyle']['italic'] = FALSE;
    return $options;
  }

  protected function defineData() {
    $head = (array)$this->xml->headers->head;
    $head_items = $head['item'];
    $data = array();
    // If only one header item then process that item.
    if (is_string($head_items)) {
      $data['header'][] = array('type' => 'number', 'data' => $head_items);
    }
    // Otherwise treat is an array.
    else {
      foreach ($head_items as $head_item) {
        $data['header'][] = array('type' => 'number', 'data' => $head_item);
      }
    }

    $header_count = count($data['header']);

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

        // If row count is bigger than head count then pad header.
        $row_count = count($row);
        $row_header_diff = $row_count - $header_count;
        if ($row_header_diff) {
          $data['header'] = array_pad(
            $data['header'],
            -1 * abs($row_count),
            array('type' => 'string', 'data' => '&nbsp;')
          );
        }

      }
    }

    return $data;
  }

}
