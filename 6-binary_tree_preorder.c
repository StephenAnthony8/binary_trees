#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through the bt using preorder traversal
 * @tree: pointer to the root of the node
 */
void binary_tree_preorder(const binary_tree_t *tree, 
		void (*func)(int))
{
	if (!tree || !func)
		return;
	/* call the function for the current node */
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
