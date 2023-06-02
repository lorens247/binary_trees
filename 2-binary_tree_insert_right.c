#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;

    // Create a new node
    binary_tree_t *node = binary_tree_node(parent, value);
    if (node == NULL)
        return NULL;

    // If parent already has a right-child, set the new node as the right-child
    // and update the old right-child to be the right-child of the new node
    if (parent->right != NULL)
    {
        node->right = parent->right;
        parent->right->parent = node;
    }

    // Set the new node as the right-child of the parent
    parent->right = node;

    return node;
}