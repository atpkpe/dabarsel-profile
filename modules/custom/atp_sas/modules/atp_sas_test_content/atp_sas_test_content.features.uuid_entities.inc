<?php
/**
 * @file
 * atp_sas_test_content.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function atp_sas_test_content_uuid_default_entities() {
  $entities = array();

  $entities['atp_test_content_sas'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/88d95fe7-8f37-4917-9926-c6cd119b9555',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_page_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Her er graferne:</p><p>[[sasDiag|id:DQ1_FIG17_Omsætning_Line_ReelDATA|path:profiles/atp/modules/custom/atp_sas/test/Tabeller og grafer til ATP som investor/2014/Q1|type:line]]</p><p>[[sasDiag|id:DQ1_FIG13_Indkomst_Line|path:profiles/atp/modules/custom/atp_sas/test/Tabeller og grafer til ATP som investor/2014/Q1|type:line]]</p><p>[[sasDiag|id:DQ1_FIG3a_Risikoklasser_Circle|path:profiles/atp/modules/custom/atp_sas/test/Tabeller og grafer til ATP som investor/2014/Q1|type:circle]]</p><p>[[sasDiag|id:DQ1_FIG5_HistoriskeResultater_Bar|path:profiles/atp/modules/custom/atp_sas/test/Tabeller og grafer til ATP som investor/2014/Q2|type:bar]]</p><p>[[sasDiag|id:DQ1_FIG8_Investeringsomkostninger_Table|path:profiles/atp/modules/custom/atp_sas/test/Tabeller og grafer til ATP som investor/2014/Q2|type:table]]</p><p>[[sasDiag|id:EQ1_FIG11_InvestmentPortfolio_Table|path:profiles/atp/modules/custom/atp_sas/test/Tabeller og grafer til ATP som investor/2014/Q2|type:table]]</p>',
        ),
      ),
    ),
    'field_page_image' => array(),
    'field_page_related' => array(),
    'field_page_summary' => array(),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'panelizer' => array(
      'default' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:page:standard_2_column:default',
        'title' => 'Standard 2 column',
        'panelizer_type' => 'node',
        'panelizer_key' => 'page',
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
            'new-a795505c-7453-470a-aac5-7e2f3470055a' => array(
              'pid' => 'new-a795505c-7453-470a-aac5-7e2f3470055a',
              'panel' => 'left',
              'type' => 'menu_tree',
              'subtype' => 'menu-top',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'menu_name' => 'menu-top',
                'parent_mlid' => 0,
                'parent' => 'menu-top:0',
                'title_link' => 0,
                'admin_title' => '',
                'level' => 3,
                'follow' => 0,
                'depth' => 1,
                'expanded' => 0,
                'sort' => 0,
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
              'uuid' => 'a795505c-7453-470a-aac5-7e2f3470055a',
            ),
            'new-88a2a404-996a-4747-8a00-4eda16885f3d' => array(
              'pid' => 'new-88a2a404-996a-4747-8a00-4eda16885f3d',
              'panel' => 'left',
              'type' => 'menu_tree',
              'subtype' => 'main-menu',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'menu_name' => 'main-menu',
                'parent_mlid' => 0,
                'parent' => 'main-menu:0',
                'title_link' => 0,
                'admin_title' => '',
                'level' => 3,
                'follow' => 0,
                'depth' => 1,
                'expanded' => 0,
                'sort' => 0,
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
              'uuid' => '88a2a404-996a-4747-8a00-4eda16885f3d',
            ),
            'new-ac50784b-b76d-4561-aaee-cd698a3b4151' => array(
              'pid' => 'new-ac50784b-b76d-4561-aaee-cd698a3b4151',
              'panel' => 'row1',
              'type' => 'tools',
              'subtype' => 'tools',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 0,
              'locks' => array(),
              'uuid' => 'ac50784b-b76d-4561-aaee-cd698a3b4151',
            ),
            'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923' => array(
              'pid' => 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923',
              'panel' => 'row1',
              'type' => 'page_breadcrumb',
              'subtype' => 'page_breadcrumb',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 1,
              'locks' => array(),
              'uuid' => '51c20a50-9bc1-4f89-beb1-d4fe4cc77923',
            ),
            'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f' => array(
              'pid' => 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f',
              'panel' => 'row2',
              'type' => 'page_title',
              'subtype' => 'page_title',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'markup' => 'h1',
                'class' => '',
                'id' => '',
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
              'uuid' => '96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f',
            ),
            'new-0889e315-62a4-4384-b5bc-550e9bfac0f0' => array(
              'pid' => 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0',
              'panel' => 'row2',
              'type' => 'entity_field',
              'subtype' => 'node:field_page_summary',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'text_trimmed',
                'delta_limit' => 0,
                'delta_offset' => 0,
                'delta_reversed' => FALSE,
                'formatter_settings' => array(
                  'field_wrapper' => 0,
                  'item_wrapper' => 0,
                  'label_wrapper' => 0,
                ),
                'context' => 'panelizer',
                'override_title' => 0,
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
              'uuid' => '0889e315-62a4-4384-b5bc-550e9bfac0f0',
            ),
            'new-658ff852-c137-4d20-ab15-832d4f974813' => array(
              'pid' => 'new-658ff852-c137-4d20-ab15-832d4f974813',
              'panel' => 'row2',
              'type' => 'entity_field',
              'subtype' => 'node:field_page_body',
              'shown' => TRUE,
              'access' => array(),
              'configuration' => array(
                'label' => 'hidden',
                'formatter' => 'text_default',
                'delta_limit' => 0,
                'delta_offset' => 0,
                'delta_reversed' => FALSE,
                'formatter_settings' => array(
                  'field_wrapper' => 0,
                  'item_wrapper' => 0,
                  'label_wrapper' => 0,
                ),
                'context' => 'panelizer',
              ),
              'cache' => array(),
              'style' => array(
                'settings' => NULL,
              ),
              'css' => array(),
              'extras' => array(),
              'position' => 2,
              'locks' => array(),
              'uuid' => '658ff852-c137-4d20-ab15-832d4f974813',
            ),
          ),
          'panels' => array(
            'left' => array(
              0 => 'new-a795505c-7453-470a-aac5-7e2f3470055a',
              1 => 'new-88a2a404-996a-4747-8a00-4eda16885f3d',
            ),
            'row1' => array(
              0 => 'new-ac50784b-b76d-4561-aaee-cd698a3b4151',
              1 => 'new-51c20a50-9bc1-4f89-beb1-d4fe4cc77923',
            ),
            'row2' => array(
              0 => 'new-96f0eeaa-76d2-4cbc-a3db-9d19a9eb944f',
              1 => 'new-0889e315-62a4-4384-b5bc-550e9bfac0f0',
              2 => 'new-658ff852-c137-4d20-ab15-832d4f974813',
            ),
          ),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'atp_twocol',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'center' => NULL,
              'left' => NULL,
              'row1' => NULL,
              'row2' => NULL,
              'row3' => NULL,
              'row4' => NULL,
              'row5' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '%node:title',
          'uuid' => '20b88c24-8bb0-4e4b-bd9a-5a7a5164609f',
          'hide_title' => 0,
          'title_pane' => 'new-658ff852-c137-4d20-ab15-832d4f974813',
        ),
        'export_module' => 'atp_page',
        'type' => 'Standard',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
        'entity_id' => 35,
        'revision_id' => 37,
      ),
    ),
    'path' => array(
      'pid' => NULL,
      'source' => 'node/35',
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
    'title' => 'Så er der grafer!',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Så er der grafer!',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(),
    'uuid' => '88d95fe7-8f37-4917-9926-c6cd119b9555',
  );

  return $entities;
}
