#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node to be attached to
 * @value: value to include inside created node
 * Return: created node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *rtn;

	rtn = malloc(sizeof(binary_tree_t));

	if (rtn)
	{
		rtn->n = value;
		rtn->parent = parent;
		rtn->left = rtn->right = NULL;
	}
	return (rtn);
}
