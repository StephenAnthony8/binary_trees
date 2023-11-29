#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfectly balanced
 * @tree: tree to be checked
 * Return: 1 on success, 0 on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int rtn_val = 0;

	rtn_val = recursive_check(tree);

	return ((rtn_val == 2 ? 1 : rtn_val));
}
/**
 * recursive_check - checks for perfect instances
 * @tree: node to be checked
 * Return: 0 for fail, 1 for pass, 2 for empty node
 */
int recursive_check(const binary_tree_t *tree)
{
	int count, count_l, count_r;

	count = count_l = count_r = 0;

	if (tree)
	{
		if (tree->left && tree->right)
		{
			count = 1;
			count_l = recursive_check(tree->left);
			count_r = recursive_check(tree->right);
			count = ((count_l & count_r) != 0 ? 1 : 0);
		}
		else if (!tree->left && !tree->right)
			count = 2;
	}
	return (count);
}
