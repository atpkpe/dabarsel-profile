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
      'uri' => 'node/6792c2e7-f68d-483e-9ec6-420f35ba77ea',
      'cause' => 'node/f664b3be-0a06-4cbf-bfe7-c9287a9fc1d3',
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
    'title' => 'Præsentation af årsregnskab',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Præsentation af årsregnskab',
        ),
      ),
    ),
    'title_original' => 'Præsentation af årsregnskab',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => '6792c2e7-f68d-483e-9ec6-420f35ba77ea',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/cfe12e6d-afea-469c-a923-159f6f7cec47',
      'cause' => 'node/f664b3be-0a06-4cbf-bfe7-c9287a9fc1d3',
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
      'source' => 'node/2',
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
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Arbejdsglæde',
        ),
      ),
    ),
    'title_original' => 'Arbejdsglæde',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => 'cfe12e6d-afea-469c-a923-159f6f7cec47',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/59cd7f72-b8d9-401a-979e-d2cfe70a5b63',
      'cause' => 'node/f664b3be-0a06-4cbf-bfe7-c9287a9fc1d3',
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
    'title' => '210 mia. kr.',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => '210 mia. kr.',
        ),
      ),
    ),
    'title_original' => '210 mia. kr.',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => '59cd7f72-b8d9-401a-979e-d2cfe70a5b63',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/ed1f8db3-78b8-41b7-a586-7ee1781e2cf8',
      'cause' => 'node/f664b3be-0a06-4cbf-bfe7-c9287a9fc1d3',
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
    'title' => 'Bliver du klogere på pension?',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Bliver du klogere på pension?',
        ),
      ),
    ),
    'title_original' => 'Bliver du klogere på pension?',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'component',
    'uid' => 1,
    'uuid' => 'ed1f8db3-78b8-41b7-a586-7ee1781e2cf8',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f664b3be-0a06-4cbf-bfe7-c9287a9fc1d3',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_section_body' => array(),
    'field_section_facts' => array(
      'und' => array(
        0 => array(
          'target_id' => '6792c2e7-f68d-483e-9ec6-420f35ba77ea',
        ),
        1 => array(
          'target_id' => 'cfe12e6d-afea-469c-a923-159f6f7cec47',
        ),
        2 => array(
          'target_id' => '59cd7f72-b8d9-401a-979e-d2cfe70a5b63',
        ),
        3 => array(
          'target_id' => 'ed1f8db3-78b8-41b7-a586-7ee1781e2cf8',
        ),
      ),
    ),
    'field_section_related' => array(
      'und' => array(
        0 => array(
          'target_id' => '6792c2e7-f68d-483e-9ec6-420f35ba77ea',
        ),
        1 => array(
          'target_id' => 'cfe12e6d-afea-469c-a923-159f6f7cec47',
        ),
        2 => array(
          'target_id' => '59cd7f72-b8d9-401a-979e-d2cfe70a5b63',
        ),
        3 => array(
          'target_id' => 'ed1f8db3-78b8-41b7-a586-7ee1781e2cf8',
        ),
      ),
    ),
    'field_section_slides' => array(),
    'field_section_summary' => array(),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'pnid' => 1,
        'name' => 'node:section:frontpage:default',
        'title' => 'Frontpage',
        'panelizer_type' => 'node',
        'panelizer_key' => 'section',
        'no_blocks' => 0,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'standard',
        'contexts' => array(),
        'relationships' => array(),
        'did' => NULL,
        'access' => array(),
        'view_mode' => 'default',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => 1,
        'extra' => array(),
        'table' => 'panelizer_defaults',
        'type' => 'Overridden',
        'export_type' => 3,
        'display' => array(
          'args' => array(),
          'content' => array(
            3 => array(
              'pid' => 3,
              'did' => 1,
              'panel' => 'row2',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_facts',
              'shown' => 1,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 1,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => '1_4_fact',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => 'ffc63af1-f51d-490b-87aa-6f930921c714',
            ),
            4 => array(
              'pid' => 4,
              'did' => 1,
              'panel' => 'row2',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_facts',
              'shown' => 1,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 1,
                'delta_offset' => 1,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => '1_4_fact',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 1,
              'locks' => array(),
              'uuid' => 'f754e3f7-0b3f-4395-922e-bccc6b844be6',
            ),
            5 => array(
              'pid' => 5,
              'did' => 1,
              'panel' => 'row2',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_facts',
              'shown' => 1,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 1,
                'delta_offset' => 2,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => '1_4_fact',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 2,
              'locks' => array(),
              'uuid' => '5759cabd-8bf3-482a-a308-b74d067b4e39',
            ),
            6 => array(
              'pid' => 6,
              'did' => 1,
              'panel' => 'row2',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_facts',
              'shown' => 1,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 1,
                'delta_offset' => 3,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => '1_4_fact',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 3,
              'locks' => array(),
              'uuid' => 'aa4678c9-1089-4125-a1c1-19fb073bd6c4',
            ),
          ),
          'panels' => array(
            'row2' => array(
              0 => 3,
              1 => 4,
              2 => 5,
              3 => 6,
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 1,
          'renderer' => 'standard',
          'layout' => 'atp_section',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'middle' => NULL,
              'row1' => NULL,
              'row3' => NULL,
              'row4' => NULL,
              'row5' => NULL,
              'row2' => NULL,
            ),
            'row2' => array(
              'style' => 'naked',
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'hide_title' => 0,
          'title_pane' => 0,
          'uuid' => '5fc08c84-30ee-4420-87e9-603b983d68a4',
        ),
        'export_module' => 'atp_section',
        'entity_id' => 5,
        'revision_id' => 22,
      ),
    ),
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
    'title' => 'Forside',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Forside',
        ),
      ),
    ),
    'title_original' => 'Forside',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => 'f664b3be-0a06-4cbf-bfe7-c9287a9fc1d3',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/242906e5-3663-4679-9564-399ec3fd5431',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_section_body' => array(),
    'field_section_facts' => array(),
    'field_section_related' => array(),
    'field_section_slides' => array(),
    'field_section_summary' => array(),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:section:section_a4:default',
        'title' => 'Section A4',
        'panelizer_type' => 'node',
        'panelizer_key' => 'section',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'standard',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'default',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(
            'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508' => array(
              'pid' => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 0,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'teaser',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => 'e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'panels' => array(
            'row1' => array(
              0 => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'atp_section',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'middle' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'uuid' => '5fc08c84-30ee-4420-87e9-603b983d68a4',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'atp_section',
        'type' => 'Standard',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
        'entity_id' => 6,
        'revision_id' => 6,
      ),
    ),
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
    'title' => 'Om ATP',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Om ATP',
        ),
      ),
    ),
    'title_original' => 'Om ATP',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => '242906e5-3663-4679-9564-399ec3fd5431',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/126c9a15-3172-4e21-9a34-8194fc363ca2',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_section_body' => array(),
    'field_section_facts' => array(),
    'field_section_related' => array(),
    'field_section_slides' => array(),
    'field_section_summary' => array(),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:section:section_a4:default',
        'title' => 'Section A4',
        'panelizer_type' => 'node',
        'panelizer_key' => 'section',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'standard',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'default',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(
            'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508' => array(
              'pid' => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 0,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'teaser',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => 'e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'panels' => array(
            'row1' => array(
              0 => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'atp_section',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'middle' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'uuid' => '5fc08c84-30ee-4420-87e9-603b983d68a4',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'atp_section',
        'type' => 'Standard',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
        'entity_id' => 7,
        'revision_id' => 7,
      ),
    ),
    'path' => array(
      'pid' => NULL,
      'source' => 'node/7',
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
    'title' => 'Job',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Job',
        ),
      ),
    ),
    'title_original' => 'Job',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => '126c9a15-3172-4e21-9a34-8194fc363ca2',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2074d978-c018-4a38-9958-a1319fb23ed1',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_section_body' => array(),
    'field_section_facts' => array(),
    'field_section_related' => array(),
    'field_section_slides' => array(),
    'field_section_summary' => array(),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:section:section_a4:default',
        'title' => 'Section A4',
        'panelizer_type' => 'node',
        'panelizer_key' => 'section',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'standard',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'default',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(
            'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508' => array(
              'pid' => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 0,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'teaser',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => 'e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'panels' => array(
            'row1' => array(
              0 => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'atp_section',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'middle' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'uuid' => '5fc08c84-30ee-4420-87e9-603b983d68a4',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'atp_section',
        'type' => 'Standard',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
        'entity_id' => 8,
        'revision_id' => 8,
      ),
    ),
    'path' => array(
      'pid' => NULL,
      'source' => 'node/8',
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
    'title' => 'Presse',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Presse',
        ),
      ),
    ),
    'title_original' => 'Presse',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => '2074d978-c018-4a38-9958-a1319fb23ed1',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/1b92d8ff-afeb-455f-a1bd-91fe74393f25',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_section_body' => array(),
    'field_section_facts' => array(),
    'field_section_related' => array(),
    'field_section_slides' => array(),
    'field_section_summary' => array(),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:section:section_a4:default',
        'title' => 'Section A4',
        'panelizer_type' => 'node',
        'panelizer_key' => 'section',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'standard',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'default',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(
            'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508' => array(
              'pid' => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 0,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'teaser',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => 'e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'panels' => array(
            'row1' => array(
              0 => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'atp_section',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'middle' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'uuid' => '5fc08c84-30ee-4420-87e9-603b983d68a4',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'atp_section',
        'type' => 'Standard',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
        'entity_id' => 9,
        'revision_id' => 9,
      ),
    ),
    'path' => array(
      'pid' => NULL,
      'source' => 'node/9',
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
    'title' => 'Samfundsansvar',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Samfundsansvar',
        ),
      ),
    ),
    'title_original' => 'Samfundsansvar',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => '1b92d8ff-afeb-455f-a1bd-91fe74393f25',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a34caed2-b478-496a-9e16-4ed60706a280',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_section_body' => array(),
    'field_section_facts' => array(),
    'field_section_related' => array(),
    'field_section_slides' => array(),
    'field_section_summary' => array(),
    'language' => 'da',
    'log' => 'Created by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:section:section_a4:default',
        'title' => 'Section A4',
        'panelizer_type' => 'node',
        'panelizer_key' => 'section',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'standard',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'default',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(
            'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508' => array(
              'pid' => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 0,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'teaser',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => 'e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'panels' => array(
            'row1' => array(
              0 => 'new-e92df8fe-fbe5-4871-bff1-c8c3452b6508',
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'atp_section',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'middle' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'uuid' => '5fc08c84-30ee-4420-87e9-603b983d68a4',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'atp_section',
        'type' => 'Standard',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
        'entity_id' => 10,
        'revision_id' => 10,
      ),
    ),
    'path' => array(
      'pid' => NULL,
      'source' => 'node/10',
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
    'title' => 'Resultater & rapporter',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Resultater & rapporter',
        ),
      ),
    ),
    'title_original' => 'Resultater & rapporter',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => 'a34caed2-b478-496a-9e16-4ed60706a280',
  );
  $entities['atp_test_content'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/b1f6ffd9-177e-4808-8fb0-73e718679b17',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_section_body' => array(),
    'field_section_facts' => array(),
    'field_section_related' => array(
      'und' => array(
        0 => array(
          'target_id' => 'ed1f8db3-78b8-41b7-a586-7ee1781e2cf8',
        ),
      ),
    ),
    'field_section_slides' => array(),
    'field_section_summary' => array(),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:section:section_a3:default',
        'title' => 'Section A3',
        'panelizer_type' => 'node',
        'panelizer_key' => 'section',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'standard',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'default',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(
            'new-5e09ba24-8488-455a-8dbb-8e4de167ae60' => array(
              'pid' => 'new-5e09ba24-8488-455a-8dbb-8e4de167ae60',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 1,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'default',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => '5e09ba24-8488-455a-8dbb-8e4de167ae60',
            ),
            'new-aa842a83-c45d-4e13-8e5f-b8e936f3068e' => array(
              'pid' => 'new-aa842a83-c45d-4e13-8e5f-b8e936f3068e',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 1,
                'delta_offset' => 1,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'default',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 1,
              'locks' => array(),
              'uuid' => 'aa842a83-c45d-4e13-8e5f-b8e936f3068e',
            ),
            'new-6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31' => array(
              'pid' => 'new-6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31',
              'panel' => 'row1',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_related',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 1,
                'delta_offset' => 2,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'default',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 2,
              'locks' => array(),
              'uuid' => '6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31',
            ),
            'new-642e2130-d972-489a-a32d-69bf24b84da3' => array(
              'pid' => 'new-642e2130-d972-489a-a32d-69bf24b84da3',
              'panel' => 'row2',
              'type' => 'entity_field',
              'subtype' => 'node:field_section_facts',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'entityreference_entity_view',
                'delta_limit' => 4,
                'delta_offset' => 0,
                'delta_reversed' => 0,
                'formatter_settings' => array(
                  'view_mode' => 'teaser',
                  'links' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 1,
                'override_title_text' => '',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => '642e2130-d972-489a-a32d-69bf24b84da3',
            ),
          ),
          'panels' => array(
            'row1' => array(
              0 => 'new-5e09ba24-8488-455a-8dbb-8e4de167ae60',
              1 => 'new-aa842a83-c45d-4e13-8e5f-b8e936f3068e',
              2 => 'new-6b9f5152-a53d-4fbb-b7c6-dc2e6df3ff31',
            ),
            'row2' => array(
              0 => 'new-642e2130-d972-489a-a32d-69bf24b84da3',
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'atp_section',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'middle' => NULL,
              'area1' => NULL,
              'area2' => NULL,
              'area3' => NULL,
              'quickfacts' => NULL,
              'row1' => NULL,
              'row2' => NULL,
              'row3' => NULL,
              'row4' => NULL,
              'row5' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'uuid' => '5fc08c84-30ee-4420-87e9-603b983d68a4',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'atp_section',
        'type' => 'Standard',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
        'entity_id' => 11,
        'revision_id' => 11,
      ),
    ),
    'path' => array(
      'pid' => NULL,
      'source' => 'node/11',
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
    'title' => 'I fokus',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'I fokus',
        ),
      ),
    ),
    'title_original' => 'I fokus',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'section',
    'uid' => 1,
    'uuid' => 'b1f6ffd9-177e-4808-8fb0-73e718679b17',
  );

  return $entities;
}
