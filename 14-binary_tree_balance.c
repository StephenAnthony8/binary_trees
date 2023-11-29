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
	if (tree)
	{
		count_l = get_height(tree->left, count);
		count_r = get_height(tree->right, count);
		count = count_l - count_r;
	}
	return (count);
}
/**
 * get_height - returns the height of a node
 * @tree: node to be checked
 * @count: number of recursive iterations
 * Return: number of nodes traversed for the height
 */
int get_height(binary_tree_t *tree, int count)
{
	int count_l, count_r;

	count_l = count_r = 0;
	if (tree)
	{
		count++;
		count_l = get_height(tree->left, count);
		count_r = get_height(tree->right, count);

		count = (count_l > count_r ? count_l : count_r);
	}
	return (count);
}


