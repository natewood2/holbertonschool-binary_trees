#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as the left of another node
 * @parent: parent node
 * @value: value of the node
 * Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL) 
    {
        return NULL;
    }

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL) 
    {
        return (NULL);
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    if (parent->right != NULL) 
    {
        new_node->right = parent->right;
        new_node->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}