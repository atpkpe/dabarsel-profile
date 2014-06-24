<?php

// Plugin definition
$plugin = array(
  'title' => t('One column'),
  'category' => t('ATP'),
  'icon' => 'atp-onecol.png',
  'theme' => 'atp_onecol',
  'admin css' => '../../../css/layouts.css',
  'css' => '../../../css/layouts.css',
  'regions' => array(
    'row1' => t('First row'),
    'row2' => t('Second row'),
  ),
);
