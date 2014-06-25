<?php
/**
 * @file
 * atp_data_deployment.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function atp_data_deployment_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 004c07fd-c300-4cc7-9874-8eeca0070201
  $menu_uuid_links['004c07fd-c300-4cc7-9874-8eeca0070201'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Resultater & rapporter',
    'options' => array(
      'node_type' => 'section',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '004c07fd-c300-4cc7-9874-8eeca0070201',
    'uuid_path' => 'node/a34caed2-b478-496a-9e16-4ed60706a280',
  );
  // Exported menu link: 08954b4d-8b0f-4e72-84b3-415e1b340bc7
  $menu_uuid_links['08954b4d-8b0f-4e72-84b3-415e1b340bc7'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Kategori B',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '08954b4d-8b0f-4e72-84b3-415e1b340bc7',
    'parent_uuid' => 'e50f0574-2730-4e7d-bae3-d3a7edad891e',
    'uuid_path' => 'node/986679d1-ee2b-4d5a-85a4-3373f0aaadac',
  );
  // Exported menu link: 19f485ea-3202-482f-b6b4-7d7305f9d032
  $menu_uuid_links['19f485ea-3202-482f-b6b4-7d7305f9d032'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Kategori C',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '19f485ea-3202-482f-b6b4-7d7305f9d032',
    'parent_uuid' => 'e50f0574-2730-4e7d-bae3-d3a7edad891e',
    'uuid_path' => 'node/b176bbfa-7ae3-4217-9842-3f49e5631df2',
  );
  // Exported menu link: 391e308e-e858-4d52-a91c-ee4968fbd491
  $menu_uuid_links['391e308e-e858-4d52-a91c-ee4968fbd491'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Markedsrisiko',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '391e308e-e858-4d52-a91c-ee4968fbd491',
    'parent_uuid' => 'ef93402e-dfee-11e3-a989-d1f96a278528',
    'uuid_path' => 'node/dc538c53-463a-4548-9c60-542c078ca68d',
  );
  // Exported menu link: 53cc40ed-2782-48ca-94f6-6987f84679e4
  $menu_uuid_links['53cc40ed-2782-48ca-94f6-6987f84679e4'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Job',
    'options' => array(
      'node_type' => 'section',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => '53cc40ed-2782-48ca-94f6-6987f84679e4',
    'uuid_path' => 'node/126c9a15-3172-4e21-9a34-8194fc363ca2',
  );
  // Exported menu link: 67fff26b-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff26b-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pensionsforretningen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '67fff26b-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609d05-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff2fc-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff2fc-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Din pensionsguide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '67fff2fc-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609d05-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff38a-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff38a-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Rundt om ATP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '67fff38a-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609d05-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff419-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff419-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Længere levetid',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '67fff419-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609d05-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff4a5-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff4a5-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'SP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => '67fff4a5-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609d05-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff69b-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff69b-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Investeringsforretningen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '67fff69b-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff72d-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff72d-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Investeringsstrategi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '67fff72d-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff7b3-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff7b3-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Resultater og omkostninger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '67fff7b3-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff83f-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff83f-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Afkast',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fff8ca-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fff8ca-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Risiko',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => '67fff8ca-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 67fffab0-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fffab0-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Vision og kultur',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '67fffab0-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff69b-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 67fffb42-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fffb42-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Organisation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '67fffb42-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff69b-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 67fffbca-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fffbca-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Datterselskaber',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '67fffbca-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff69b-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 67fffc53-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fffc53-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Forskning og udvikler',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '67fffc53-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff69b-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 67fffcdc-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fffcdc-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => '67fffcdc-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff69b-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 67fffec2-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67fffec2-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Afdækning og investering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '67fffec2-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff72d-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 67ffff51-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67ffff51-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Risikokapital og individuelt reservekrav',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '67ffff51-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff72d-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 67ffffda-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['67ffffda-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Risikospredning og forsikringsstrategier',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '67ffffda-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff72d-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000063-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000063-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Afdækning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '68000063-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff7b3-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 6800022a-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['6800022a-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Absolut målsætning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '6800022a-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff72d-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 680002d7-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['680002d7-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Investering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '680002d7-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff7b3-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000363-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000363-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Omkostninger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '68000363-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff7b3-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000527-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000527-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Afdækningsporteføljen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '68000527-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 680006ac-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['680006ac-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Investeringsporteføljen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '680006ac-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000737-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000737-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Renter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '68000737-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000902-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000902-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kredit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '68000902-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000998-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000998-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Aktier',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => '68000998-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000b5d-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000b5d-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inflation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'uuid' => '68000b5d-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000be9-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000be9-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Råvarer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'uuid' => '68000be9-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff83f-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000dfb-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000dfb-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Markedsrisiko',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '68000dfb-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff8ca-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000ee9-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000ee9-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Levetidsrisiko',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '68000ee9-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff8ca-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68000fac-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68000fac-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Øvrige risici',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '68000fac-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff8ca-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68001068-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68001068-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP og Solvens II',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '68001068-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '67fff8ca-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68001126-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68001126-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Ansvarlig investeringer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'uuid' => '68001126-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 680011e1-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['680011e1-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Retningslinjer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '680011e1-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001126-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 6800129f-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['6800129f-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP\'s komité',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '6800129f-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001126-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 6800135a-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['6800135a-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Netværk',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '6800135a-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001126-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68001415-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68001415-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sådan gør vi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '68001415-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001126-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 680014d6-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['680014d6-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Dilemmaer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => '680014d6-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001126-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68001594-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68001594-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'uuid' => '68001594-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001126-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 68001652-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['68001652-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Aktivt ejerskab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'uuid' => '68001652-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: 6800170d-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['6800170d-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Retningslinjer for aktivt ejerskab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => '6800170d-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001652-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 680017cb-fc36-11e3-a37a-080027880ca6
  $menu_uuid_links['680017cb-fc36-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP-indlæg på generalforsamlinger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '680017cb-fc36-11e3-a37a-080027880ca6',
    'parent_uuid' => '68001652-fc36-11e3-a37a-080027880ca6',
  );
  // Exported menu link: 6b9ce347-f21c-11e3-a020-080027880ca6
  $menu_uuid_links['6b9ce347-f21c-11e3-a020-080027880ca6'] = array(
    'menu_name' => 'menu-top',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '6b9ce347-f21c-11e3-a020-080027880ca6',
  );
  // Exported menu link: 74c9bb16-e016-11e3-a989-d1f96a278528
  $menu_uuid_links['74c9bb16-e016-11e3-a989-d1f96a278528'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Dilemma',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '74c9bb16-e016-11e3-a989-d1f96a278528',
    'parent_uuid' => 'e50f0574-2730-4e7d-bae3-d3a7edad891e',
    'uuid_path' => 'node/5318a2bf-5d2e-4d11-a674-97050f2bb29e',
  );
  // Exported menu link: 8c1eeee8-7bd4-46ef-a5c7-b87a929fd134
  $menu_uuid_links['8c1eeee8-7bd4-46ef-a5c7-b87a929fd134'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Kategori D',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '8c1eeee8-7bd4-46ef-a5c7-b87a929fd134',
    'parent_uuid' => 'e50f0574-2730-4e7d-bae3-d3a7edad891e',
    'uuid_path' => 'node/2da5bce7-e4b3-45cb-9ff1-e9662edddbcd',
  );
  // Exported menu link: 9d1fc520-d3ae-4414-bacd-56e1fabd3b54
  $menu_uuid_links['9d1fc520-d3ae-4414-bacd-56e1fabd3b54'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Om ATP',
    'options' => array(
      'node_type' => 'section',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'uuid' => '9d1fc520-d3ae-4414-bacd-56e1fabd3b54',
    'uuid_path' => 'node/242906e5-3663-4679-9564-399ec3fd5431',
  );
  // Exported menu link: a273d184-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d184-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Administrationsforretningen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'a273d184-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a960a282-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a273d220-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d220-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pension & Sikring',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => 'a273d220-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a960a282-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a273d2ba-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d2ba-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Udbetaling Danmark',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => 'a273d2ba-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a960a282-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a273d353-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d353-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Udbetaling Danmark - internationalt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => 'a273d353-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a960a282-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a273d632-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d632-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Spørgsmål og svar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => 'a273d632-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a960a282-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a273d6d7-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d6d7-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP Livslang Pension',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'a273d6d7-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273d76b-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d76b-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Privat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a960a332-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a273d7ff-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d7ff-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Erhverv',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a960a332-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a273d893-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d893-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'SUPP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => 'a273d893-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273d924-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d924-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Feriekonto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => 'a273d924-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273d9b9-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273d9b9-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'LG',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => 'a273d9b9-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273da4d-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273da4d-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'AUB - Arbejdsgivernes uddannelsesbidrag',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => 'a273da4d-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273dade-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273dade-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'AES - Arbejdsmarkedets Erhvervssygdomssikring',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'uuid' => 'a273dade-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273db6f-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273db6f-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Skattenedslag for seniorer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'uuid' => 'a273db6f-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273dc03-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273dc03-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Folkepension',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'uuid' => 'a273dc03-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273dc92-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273dc92-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Førtidspension',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'uuid' => 'a273dc92-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273dd20-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273dd20-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Boligstøtte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'uuid' => 'a273dd20-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273ddb1-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273ddb1-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Barselsdagpenge',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'uuid' => 'a273ddb1-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273de43-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273de43-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Familieydelser',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'uuid' => 'a273de43-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273ded1-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273ded1-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'International pension',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'uuid' => 'a273ded1-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273df62-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273df62-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Social sikring i udlandet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'uuid' => 'a273df62-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d76b-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273dff4-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273dff4-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP Livslang Pension',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'a273dff4-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e082-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e082-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'FerieKonto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => 'a273e082-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e111-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e111-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'AUB - Arbejdsgivernes uddannelsesbidrag',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => 'a273e111-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e19f-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e19f-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'AES - Arbejdsmarkedets Erhvervssygdomssikring',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => 'a273e19f-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e37d-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e37d-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://barsel.dk',
    'router_path' => '',
    'link_title' => 'Barsel.dk',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => 'a273e37d-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e417-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e417-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'DA-Barsel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'uuid' => 'a273e417-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e49f-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e49f-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'LG',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'uuid' => 'a273e49f-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e531-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e531-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Finansieringsbidrag',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'uuid' => 'a273e531-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e5bf-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e5bf-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Samlet Betaling',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'uuid' => 'a273e5bf-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e650-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e650-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Barselsdagpenge',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'uuid' => 'a273e650-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a273e6df-fc48-11e3-a37a-080027880ca6
  $menu_uuid_links['a273e6df-fc48-11e3-a37a-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'International social sikring?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'uuid' => 'a273e6df-fc48-11e3-a37a-080027880ca6',
    'parent_uuid' => 'a273d7ff-fc48-11e3-a37a-080027880ca6',
  );
  // Exported menu link: a9609d05-e26f-11e3-8111-080027880ca6
  $menu_uuid_links['a9609d05-e26f-11e3-8111-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP som pensionsforvalter',
    'options' => array(
      'attributes' => array(
        'title' => 'For private og erhverv',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'a9609d05-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a9609ee0-e26f-11e3-8111-080027880ca6
  $menu_uuid_links['a9609ee0-e26f-11e3-8111-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP som investor',
    'options' => array(
      'attributes' => array(
        'title' => 'Bag om Pension',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => 'a9609ee0-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a960a282-e26f-11e3-8111-080027880ca6
  $menu_uuid_links['a960a282-e26f-11e3-8111-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP som administrator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => 'a960a282-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: a960a332-e26f-11e3-8111-080027880ca6
  $menu_uuid_links['a960a332-e26f-11e3-8111-080027880ca6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Info & selvbetjening',
    'options' => array(
      'attributes' => array(
        'title' => 'Bag om ordning og ydelser',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => 'a960a332-e26f-11e3-8111-080027880ca6',
  );
  // Exported menu link: bbd725b6-ce67-42ed-b9d1-322f36117dd4
  $menu_uuid_links['bbd725b6-ce67-42ed-b9d1-322f36117dd4'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Presse',
    'options' => array(
      'node_type' => 'section',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => 'bbd725b6-ce67-42ed-b9d1-322f36117dd4',
    'uuid_path' => 'node/2074d978-c018-4a38-9958-a1319fb23ed1',
  );
  // Exported menu link: c19ad1b7-cda9-4798-bda7-1a43b59d0322
  $menu_uuid_links['c19ad1b7-cda9-4798-bda7-1a43b59d0322'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'I fokus',
    'options' => array(
      'node_type' => 'section',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'c19ad1b7-cda9-4798-bda7-1a43b59d0322',
    'uuid_path' => 'node/b1f6ffd9-177e-4808-8fb0-73e718679b17',
  );
  // Exported menu link: e50f0574-2730-4e7d-bae3-d3a7edad891e
  $menu_uuid_links['e50f0574-2730-4e7d-bae3-d3a7edad891e'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Samfundsansvar',
    'options' => array(
      'node_type' => 'section',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => 'e50f0574-2730-4e7d-bae3-d3a7edad891e',
    'uuid_path' => 'node/1b92d8ff-afeb-455f-a1bd-91fe74393f25',
  );
  // Exported menu link: ef93402e-dfee-11e3-a989-d1f96a278528
  $menu_uuid_links['ef93402e-dfee-11e3-a989-d1f96a278528'] = array(
    'menu_name' => 'menu-top',
    'router_path' => 'node/%',
    'link_title' => 'Kategori A',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => 'ef93402e-dfee-11e3-a989-d1f96a278528',
    'parent_uuid' => 'e50f0574-2730-4e7d-bae3-d3a7edad891e',
    'uuid_path' => 'node/b14112cf-9c19-404f-824e-259762c2a32f',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AES - Arbejdsmarkedets Erhvervssygdomssikring');
  t('ATP Livslang Pension');
  t('ATP og Solvens II');
  t('ATP som administrator');
  t('ATP som investor');
  t('ATP som pensionsforvalter');
  t('ATP\'s komité');
  t('ATP-indlæg på generalforsamlinger');
  t('AUB - Arbejdsgivernes uddannelsesbidrag');
  t('Absolut målsætning');
  t('Administrationsforretningen');
  t('Afdækning');
  t('Afdækning og investering');
  t('Afdækningsporteføljen');
  t('Afkast');
  t('Aktier');
  t('Aktivt ejerskab');
  t('Ansvarlig investeringer');
  t('Barsel.dk');
  t('Barselsdagpenge');
  t('Boligstøtte');
  t('DA-Barsel');
  t('Datterselskaber');
  t('Dilemma');
  t('Dilemmaer');
  t('Din pensionsguide');
  t('Erhverv');
  t('FAQ');
  t('Familieydelser');
  t('FerieKonto');
  t('Feriekonto');
  t('Finansieringsbidrag');
  t('Folkepension');
  t('Forskning og udvikler');
  t('Førtidspension');
  t('I fokus');
  t('Inflation');
  t('Info & selvbetjening');
  t('International pension');
  t('International social sikring?');
  t('Investering');
  t('Investeringsforretningen');
  t('Investeringsporteføljen');
  t('Investeringsstrategi');
  t('Job');
  t('Kategori A');
  t('Kategori B');
  t('Kategori C');
  t('Kategori D');
  t('Kontakt');
  t('Kredit');
  t('LG');
  t('Levetidsrisiko');
  t('Længere levetid');
  t('Markedsrisiko');
  t('Netværk');
  t('Om ATP');
  t('Omkostninger');
  t('Organisation');
  t('Pension & Sikring');
  t('Pensionsforretningen');
  t('Presse');
  t('Privat');
  t('Renter');
  t('Resultater & rapporter');
  t('Resultater og omkostninger');
  t('Retningslinjer');
  t('Retningslinjer for aktivt ejerskab');
  t('Risiko');
  t('Risikokapital og individuelt reservekrav');
  t('Risikospredning og forsikringsstrategier');
  t('Rundt om ATP');
  t('Råvarer');
  t('SP');
  t('SUPP');
  t('Samfundsansvar');
  t('Samlet Betaling');
  t('Skattenedslag for seniorer');
  t('Social sikring i udlandet');
  t('Spørgsmål og svar');
  t('Sådan gør vi');
  t('Udbetaling Danmark');
  t('Udbetaling Danmark - internationalt');
  t('Vision og kultur');
  t('Øvrige risici');

  return $menu_uuid_links;
}
