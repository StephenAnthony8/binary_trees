#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of tree
 * Return: balance number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count_l, count_r;

	count_l = count_r = 0;

	if (tree)
	{
		count_l = binary_tree_balance(tree->left);
		count_r = binary_tree_balance(tree->right);
		if (tree->left)
			count_l++;
		if (tree->right)
			count_r++;
	}
	return (count_l - count_r);
}
