<?php
/**
 * @file
 * atp_file.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function atp_file_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'sas';
  $file_type->label = 'Sas xml';
  $file_type->description = '<em>Sas xml</em> files are used for showing diagrams.';
  $file_type->mimetypes = array(
    0 => 'application/xml',
  );
  $export['sas'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'zip_archive';
  $file_type->label = 'Zip archive';
  $file_type->description = '.zip is an archive file format that supports lossless data compression. A .zip file may contain one or more files or folders that may have been compressed. ';
  $file_type->mimetypes = array(
    0 => 'application/zip',
  );
  $export['zip_archive'] = $file_type;

  return $export;
}
