<?php
/**
 * @file
 * atp_data_deployment.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function atp_data_deployment_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-bottom-menu_find-hjlp:<front>
  $menu_links['menu-bottom-menu_find-hjlp:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Find hjælp',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bottom-menu_find-hjlp:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bottom-menu_sitemap:<front>
  $menu_links['menu-bottom-menu_sitemap:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-bottom-menu_sitemap:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_afkast:<front>
  $menu_links['menu-footer_afkast:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Afkast',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_afkast:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-investor:<front>',
  );
  // Exported menu link: menu-footer_ansvarlige-investeringer:<front>
  $menu_links['menu-footer_ansvarlige-investeringer:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Ansvarlige investeringer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_ansvarlige-investeringer:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-investor:<front>',
  );
  // Exported menu link: menu-footer_atp-livslang-pension:<front>
  $menu_links['menu-footer_atp-livslang-pension:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP Livslang Pension',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_atp-livslang-pension:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-administrator:<front>',
  );
  // Exported menu link: menu-footer_atp-som-administrator:<front>
  $menu_links['menu-footer_atp-som-administrator:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP som administrator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_atp-som-administrator:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_atp-som-investor:<front>
  $menu_links['menu-footer_atp-som-investor:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ATP som investor',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_atp-som-investor:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_atp-som-pensionsforvalter:<front>
  $menu_links['menu-footer_atp-som-pensionsforvalter:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Atp som pensionsforvalter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_atp-som-pensionsforvalter:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_boligsttte:<front>
  $menu_links['menu-footer_boligsttte:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Boligstøtte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_boligsttte:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-administrator:<front>',
  );
  // Exported menu link: menu-footer_datterselskaber:<front>
  $menu_links['menu-footer_datterselskaber:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Datterselskaber',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_datterselskaber:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-investor:<front>',
  );
  // Exported menu link: menu-footer_din-pensionsguide:<front>
  $menu_links['menu-footer_din-pensionsguide:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Din pensionsguide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_din-pensionsguide:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-pensionsforvalter:<front>',
  );
  // Exported menu link: menu-footer_for-erhverv:<front>
  $menu_links['menu-footer_for-erhverv:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'For erhverv',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_for-erhverv:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_info-og-selvbetjening:<front>',
  );
  // Exported menu link: menu-footer_for-private:<front>
  $menu_links['menu-footer_for-private:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'For private',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_for-private:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_info-og-selvbetjening:<front>',
  );
  // Exported menu link: menu-footer_info-og-selvbetjening:<front>
  $menu_links['menu-footer_info-og-selvbetjening:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Info og selvbetjening',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_info-og-selvbetjening:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_investeringsstrategi:<front>
  $menu_links['menu-footer_investeringsstrategi:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Investeringsstrategi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_investeringsstrategi:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-investor:<front>',
  );
  // Exported menu link: menu-footer_investeringsvirksomheden:<front>
  $menu_links['menu-footer_investeringsvirksomheden:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Investeringsvirksomheden',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_investeringsvirksomheden:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-investor:<front>',
  );
  // Exported menu link: menu-footer_lg:<front>
  $menu_links['menu-footer_lg:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'LG',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_lg:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-administrator:<front>',
  );
  // Exported menu link: menu-footer_lngere-levetid:<front>
  $menu_links['menu-footer_lngere-levetid:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Længere levetid',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_lngere-levetid:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-pensionsforvalter:<front>',
  );
  // Exported menu link: menu-footer_pensionsvirksomheden:<front>
  $menu_links['menu-footer_pensionsvirksomheden:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pensionsvirksomheden',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_pensionsvirksomheden:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-pensionsforvalter:<front>',
  );
  // Exported menu link: menu-footer_politik:<front>
  $menu_links['menu-footer_politik:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Politik',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_politik:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-administrator:<front>',
  );
  // Exported menu link: menu-footer_resultater-og-omkostninger:<front>
  $menu_links['menu-footer_resultater-og-omkostninger:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Resultater og omkostninger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_resultater-og-omkostninger:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-investor:<front>',
  );
  // Exported menu link: menu-footer_risiko:<front>
  $menu_links['menu-footer_risiko:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Risiko',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_risiko:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-investor:<front>',
  );
  // Exported menu link: menu-footer_samfund:<front>
  $menu_links['menu-footer_samfund:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Samfund',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_samfund:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-administrator:<front>',
  );
  // Exported menu link: menu-footer_sp:<front>
  $menu_links['menu-footer_sp:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'SP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_sp:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-pensionsforvalter:<front>',
  );
  // Exported menu link: menu-footer_udbetaling-danmark:<front>
  $menu_links['menu-footer_udbetaling-danmark:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Udbetaling Danmark',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer_udbetaling-danmark:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_atp-som-administrator:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ATP Livslang Pension');
  t('ATP som administrator');
  t('ATP som investor');
  t('Afkast');
  t('Ansvarlige investeringer');
  t('Atp som pensionsforvalter');
  t('Boligstøtte');
  t('Datterselskaber');
  t('Din pensionsguide');
  t('Find hjælp');
  t('For erhverv');
  t('For private');
  t('Info og selvbetjening');
  t('Investeringsstrategi');
  t('Investeringsvirksomheden');
  t('LG');
  t('Længere levetid');
  t('Pensionsvirksomheden');
  t('Politik');
  t('Resultater og omkostninger');
  t('Risiko');
  t('SP');
  t('Samfund');
  t('Sitemap');
  t('Udbetaling Danmark');


  return $menu_links;
}
