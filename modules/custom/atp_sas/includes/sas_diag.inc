<?php
/**
 * sas_diag.inc.
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:00 AM
 */



abstract class sasDiag {

  const colWhiteGreen = '#e8efba';
  const colLightestGreen = '#d1de75';
  const colLighterGreen = '#bccf37';
  const colLightGreen = '#acc20e';
  const colGreen = '#7b9507';
  const colDarkGreen = '#4c5d02';
  const colLightGrey = '#e6e7e4';
  const colGrey = '#A2A2A2';
  const colDarkGrey = '#6E6E6E';
  const colWhite = '#FFFFFF';

  protected $id;
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
    $this->id = $id;
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
    return array(
      'diag-wrapper-' . $this->id => array(
        '#type' => 'container',
        '#attributes' => array(
          'id' => $this->selector,
          'style' => 'width: 100%; height: 400px',
        ),
        'nbsp' => array(
          '#type' => 'markup',
          '#markup' => '&nbsp;',
        ),
      ),
      '#attached' => array(
        'js' => array(
          array(
            'data' => drupal_get_path('module', 'atp_sas') . '/js/sas_diag.js',
            'type' => 'file',
          ),
          array(
            'data' => drupal_get_path('theme', 'atp_theme') .'/js/jquery.throttledresize.js',
            'type' => 'file',
          ),
          array(
            'data' => drupal_get_path('theme', 'atp_theme') .'/js/jquery.debouncedresize.js',
            'type' => 'file',
          ),
          array(
            'data' => array(
              'atp_sas_diag' => array(
                'charts' => array(
                  $this->selector => array(
                    'type' => $this->type,
                    'options' => $this->options,
                    'data' => $this->data,
                  ),
                ),
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

  protected function optionsAxisLabels() {
    $header_attr_map = array(
      'xlabel' => 'hAxis',
      'ylabel' => 'vAxis',
    );
    $options = array();
    foreach ($this->xml->headers->attributes() as $name => $value) {
      if (!empty($value) && !empty($header_attr_map[$name])) {
        $options[$header_attr_map[$name]] = array('title' => (string)$value);
      }
    }
    return $options;
  }

  public function getType() {
    return $this->type;
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
