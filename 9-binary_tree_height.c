#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the bt
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count, count_l, count_r;

	count = count_l = count_r = 0;
	if (tree && (tree->left || tree->right))
	{
		count_l = binary_tree_height(tree->left);
		count_r = binary_tree_height(tree->right);
		count += ((count_l > count_r ? count_l : count_r)) + 1;
	}

	return (count);
}
