<?php

/**
 * @file
 * User page callbacks for the Forum module.
 */

/**
 * Page callback: Prints a contact page.
 *
 * @return
 *   A render array
 *
 */
function contact_page() {
  $content = array(
    '#theme' => 'contact_page',
    '#contact_items' => get_site_info_values(),
    '#about' => variable_get('objective_text'),
  );
  return $content;
}

/**
 * Preprocesses variables for contact
 *
 * @param $variables
 *   An array containing the following elements:
 *   - contact_items: an array of contact items such as phone, email etc.
 *   - about: a description about the purpose of the site
 *
 */

function template_preprocess_contact_page(&$variables) {
  $variables['contact_list'] = array(
    '#theme' => 'item_list',
    '#items' => $variables['contact_items'],
  );
}
