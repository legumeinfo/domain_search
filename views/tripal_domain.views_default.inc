<?php
/**
 * @file
 * Describe default domain views
 */

/**
 * Implements hook_views_default_views().
 *
 * @ingroup tripal_domain
 */



function tripal_domain_views_default_views() {
    $views = array();

    // User View ("Search Biological Content") Remember, if you change
    // the name/path of this view, you also want to change it's
    // description in tripal_domain_search_biological_data_views()
  
    $view = tripal_domain_defaultvalue_user_domains();
    $view = tripal_make_view_compatible_with_external($view);
    $views[$view->name] = $view;

    // TODO? an admin view could be added here
    //$view = tripal_domain_defaultview_admin_domains();
    //$view = tripal_make_view_compatible_with_external($view);
    //$views[$view->name] = $view;
  
    return $views;
}



/**
 * Defines the domain user search default view.
 *
 * @ingroup tripal_domain
 */
function tripal_domain_defaultvalue_user_domains() {

$view = new view();
$view->name = 'domain';
$view->description = 'Polypeptide Domain Search';
$view->tag = 'default';
$view->base_table = 'domain';
$view->human_name = 'Domain';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Domain';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'feature_name' => 'feature_name',
  'cvterm_name' => 'cvterm_name',
  'IPRterm' => 'IPRterm',
  'feature_desc' => 'feature_desc',
  'total_count' => 'total_count',
  'medtr_count' => 'medtr_count',
  'cicar_count' => 'cicar_count',
  'glyma_count' => 'glyma_count',
  'phavu_count' => 'phavu_count',
  'cajca_count' => 'cajca_count',
  'aradu_count' => 'aradu_count',
  'araip_count' => 'araip_count',
  'vigra_count' => 'vigra_count',
  'tree_count'  => 'tree_count',
  'consensus_tree_count' => 'consensus_tree_count',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'feature_name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'cvterm_name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'IPRterm' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'feature_desc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'total_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'medtr_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'cicar_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),

  'vigra_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'glyma_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'phavu_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'cajca_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'aradu_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'araip_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
 'tree_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),

'consensus_tree_count'=> array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),

);
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
/* No results behavior: Global: Action Links */
$handler->display->display_options['empty']['action_links_area']['id'] = 'action_links_area';
$handler->display->display_options['empty']['action_links_area']['table'] = 'views';
$handler->display->display_options['empty']['action_links_area']['field'] = 'action_links_area';
/* Field: domain: Domain ID */
$handler->display->display_options['fields']['feature_name']['id'] = 'feature_name';
$handler->display->display_options['fields']['feature_name']['table'] = 'domain';
$handler->display->display_options['fields']['feature_name']['field'] = 'feature_name';
$handler->display->display_options['fields']['feature_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['feature_name']['alter']['path'] = 'feature/consensus/consensus/polypeptide_domain/[feature_name]';
$handler->display->display_options['fields']['feature_name']['alter']['absolute'] = TRUE;
/* Field: domain: Domain Name */
$handler->display->display_options['fields']['cvterm_name']['id'] = 'cvterm_name';
$handler->display->display_options['fields']['cvterm_name']['table'] = 'domain';
$handler->display->display_options['fields']['cvterm_name']['field'] = 'cvterm_name';
/* Field: domain: Interpro term */
$handler->display->display_options['fields']['IPRterm']['id'] = 'IPRterm';
$handler->display->display_options['fields']['IPRterm']['table'] = 'domain';
$handler->display->display_options['fields']['IPRterm']['field'] = 'IPRterm';
$handler->display->display_options['fields']['IPRterm']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['IPRterm']['alter']['path'] = 'http://www.ebi.ac.uk/interpro/entry/[IPRterm]';
$handler->display->display_options['fields']['IPRterm']['alter']['absolute'] = TRUE;
/* Field: domain: Description */
$handler->display->display_options['fields']['feature_desc']['id'] = 'feature_desc';
$handler->display->display_options['fields']['feature_desc']['table'] = 'domain';
$handler->display->display_options['fields']['feature_desc']['field'] = 'feature_desc';
$handler->display->display_options['fields']['feature_desc']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['feature_desc']['alter']['more_link'] = TRUE;
$handler->display->display_options['fields']['feature_desc']['alter']['more_link_text'] = 'more';
$handler->display->display_options['fields']['feature_desc']['alter']['more_link_path'] = 'http://www.ebi.ac.uk/interpro/entry/[IPRterm]';
$handler->display->display_options['fields']['feature_desc']['alter']['trim'] = TRUE;
/* Field: domain: Family Count */
$handler->display->display_options['fields']['consensus_tree_count']['id'] = 'consensus_tree_count';
$handler->display->display_options['fields']['consensus_tree_count']['table'] = 'domain';
$handler->display->display_options['fields']['consensus_tree_count']['field'] = 'consensus_tree_count';
$handler->display->display_options['fields']['consensus_tree_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['consensus_tree_count']['alter']['path'] = 'search/phylotree?domains_con=[feature_name]';
$handler->display->display_options['fields']['consensus_tree_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['consensus_tree_count']['separator'] = '';
/* Field: domain: Gene Count */
$handler->display->display_options['fields']['total_count']['id'] = 'total_count';
$handler->display->display_options['fields']['total_count']['table'] = 'domain';
$handler->display->display_options['fields']['total_count']['field'] = 'total_count';
$handler->display->display_options['fields']['total_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['total_count']['alter']['path'] = 'search/gene?domains=[feature_name]';
$handler->display->display_options['fields']['total_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['total_count']['separator'] = '';
/* Field: domain: Medtr Count */
$handler->display->display_options['fields']['medtr_count']['id'] = 'medtr_count';
$handler->display->display_options['fields']['medtr_count']['table'] = 'domain';
$handler->display->display_options['fields']['medtr_count']['field'] = 'medtr_count';
$handler->display->display_options['fields']['medtr_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['medtr_count']['alter']['path'] = 'search/gene?abbreviation=Med. truncatula&domains=[feature_name]';
$handler->display->display_options['fields']['medtr_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['medtr_count']['separator'] = '';
/* Field: domain: Cicar Count */
$handler->display->display_options['fields']['cicar_count']['id'] = 'cicar_count';
$handler->display->display_options['fields']['cicar_count']['table'] = 'domain';
$handler->display->display_options['fields']['cicar_count']['field'] = 'cicar_count';
$handler->display->display_options['fields']['cicar_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['cicar_count']['alter']['path'] = 'search/gene?abbreviation=Cic. arietinum&domains=[feature_name]';
$handler->display->display_options['fields']['cicar_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['cicar_count']['separator'] = '';
/* Field: domain: Vigra Count */
$handler->display->display_options['fields']['vigra_count']['id'] = 'vigra_count';
$handler->display->display_options['fields']['vigra_count']['table'] = 'domain';
$handler->display->display_options['fields']['vigra_count']['field'] = 'vigra_count';
$handler->display->display_options['fields']['vigra_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['vigra_count']['alter']['path'] = 'search/gene?abbreviation=Vig. radiata&domains=[feature_name]';
$handler->display->display_options['fields']['vigra_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['vigra_count']['separator'] = '';
/* Field: domain: Glyma Count */
$handler->display->display_options['fields']['glyma_count']['id'] = 'glyma_count';
$handler->display->display_options['fields']['glyma_count']['table'] = 'domain';
$handler->display->display_options['fields']['glyma_count']['field'] = 'glyma_count';
$handler->display->display_options['fields']['glyma_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['glyma_count']['alter']['path'] = 'search/gene?abbreviation=Gly. max&domains=[feature_name]';
$handler->display->display_options['fields']['glyma_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['glyma_count']['separator'] = '';
/* Field: domain: Phavu Count */
$handler->display->display_options['fields']['phavu_count']['id'] = 'phavu_count';
$handler->display->display_options['fields']['phavu_count']['table'] = 'domain';
$handler->display->display_options['fields']['phavu_count']['field'] = 'phavu_count';
$handler->display->display_options['fields']['phavu_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['phavu_count']['alter']['path'] = 'search/gene?abbreviation=Pha. vulgaris&domains=[feature_name]';
$handler->display->display_options['fields']['phavu_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['phavu_count']['separator'] = '';
/* Field: domain: Cajca Count */
$handler->display->display_options['fields']['cajca_count']['id'] = 'cajca_count';
$handler->display->display_options['fields']['cajca_count']['table'] = 'domain';
$handler->display->display_options['fields']['cajca_count']['field'] = 'cajca_count';
$handler->display->display_options['fields']['cajca_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['cajca_count']['alter']['path'] = 'search/gene?abbreviation=Caj. cajan&domains=[feature_name]';
$handler->display->display_options['fields']['cajca_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['cajca_count']['separator'] = '';
/* Field: domain: Aradu Count */
$handler->display->display_options['fields']['aradu_count']['id'] = 'aradu_count';
$handler->display->display_options['fields']['aradu_count']['table'] = 'domain';
$handler->display->display_options['fields']['aradu_count']['field'] = 'aradu_count';
$handler->display->display_options['fields']['aradu_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['aradu_count']['alter']['path'] = 'search/gene?abbreviation=Ara. duranensis&domains=[feature_name]';
$handler->display->display_options['fields']['aradu_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['aradu_count']['separator'] = '';
/* Field: domain: Araip Count */
$handler->display->display_options['fields']['araip_count']['id'] = 'araip_count';
$handler->display->display_options['fields']['araip_count']['table'] = 'domain';
$handler->display->display_options['fields']['araip_count']['field'] = 'araip_count';
$handler->display->display_options['fields']['araip_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['araip_count']['alter']['path'] = 'search/gene?abbreviation=Ara. ipaensis&domains=[feature_name]';
$handler->display->display_options['fields']['araip_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['araip_count']['separator'] = '';
/* Field: domain: Phylotree Count 
$handler->display->display_options['fields']['tree_count']['id'] = 'tree_count';
$handler->display->display_options['fields']['tree_count']['table'] = 'domain';
$handler->display->display_options['fields']['tree_count']['field'] = 'tree_count';
$handler->display->display_options['fields']['tree_count']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['tree_count']['alter']['path'] = 'search/phylotree?domains=[feature_name]';
$handler->display->display_options['fields']['tree_count']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['tree_count']['separator'] = '';
/* Filter criterion: domain: Domain ID */
$handler->display->display_options['filters']['feature_name']['id'] = 'feature_name';
$handler->display->display_options['filters']['feature_name']['table'] = 'domain';
$handler->display->display_options['filters']['feature_name']['field'] = 'feature_name';
$handler->display->display_options['filters']['feature_name']['group'] = 1;
$handler->display->display_options['filters']['feature_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['feature_name']['expose']['operator_id'] = 'feature_name_op';
$handler->display->display_options['filters']['feature_name']['expose']['label'] = 'Domain ID';
$handler->display->display_options['filters']['feature_name']['expose']['description'] = '(e.g. [is equal to]: PF00139)';
$handler->display->display_options['filters']['feature_name']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['feature_name']['expose']['operator'] = 'feature_name_op';
$handler->display->display_options['filters']['feature_name']['expose']['identifier'] = 'feature_name';
$handler->display->display_options['filters']['feature_name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['feature_name']['max_length'] = '20';
/* Filter criterion: domain: Domain Name */
$handler->display->display_options['filters']['cvterm_name']['id'] = 'cvterm_name';
$handler->display->display_options['filters']['cvterm_name']['table'] = 'domain';
$handler->display->display_options['filters']['cvterm_name']['field'] = 'cvterm_name';
$handler->display->display_options['filters']['cvterm_name']['operator'] = 'contains';
$handler->display->display_options['filters']['cvterm_name']['group'] = 1;
$handler->display->display_options['filters']['cvterm_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['cvterm_name']['expose']['operator_id'] = 'cvterm_name_op';
$handler->display->display_options['filters']['cvterm_name']['expose']['label'] = 'Domain Name';
$handler->display->display_options['filters']['cvterm_name']['expose']['description'] = '(e.g. [Contains]: Zinc finger)';
$handler->display->display_options['filters']['cvterm_name']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['cvterm_name']['expose']['operator'] = 'cvterm_name_op';
$handler->display->display_options['filters']['cvterm_name']['expose']['identifier'] = 'cvterm_name';
$handler->display->display_options['filters']['cvterm_name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['cvterm_name']['max_length'] = '20';
/* Filter criterion: domain: Interpro term */
$handler->display->display_options['filters']['IPRterm']['id'] = 'IPRterm';
$handler->display->display_options['filters']['IPRterm']['table'] = 'domain';
$handler->display->display_options['filters']['IPRterm']['field'] = 'IPRterm';
$handler->display->display_options['filters']['IPRterm']['group'] = 1;
$handler->display->display_options['filters']['IPRterm']['exposed'] = TRUE;
$handler->display->display_options['filters']['IPRterm']['expose']['operator_id'] = 'IPRterm_op';
$handler->display->display_options['filters']['IPRterm']['expose']['label'] = 'Interpro term';
$handler->display->display_options['filters']['IPRterm']['expose']['description'] = '(e.g. [is equal to]: IPR027278)';
$handler->display->display_options['filters']['IPRterm']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['IPRterm']['expose']['operator'] = 'IPRterm_op';
$handler->display->display_options['filters']['IPRterm']['expose']['identifier'] = 'IPRterm';
$handler->display->display_options['filters']['IPRterm']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['IPRterm']['max_length'] = '20';
/* Filter criterion: domain: Description */
$handler->display->display_options['filters']['feature_desc']['id'] = 'feature_desc';
$handler->display->display_options['filters']['feature_desc']['table'] = 'domain';
$handler->display->display_options['filters']['feature_desc']['field'] = 'feature_desc';
$handler->display->display_options['filters']['feature_desc']['operator'] = 'allwords';
$handler->display->display_options['filters']['feature_desc']['group'] = 1;
$handler->display->display_options['filters']['feature_desc']['exposed'] = TRUE;
$handler->display->display_options['filters']['feature_desc']['expose']['operator_id'] = 'feature_desc_op';
$handler->display->display_options['filters']['feature_desc']['expose']['label'] = 'Description';
$handler->display->display_options['filters']['feature_desc']['expose']['description'] = '(e.g. [Contains all words]: disease resistance)';
$handler->display->display_options['filters']['feature_desc']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['feature_desc']['expose']['operator'] = 'feature_desc_op';
$handler->display->display_options['filters']['feature_desc']['expose']['identifier'] = 'feature_desc';
$handler->display->display_options['filters']['feature_desc']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['feature_desc']['max_length'] = '40';
/* Filter criterion: domain: Family Count */
$handler->display->display_options['filters']['consensus_tree_count']['id'] = 'consensus_tree_count';
$handler->display->display_options['filters']['consensus_tree_count']['table'] = 'domain';
$handler->display->display_options['filters']['consensus_tree_count']['field'] = 'consensus_tree_count';
$handler->display->display_options['filters']['consensus_tree_count']['group'] = 1;
$handler->display->display_options['filters']['consensus_tree_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['consensus_tree_count']['expose']['operator_id'] = 'consensus_tree_count_op';
$handler->display->display_options['filters']['consensus_tree_count']['expose']['label'] = 'Family Count';
$handler->display->display_options['filters']['consensus_tree_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['consensus_tree_count']['expose']['operator'] = 'consensus_tree_count_op';
$handler->display->display_options['filters']['consensus_tree_count']['expose']['identifier'] = 'consensus_tree_count';
$handler->display->display_options['filters']['consensus_tree_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Gene Count */
$handler->display->display_options['filters']['total_count']['id'] = 'total_count';
$handler->display->display_options['filters']['total_count']['table'] = 'domain';
$handler->display->display_options['filters']['total_count']['field'] = 'total_count';
$handler->display->display_options['filters']['total_count']['group'] = 1;
$handler->display->display_options['filters']['total_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['total_count']['expose']['operator_id'] = 'total_count_op';
$handler->display->display_options['filters']['total_count']['expose']['label'] = 'Gene Count';
$handler->display->display_options['filters']['total_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['total_count']['expose']['operator'] = 'total_count_op';
$handler->display->display_options['filters']['total_count']['expose']['identifier'] = 'total_count';
$handler->display->display_options['filters']['total_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Medtr Count */
$handler->display->display_options['filters']['medtr_count']['id'] = 'medtr_count';
$handler->display->display_options['filters']['medtr_count']['table'] = 'domain';
$handler->display->display_options['filters']['medtr_count']['field'] = 'medtr_count';
$handler->display->display_options['filters']['medtr_count']['group'] = 1;
$handler->display->display_options['filters']['medtr_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['medtr_count']['expose']['operator_id'] = 'medtr_count_op';
$handler->display->display_options['filters']['medtr_count']['expose']['label'] = 'Medtr Count';
$handler->display->display_options['filters']['medtr_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['medtr_count']['expose']['operator'] = 'medtr_count_op';
$handler->display->display_options['filters']['medtr_count']['expose']['identifier'] = 'medtr_count';
$handler->display->display_options['filters']['medtr_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Cicar Count */
$handler->display->display_options['filters']['cicar_count']['id'] = 'cicar_count';
$handler->display->display_options['filters']['cicar_count']['table'] = 'domain';
$handler->display->display_options['filters']['cicar_count']['field'] = 'cicar_count';
$handler->display->display_options['filters']['cicar_count']['group'] = 1;
$handler->display->display_options['filters']['cicar_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['cicar_count']['expose']['operator_id'] = 'cicar_count_op';
$handler->display->display_options['filters']['cicar_count']['expose']['label'] = 'Cicar Count';
$handler->display->display_options['filters']['cicar_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['cicar_count']['expose']['operator'] = 'cicar_count_op';
$handler->display->display_options['filters']['cicar_count']['expose']['identifier'] = 'cicar_count';
$handler->display->display_options['filters']['cicar_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Vigra Count */
$handler->display->display_options['filters']['vigra_count']['id'] = 'vigra_count';
$handler->display->display_options['filters']['vigra_count']['table'] = 'domain';
$handler->display->display_options['filters']['vigra_count']['field'] = 'vigra_count';
$handler->display->display_options['filters']['vigra_count']['group'] = 1;
$handler->display->display_options['filters']['vigra_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['vigra_count']['expose']['operator_id'] = 'vigra_count_op';
$handler->display->display_options['filters']['vigra_count']['expose']['label'] = 'Vigra Count';
$handler->display->display_options['filters']['vigra_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['vigra_count']['expose']['operator'] = 'vigra_count_op';
$handler->display->display_options['filters']['vigra_count']['expose']['identifier'] = 'vigra_count';
$handler->display->display_options['filters']['vigra_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);

/* Filter criterion: domain: Phavu Count */
$handler->display->display_options['filters']['phavu_count']['id'] = 'phavu_count';
$handler->display->display_options['filters']['phavu_count']['table'] = 'domain';
$handler->display->display_options['filters']['phavu_count']['field'] = 'phavu_count';
$handler->display->display_options['filters']['phavu_count']['group'] = 1;
$handler->display->display_options['filters']['phavu_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['phavu_count']['expose']['operator_id'] = 'phavu_count_op';
$handler->display->display_options['filters']['phavu_count']['expose']['label'] = 'Phavu Count';
$handler->display->display_options['filters']['phavu_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['phavu_count']['expose']['operator'] = 'phavu_count_op';
$handler->display->display_options['filters']['phavu_count']['expose']['identifier'] = 'phavu_count';
$handler->display->display_options['filters']['phavu_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Glyma Count */
$handler->display->display_options['filters']['glyma_count']['id'] = 'glyma_count';
$handler->display->display_options['filters']['glyma_count']['table'] = 'domain';
$handler->display->display_options['filters']['glyma_count']['field'] = 'glyma_count';
$handler->display->display_options['filters']['glyma_count']['group'] = 1;
$handler->display->display_options['filters']['glyma_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['glyma_count']['expose']['operator_id'] = 'glyma_count_op';
$handler->display->display_options['filters']['glyma_count']['expose']['label'] = 'Glyma Count';
$handler->display->display_options['filters']['glyma_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['glyma_count']['expose']['operator'] = 'glyma_count_op';
$handler->display->display_options['filters']['glyma_count']['expose']['identifier'] = 'glyma_count';
$handler->display->display_options['filters']['glyma_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Cajca Count */
$handler->display->display_options['filters']['cajca_count']['id'] = 'cajca_count';
$handler->display->display_options['filters']['cajca_count']['table'] = 'domain';
$handler->display->display_options['filters']['cajca_count']['field'] = 'cajca_count';
$handler->display->display_options['filters']['cajca_count']['group'] = 1;
$handler->display->display_options['filters']['cajca_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['cajca_count']['expose']['operator_id'] = 'cajca_count_op';
$handler->display->display_options['filters']['cajca_count']['expose']['label'] = 'Cajca Count';
$handler->display->display_options['filters']['cajca_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['cajca_count']['expose']['operator'] = 'cajca_count_op';
$handler->display->display_options['filters']['cajca_count']['expose']['identifier'] = 'cajca_count';
$handler->display->display_options['filters']['cajca_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Aradu Count */
$handler->display->display_options['filters']['aradu_count']['id'] = 'aradu_count';
$handler->display->display_options['filters']['aradu_count']['table'] = 'domain';
$handler->display->display_options['filters']['aradu_count']['field'] = 'aradu_count';
$handler->display->display_options['filters']['aradu_count']['group'] = 1;
$handler->display->display_options['filters']['aradu_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['aradu_count']['expose']['operator_id'] = 'aradu_count_op';
$handler->display->display_options['filters']['aradu_count']['expose']['label'] = 'Aradu Count';
$handler->display->display_options['filters']['aradu_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['aradu_count']['expose']['operator'] = 'aradu_count_op';
$handler->display->display_options['filters']['aradu_count']['expose']['identifier'] = 'aradu_count';
$handler->display->display_options['filters']['aradu_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);
/* Filter criterion: domain: Araip Count */
$handler->display->display_options['filters']['araip_count']['id'] = 'araip_count';
$handler->display->display_options['filters']['araip_count']['table'] = 'domain';
$handler->display->display_options['filters']['araip_count']['field'] = 'araip_count';
$handler->display->display_options['filters']['araip_count']['group'] = 1;
$handler->display->display_options['filters']['araip_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['araip_count']['expose']['operator_id'] = 'araip_count_op';
$handler->display->display_options['filters']['araip_count']['expose']['label'] = 'Araip Count';
$handler->display->display_options['filters']['araip_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['araip_count']['expose']['operator'] = 'araip_count_op';
$handler->display->display_options['filters']['araip_count']['expose']['identifier'] = 'araip_count';
$handler->display->display_options['filters']['araip_count']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
);

/* Display: Domain */
$handler = $view->new_display('page', 'Domain', 'page');
$handler->display->display_options['path'] = 'search/protein_domains';

    // End of exported code here 

    return $view;

}
