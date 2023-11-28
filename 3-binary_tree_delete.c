#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
