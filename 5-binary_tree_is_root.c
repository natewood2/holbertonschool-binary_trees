#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if we got a root
 * @node: checking is the given node is a root
 * Return: 1 if root and 0 if it is not
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
