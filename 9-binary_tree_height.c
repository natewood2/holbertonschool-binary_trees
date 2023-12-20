#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: awesome little trees
 * Return: multiple things depending on stuff or just a 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
    size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	if (left_height > right_height)
		return (left_height);
    else
	    return (right_height);
}
