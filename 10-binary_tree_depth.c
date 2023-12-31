#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth node in a binary tree
 * @tree: the binary tree
 * Return: the depth of a binary tree
 *
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
