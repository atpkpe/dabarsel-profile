<?php
/**
 * @file
 * atp_notifications.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function atp_notifications_default_rules_configuration() {
  $items = array();
  $items['rules_notification_node_changed'] = entity_import('rules_config', '{ "rules_notification_node_changed" : {
      "LABEL" : "Notify about changed content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workbench_moderation", "flag", "atp_notifications" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "news" : "news", "section" : "section", "page" : "page" } }
          }
        },
        { "content_is_live_revision" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "notification_node_changed", "node" : [ "node" ] },
            "PROVIDE" : { "users" : { "users" : "Users who flagged" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "atp_notifications_mail_user_node_changed" : { "user" : [ "list-item" ], "node" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
