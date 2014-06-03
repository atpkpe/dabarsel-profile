<?php
/**
 * @file
 * atp_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function atp_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_categories|node|news|form';
  $field_group->group_name = 'group_news_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '1',
    'children' => array(
      0 => 'field_news_categories',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_news_categories|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_content|node|news|form';
  $field_group->group_name = 'group_news_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_body',
      1 => 'field_news_image',
      2 => 'field_news_summary',
      3 => 'field_news_publishdate',
      4 => 'title_field',
      5 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_news_content|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|news|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'field_news_summary',
      1 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-wrapper field-group-link',
      ),
    ),
  );
  $export['group_wrapper|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|news|teaser_with_img';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser_with_img';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_image',
      1 => 'field_news_summary',
      2 => 'title_field',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'link_to' => 'entity',
        'classes' => 'group-wrapper field-group-link',
      ),
    ),
  );
  $export['group_wrapper|node|news|teaser_with_img'] = $field_group;

  return $export;
}
