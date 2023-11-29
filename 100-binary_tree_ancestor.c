#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: node 1
 * @second: node 2
 * Return: common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *tmp;

	tmp = NULL;

	for (; first; first = first->parent)
	{
		for (tmp = (binary_tree_t *)second; tmp; tmp = tmp->parent)
		{
			if (tmp->parent == first || tmp->parent == first->parent)
			{
				tmp = tmp->parent;
				break;
			}
		}
		if (tmp != NULL)
			break;
	}
	return (tmp);
}
