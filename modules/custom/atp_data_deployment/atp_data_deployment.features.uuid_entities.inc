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
      'uri' => 'node/ed1f8db3-78b8-41b7-a586-7ee1781e2cf8',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_component_body' => array(),
    'field_component_image' => array(),
    'field_component_link' => array(
      'und' => array(
        0 => array(
          'attributes' => array(),
          'title' => 'Læs mere her',
          'url' => 'http://www.adapt.dk',
        ),
      ),
    ),
    'field_component_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod<br>tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,<br>quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo<br>consequat.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/6',
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
    'title' => 'Bliver du klogere på pension?',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => 'ed1f8db3-78b8-41b7-a586-7ee1781e2cf8',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/59cd7f72-b8d9-401a-979e-d2cfe70a5b63',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_component_body' => array(),
    'field_component_image' => array(),
    'field_component_link' => array(
      'und' => array(
        0 => array(
          'attributes' => array(),
          'title' => 'Læs mere her',
          'url' => 'http://www.adapt.dk',
        ),
      ),
    ),
    'field_component_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod<br>tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,<br>quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo<br>consequat.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/5',
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
    'title' => '210 mia. kr.',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => '59cd7f72-b8d9-401a-979e-d2cfe70a5b63',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/cfe12e6d-afea-469c-a923-159f6f7cec47',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_component_body' => array(),
    'field_component_image' => array(),
    'field_component_link' => array(
      'und' => array(
        0 => array(
          'attributes' => array(),
          'title' => 'Læs mere her',
          'url' => 'http://www.adapt.dk',
        ),
      ),
    ),
    'field_component_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod<br>tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,<br>quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo<br>consequat.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/4',
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
    'title' => 'Arbejdsglæde',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => 'cfe12e6d-afea-469c-a923-159f6f7cec47',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/6792c2e7-f68d-483e-9ec6-420f35ba77ea',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_component_body' => array(),
    'field_component_image' => array(),
    'field_component_link' => array(
      'und' => array(
        0 => array(
          'attributes' => array(),
          'title' => 'Læs mere her',
          'url' => 'http://www.adapt.dk',
        ),
      ),
    ),
    'field_component_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod<br>tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,<br>quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo<br>consequat.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/3',
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
    'title' => 'Præsentation af årsregnskab',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => '6792c2e7-f68d-483e-9ec6-420f35ba77ea',
  );

  return $entities;
}
