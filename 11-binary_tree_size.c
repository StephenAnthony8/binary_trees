#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a bt
 * @tree: pointer to the root node of the bt
 *
 * Return: size of the bt
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right));
}
