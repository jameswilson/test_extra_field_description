<?php
/**
 * @file
 * test_efd_req_multi.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function test_efd_req_multi_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-test_efd_req_multi-field_boolean_multiple'
  $field_instances['node-test_efd_req_multi-field_boolean_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_boolean_multiple',
    'label' => 'Boolean Multiple',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_boolean_single'
  $field_instances['node-test_efd_req_multi-field_boolean_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_boolean_single',
    'label' => 'Boolean Single',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_collection_multiple'
  $field_instances['node-test_efd_req_multi-field_collection_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_collection_multiple',
    'label' => 'Collection Multiple',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_collection_single'
  $field_instances['node-test_efd_req_multi-field_collection_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_collection_single',
    'label' => 'Collection Single',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_decimal_multiple'
  $field_instances['node-test_efd_req_multi-field_decimal_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_decimal_multiple',
    'label' => 'Decimal Multiple',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => 'Prefix',
      'suffix' => 'Suffix',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_decimal_single'
  $field_instances['node-test_efd_req_multi-field_decimal_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_decimal_single',
    'label' => 'Decimal Single',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => 'Prefix',
      'suffix' => 'Suffix',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_file_multiple'
  $field_instances['node-test_efd_req_multi-field_file_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_file_multiple',
    'label' => 'File Multiple',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_file_single'
  $field_instances['node-test_efd_req_multi-field_file_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_file_single',
    'label' => 'File Single',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_float_multiple'
  $field_instances['node-test_efd_req_multi-field_float_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_float_multiple',
    'label' => 'Float Multiple',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => 'Prefix',
      'suffix' => 'Suffix',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_float_single'
  $field_instances['node-test_efd_req_multi-field_float_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_float_single',
    'label' => 'Float Single',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => 'Prefix',
      'suffix' => 'Suffix',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_image_multiple'
  $field_instances['node-test_efd_req_multi-field_image_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_image_multiple',
    'label' => 'Image Multiple',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_image_single'
  $field_instances['node-test_efd_req_multi-field_image_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_image_single',
    'label' => 'Image Single',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_integer_multiple'
  $field_instances['node-test_efd_req_multi-field_integer_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_integer_multiple',
    'label' => 'Integer Multiple',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => 'Prefix',
      'suffix' => 'Suffix',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_integer_single'
  $field_instances['node-test_efd_req_multi-field_integer_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_integer_single',
    'label' => 'Integer Single',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => 'Prefix',
      'suffix' => 'Suffix',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_link_multiple'
  $field_instances['node-test_efd_req_multi-field_link_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_link_multiple',
    'label' => 'Link Multiple',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_link_single'
  $field_instances['node-test_efd_req_multi-field_link_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_link_single',
    'label' => 'Link Single',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_list_multiple_checkboxes'
  $field_instances['node-test_efd_req_multi-field_list_multiple_checkboxes'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_list_multiple_checkboxes',
    'label' => 'List Multiple Checkboxes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_list_single_checkboxes'
  $field_instances['node-test_efd_req_multi-field_list_single_checkboxes'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_list_single_checkboxes',
    'label' => 'List Single Checkboxes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_long_text_and_summary_mult'
  $field_instances['node-test_efd_req_multi-field_long_text_and_summary_mult'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_long_text_and_summary_mult',
    'label' => 'Long Text and Summary Multiple',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_long_text_and_summary_sing'
  $field_instances['node-test_efd_req_multi-field_long_text_and_summary_sing'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_long_text_and_summary_sing',
    'label' => 'Long Text and Summary Single',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_long_text_multiple'
  $field_instances['node-test_efd_req_multi-field_long_text_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_long_text_multiple',
    'label' => 'Long Text Multiple',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_long_text_single'
  $field_instances['node-test_efd_req_multi-field_long_text_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_long_text_single',
    'label' => 'Long Text Single',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_term_multiple'
  $field_instances['node-test_efd_req_multi-field_term_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_term_multiple',
    'label' => 'Term Multiple',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_term_single'
  $field_instances['node-test_efd_req_multi-field_term_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_term_single',
    'label' => 'Term Single',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_text_multiple'
  $field_instances['node-test_efd_req_multi-field_text_multiple'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_text_multiple',
    'label' => 'Text Multiple',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-test_efd_req_multi-field_text_single'
  $field_instances['node-test_efd_req_multi-field_text_single'] = array(
    'bundle' => 'test_efd_req_multi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'extra_description' => array(
      'multiple' => 1,
      'over_description' => 'Extra description',
    ),
    'field_name' => 'field_text_single',
    'label' => 'Text Single',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Boolean Multiple');
  t('Boolean Single');
  t('Collection Multiple');
  t('Collection Single');
  t('Decimal Multiple');
  t('Decimal Single');
  t('File Multiple');
  t('File Single');
  t('Float Multiple');
  t('Float Single');
  t('Help text');
  t('Image Multiple');
  t('Image Single');
  t('Integer Multiple');
  t('Integer Single');
  t('Link Multiple');
  t('Link Single');
  t('List Multiple Checkboxes');
  t('List Single Checkboxes');
  t('Long Text Multiple');
  t('Long Text Single');
  t('Long Text and Summary Multiple');
  t('Long Text and Summary Single');
  t('Term Multiple');
  t('Term Single');
  t('Text Multiple');
  t('Text Single');

  return $field_instances;
}
