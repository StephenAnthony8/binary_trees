#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the number of nodes with a child
 * @tree: count start point
 * Return:Nnumber of nodes with childrem
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count, count_l, count_r;

	count = count_l = count_r = 0;

	if (tree && (tree->left || tree->right))
	{
		count_l = binary_tree_nodes(tree->left);
		count_r = binary_tree_nodes(tree->right);
		count += (count_l + count_r + 1);
	}
	return (count);
}
