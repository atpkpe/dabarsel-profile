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

    foreach ($head_items as $head_item) {
      $data['header'][] = array('type' => 'number', 'data' => $head_item);
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
