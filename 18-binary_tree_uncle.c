#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node looking for uncle(terrible desc I know)
 * Return: NULL or uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *tmp, *parent;

	uncle = tmp = parent = NULL;

	if (node && node->parent && node->parent->parent)
	{
		tmp = node->parent->parent;
		parent = node->parent;

		uncle = (tmp->left != parent ? tmp->left : tmp->right);
	}
	return (uncle);
}
