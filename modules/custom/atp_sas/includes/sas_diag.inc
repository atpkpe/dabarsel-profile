<?php
/**
 * sas_diag.inc.
 * User: mikkel@adapt.dk
 * Date: 6/12/14 - 10:00 AM
 */



abstract class sasDiag {

  protected $xml;

  public function __construct($xml) {
    $this->xml = $xml;
  }
}

class sasDiagFactory {

  public static function create($id, $path = '', $xml = '') {
    if (empty($xml)) {
      $path = !empty($path) ? $path : self::findPath($id);
      $xml = self::loadXml($id, $path);
    }
    if (!empty($xml)) {
      $type = self::detectType($xml);
      $class_name = sprintf('sasDiag%s', $type);
      if ($type && class_exists($class_name)) {
        return new $class_name($xml);
      }
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

  protected static function detectType() {
    return 'bar';
  }

}
