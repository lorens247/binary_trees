#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree in pre-order
 *              and applies the given function to each node's value.
 *              The value in the node is passed as a parameter to the function.
 *              If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    // Call the function on the current node
    func(tree->n);

    // Traverse the left subtree
    binary_tree_preorder(tree->left, func);

    // Traverse the right subtree
    binary_tree_preorder(tree->right, func);
}
