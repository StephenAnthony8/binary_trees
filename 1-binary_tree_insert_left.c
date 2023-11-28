#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts node at parent left
 * @parent: node to be inserted into
 * @value: value to insert in node
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *rtn, *left_node;

	rtn = (parent ? binary_tree_node(parent, value) : NULL);
	if (rtn)
	{
		left_node = parent->left;
		parent->left = rtn;

		if (left_node)
		{
			left_node->parent = rtn;
			rtn->left = left_node;
		}
	}
	return (rtn);
}
