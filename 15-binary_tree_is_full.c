#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to be checked
 * Return: 1 on success, 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count, count_l, count_r;

	count = count_l = count_r = 0;

	if (tree)
	{
		if (tree->left && tree->right)
		{
			count = 1;
			count_l = binary_tree_is_full(tree->left);
			count_r = binary_tree_is_full(tree->right);
			count = (count_l & count_r);
		}
		else if (!tree->left && !tree->right)
			count = 1;
	}
	return (count);
}
