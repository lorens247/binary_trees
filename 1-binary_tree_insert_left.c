#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;

    // Create a new node
    binary_tree_t *node = binary_tree_node(parent, value);
    if (node == NULL)
        return NULL;

    // If parent already has a left-child, set the new node as the left-child
    // and update the old left-child to be the left-child of the new node
    if (parent->left != NULL)
    {
        node->left = parent->left;
        parent->left->parent = node;
    }

    // Set the new node as the left-child of the parent
    parent->left = node;

    return node;
}
