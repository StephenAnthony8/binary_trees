#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfectly balanced
 * @tree: tree to be checked
 * Return: 1 on success, 0 on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count, count_l, count_r;

	count = count_l = count_r = 0;

	if (tree)
	{
		if (tree->left && tree->right)
		{
			count = 1;
			count_l = binary_tree_is_perfect(tree->left);
			count_r = binary_tree_is_perfect(tree->right);
			count = ((count_l & count_r) != 0 ? 1 : 0);
		}
		else if (!tree->left && !tree->right)
			count = 2;
	}
	return (count);
}
