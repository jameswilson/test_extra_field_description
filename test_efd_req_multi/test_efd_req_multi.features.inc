<?php
/**
 * @file
 * test_efd_req_multi.features.inc
 */

/**
 * Implements hook_node_info().
 */
function test_efd_req_multi_node_info() {
  $items = array(
    'test_efd_req_multi' => array(
      'name' => t('Test Extra Field Description Required & Multiple'),
      'base' => 'node_content',
      'description' => t('A content type useful for testing the Extra Field Description module with fields marked as required.  It has two of each type of fields imaginable, one with cardinality = 1  and one with cardinality = unlimited, all marked as required.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
