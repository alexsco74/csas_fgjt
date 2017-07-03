<?php
function theme_csas_fgjt_horizontal_tabs($variables) {
  $element = $variables['element'];
  // Add required JavaScript and Stylesheet.
  drupal_add_library('system', 'ui.tabs');
  drupal_add_js(drupal_get_path('module', 'csas_fgjt') . '/js/csas_fgjt.js');
  $ec = element_children($element);
  $tab_nav_items = array();
  foreach ($ec as $ec_k) {
    $href = '#' . $element[$ec_k]['#attributes']['id'];
    $tab_nav_items[] = '<a href="' . $href . '">' . $element[$ec_k]['#title'] . '</a>';
  }
  if (!empty($tab_nav_items)) {
    $tab_nav_out = '<ul><li>' . implode('</li><li>', $tab_nav_items) . '</li></ul>';
  }
  else {
    $tab_nav_out = '';
  }
  $output = '<h2 class="element-invisible">' . (!empty($element['#title']) ? $element['#title'] : t('Horizontal Tabs')) . '</h2>';
  $output .= '<div class="csas-gjgt-tbs">' . $tab_nav_out . $element['#children'] . '</div>';

  return $output;
}