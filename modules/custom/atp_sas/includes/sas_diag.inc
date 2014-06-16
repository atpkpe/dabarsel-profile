<?php
/**
 * sas_diag.inc.
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:00 AM
 */



abstract class sasDiag {

  const colLightGreen = '#E8EEB9';
  const colGreen = '#BDCE33';
  const colDarkGreen = '#7C9500';
  const colLightGrey = '#DCDCDC';
  const colGrey = '#A2A2A2';
  const colDarkGrey = '#6E6E6E';
  const colWhite = '#FFFFFF';

  protected $title;
  protected $summary;
  protected $date;
  protected $type;
  protected $selector;
  protected $options;
  protected $data;

  protected $xml;
  protected $properties = array(
    'title',
    'summary',
    'date',
    'type',
  );

  public function __construct($id, $xml) {
    $this->selector = $this->constructSelector($id);
    $this->xml = $xml;
    $this->setProperties();
    $this->options = $this->defineOptions();
    $this->data = $this->defineData();
  }

  protected function setProperties() {
    foreach ($this->properties as $property) {
      $this->{$property} = (string)$this->xml->{$property};
    }
  }

  public function render() {
    drupal_add_js('https://www.google.com/jsapi', 'external');

    return array(
      'diag-wrapper' => array(
        '#type' => 'container',
        '#attributes' => array(
          'id' => $this->selector,
        ),
      ),
      '#attached' => array(
        'js' => array(
          array(
            'data' => drupal_get_path('module', 'atp_sas') . sprintf('/js/sas_diag.%s.js', $this->type),
            'type' => 'file',
          ),
          array(
            'data' => array(
              'atp_sas_diag' => array(
                'type' => $this->type,
                'selector' => $this->selector,
                'options' => $this->options,
                'data' => $this->data,
              ),
            ),
            'type' => 'setting',
          ),
        ),
      ),
    );
  }

  protected function constructSelector($id) {
    return sprintf('sas-diag-%s', $id);
  }

  protected abstract function defineOptions();
  protected abstract function defineData();

}

class sasDiagFactory {

  public static function create($id, $path = '') {
    $path = !empty($path) ? $path : self::findPath($id);
    $xml = self::loadXml($id, $path);

    if (!empty($xml)) {
      $type = self::detectType($xml);
      $class_name = sprintf('sasDiag%s', ucfirst($type));
      if ($type && class_exists($class_name)) {
        return new $class_name($id, $xml);
      }
    }

    return FALSE;
  }

  public static function createByXml($xml) {
    $type = self::detectType($xml);
    $class_name = sprintf('sasDiag%s', $type);
    if ($type && class_exists($class_name)) {
      return new $class_name($xml);
    }

    return FALSE;
  }

  protected static function loadXml($id, $path) {
    $mask = sprintf('/%s\.xml/', $id);
    $files = file_scan_directory($path, $mask);
    $file_path = key($files);
    if (!empty($file_path) && !empty($files[$file_path])) {
      $xml = simplexml_load_file($files[$file_path]->uri);
    }
    return !empty($xml) ? $xml : FALSE;
  }

  protected static function findPath($id) {
    return sprintf(
      '%s/test',
      drupal_get_path('module', 'atp_sas')
    );
  }

  protected static function detectType($xml) {
    return (string)$xml->type;
  }

}
