<?php

/**
 * Overwrite theme_links().
 * Specifically for language switcher
 */
function atp_theme_links__locale_block($variables) {
  $links = $variables['links'];

  $output = '';

  if (count($links) > 0) {
    $output .= '<ul class="language">';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first & last classes to the list
      // We've removed the active class because it's on the anchor element already
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

      if (isset($link['href'])) {
        // Remove the 'language-link' class
        $link['attributes'] = array();

        // Pass in $link as $options, they share the same keys.
        $output .= l($link['language']->native, $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        $output .= '<span>' . $link['language']->native . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}

function atp_theme_language_switch_links_alter(&$links, $type, $path) {
  /*foreach ($links as &$language) {
  }
  */
}
