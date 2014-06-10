<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column right'),
  'category' => t('ATP'),
  'icon' => 'atp-twocol-right.png',
  'theme' => 'atp_twocol_right',
  'admin css' => '../../../css/layouts.css',
  'css' => '../../../css/layouts.css',
  'regions' => array(
    'row1' => t('First row'),
    'row2' => t('Second row'),
    'row3' => t('Third row'),
    'row4' => t('Fourth row'),
    'row5' => t('Fifth row'),
    'right' => t('Left side'),
  ),
);
