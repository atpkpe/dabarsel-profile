<?php


/**
 * Implements hook_rules_action_info().
 */
function atp_notifications_rules_action_info() {
  return array(
    'atp_notifications_mail_user_node_changed' => array(
      'label' => t('Send a "node changed" mail to a user'),
      'parameter' => array(
        'user' => array('type' => 'user', 'label' => t('User')),
        'node' => array('type' => 'node', 'label' => t('Node')),
      ),
      'group' => t('System'),
    ),
  );
}

/**
 * Rules action callback. Sends mail to a user about changed content.
 *
 * @param object $account
 *   Drupal user object.
 * @param object $node
 *   Drupal node object.
 */
function atp_notifications_mail_user_node_changed($account, $node) {
  $var_name = 'atp_notifications_user_node_changed_last_uid';
  $last_uid = variable_get($var_name, 0);

  if ($last_uid == 0 || $account->uid != $last_uid) {
    drupal_mail(
      'atp_notifications',
      'atp_notifications_node_changed',
      $account->mail,
      language_default(),
      array(
        'node' => $node,
        'account' => $account,
      )
    );
    variable_set($var_name, $account->uid);
    return;
  }

  variable_del($var_name);

}