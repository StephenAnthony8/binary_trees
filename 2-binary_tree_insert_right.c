#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts node at parent right
 * @parent: node to be inserted into
 * @value: value to insert in node
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rtn, *right_node;

	rtn = (parent ? binary_tree_node(parent, value) : NULL);
	if (rtn)
	{
		right_node = parent->right;
		parent->right = rtn;

		if (right_node)
		{
			right_node->parent = rtn;
			rtn->right = right_node;
		}
	}
	return (rtn);
}
