<?php
/**
 * sas_diag.table.inc
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:55 AM
 */

/**
 * Class sasDiagTable
 * SAS diagram presenting a table.
 */
class sasDiagTable extends sasDiag {

  public function __construct($id, $xml) {
    parent::__construct($id, $xml);
  }

  protected function defineOptions(){}

  protected function defineData() {}

  public function render() {
    $rows =  array();
    // Headers.
    $this->createRows($this->xml->headers->children(), $rows);
    // The rest of the rows.
    $this->createRows($this->xml->values->children(), $rows);

    $table = array(
      '#theme' => 'table',
      '#rows' => $rows,
      '#attributes' => array (
        'id' => 'sas-diag-' . $this->id,
        'class' => array('sas-table'),
        'cellspacing' => array(0),
      ),
    );

    return $table;
  }

  protected function attribute2class($name, $value) {
    return sprintf('%s-%s', $name, $value);
  }

  protected function attributeType($name) {
    $attribute_types = array(
      'pos' => 'class',
      'header' => 'class',
      'format' => 'class',
      'span' => 'colspan',
    );
    return !empty($attribute_types[$name]) ? $attribute_types[$name] : '';
  }

  protected function createRows($nodes, &$rows) {
    foreach ($nodes as $value) {
      $row_data = $empty_cells = array();
      $cell_count = 0;
      foreach($value->children() as $item) {
        $attr = array('class' => array());
        foreach ($item->attributes() as $name => $value) {
          $attr_type = $this->attributeType($name);
          if ($attr_type == 'class') {
            $attr['class'][] = $this->attribute2class((string) $name, (string) $value);
          }
          else {
            $attr[$attr_type] = $value;
          }
        }
        $data = (string) $item;
        if (empty($data)) {
          $empty_cells[] = 'empty';
          $data = '&nbsp;';
        }
        $row_data[] = array('data' => $data) + $attr;
        $cell_count++;
      }

      // If there is content in one of the cells then display row.
      if (count($empty_cells) != $cell_count) {
        $rows[] = array('data' => $row_data) + $attr;
      }
    }
  }

}
