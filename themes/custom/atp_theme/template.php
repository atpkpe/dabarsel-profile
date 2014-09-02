<?php


/**
 * Implement hook_theme_breadcrumb
 */
function atp_theme_breadcrumb($variables) {
  if (!empty($variables['breadcrumb'])) {
    return '<div class="bc">' . implode(' <span>-</span> ', $variables['breadcrumb']) . '</div>';
  }
  return '';
}

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

      // Goto frontpage if no translation exist
      if (empty($link['href']))
        $link['href'] = '<front>';

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

function atp_theme_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
      'attributes' => array(
          'type' => $file->filemime . '; length=' . $file->filesize,
      ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  } else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  //open files of particular mime types in new window
  $new_window_mimetypes = array('application/pdf', 'text/plain');
  if (in_array($file->filemime, $new_window_mimetypes)) {
    $options['attributes']['target'] = '_blank';
  }

  return '<span class="file">' . l($link_text, $url, $options) . '</span>';

}

/**
 * Implements hook_preprocess_hook().
 */
function atp_preprocess_node(&$variables) {
  if ($variables['type'] == 'contact' && $variables['view_mode'] == 'teaser') {
    hide($variables['content']['links']);
  }
}
