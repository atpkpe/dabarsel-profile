<?php

/**
 * @file
 * site class.
 */

/**
 * Essentially this is a PURL record with some extra data attached.
 */
class Site {
  public $sid;
  public $purl_prefix;
  public $title;
  public $machine_name;
  public $front_page;
  public $contact_page;
  public $menu_main_menu;
  public $theme;
  // Multilang variables
  public $name;
  public $footer;
  public $footer_format;
  public $language_switcher;
  public $sharing_links;
  public $gss_api_key;

  /**
   * Function for saving or updating information about sites.
   */
  function save() {
    $languages = language_list();
    if (empty($this->sid)) {
      drupal_write_record('sites', $this);
      foreach($languages as $lang => $language) {
        $record = $this->sites_language_record($lang);
        drupal_write_record('sites_multilanguage', $record );
      }
    }
    else {
      drupal_write_record('sites', $this, 'sid');
      foreach($languages as $lang => $language) {
        $record = $this->sites_language_record($lang);
        drupal_write_record('sites_multilanguage', $record, array('sid', 'language'));
      }
    }

    $modifier = array(
      'provider' => 'sites',
      'id' => $this->sid,
      'value' => $this->purl_prefix,
    );

    purl_save($modifier);
  }

  function sites_language_record($lang) {
    $record = new stdClass();
    $record->sid = $this->sid;
    $record->language = $lang;
    $record->name = $this->name[$lang];
    $record->gss_api_key = $this->gss_api_key[$lang];
    $record->footer = $this->footer[$lang];
    $record->footer_format = $this->footer_format[$lang];
    return $record;
  }

}
