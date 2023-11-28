#include "binary_trees.h"
#include <stdlib.h>

/**
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *rtn, *left_node;

	left_node = parent->left;
	rtn = binary_tree_node(parent, value);
	parent->left = rtn;

	if (left_node)
		left_node->parent = rtn;
	rtn->left = left_node;

	return (rtn);
}
