#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of tree
 * Return: balance number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count, count_l, count_r;

	count = count_l = count_r = 0;
	if (tree && (tree->left || tree->right))
	{
		count_l = binary_tree_balance(tree->left);
		count_r = binary_tree_balance(tree->right);
		count += (count_l - count_r ) + 1;
	}

	return (count);
}
