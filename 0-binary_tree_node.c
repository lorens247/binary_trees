#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    // Allocate memory for the new node
    binary_tree_t *newNode;
    newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (newNode == NULL)
        return (NULL);

    // Set the parent, value, left child, and right child of the new node
    newNode->parent = parent;
    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;

    // Return a pointer to the new node
    return (newNode);
}
