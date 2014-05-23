<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column'),
  'category' => t('ATP'),
  'icon' => 'atp-twocol.png',
  'theme' => 'atp_twocol',
  'admin css' => '../../../css/layouts.css',
  'css' => '../../../css/layouts.css',
  'regions' => array(
    'left' => t('Left side'),
    'row1' => t('First row'),
    'row2' => t('Second row'),
    'row3' => t('Third row'),
    'row4' => t('Fourth row'),
    'row5' => t('Fifth row'),
  ),
);
