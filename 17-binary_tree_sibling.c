#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find sibling of
 * Return: Sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp, *sibling;

	tmp = sibling = NULL;

	if (node && node->parent)
	{
		tmp = node->parent;
		sibling = (tmp->left != node ? tmp->left : tmp->right);
	}
	return (sibling);
}
