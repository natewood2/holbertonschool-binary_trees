#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node which is leaf or not hehe
 * Return: 0 indicating not leaf or 1 which is leaf
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);
}
