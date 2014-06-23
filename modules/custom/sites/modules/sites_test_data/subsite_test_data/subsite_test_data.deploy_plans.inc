<?php
/**
 * @file
 * subsite_test_data.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function subsite_test_data_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'subsite_test_data';
  $plan->title = 'Subsite test data';
  $plan->description = '';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $export['subsite_test_data'] = $plan;

  return $export;
}
