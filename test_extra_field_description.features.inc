<?php
/**
 * @file
 * test_extra_field_description.features.inc
 */

/**
 * Implements hook_node_info().
 */
function test_extra_field_description_node_info() {
  $items = array(
    'test_extra_field_description' => array(
      'name' => t('Test Extra Field Description'),
      'base' => 'node_content',
      'description' => t('A content type useful for testing the Extra Field Description module.  It has two of each type of fields imaginable, one with cardinality = 1  and one with cardinality = unlimited. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
