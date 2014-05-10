<?php
/**
 * @file
 * atp_data_deployment.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function atp_data_deployment_uuid_default_entities() {
  $entities = array();

  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/935205fc-ef08-493c-a84f-43edf8fda113',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/1',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Forside',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => '935205fc-ef08-493c-a84f-43edf8fda113',
  );

  return $entities;
}
