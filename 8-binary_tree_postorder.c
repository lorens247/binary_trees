#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree in post-order
 *              and applies the given function to each node's value.
 *              The value in the node is passed as a parameter to the function.
 *              If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    // Traverse the left subtree
    binary_tree_postorder(tree->left, func);

    // Traverse the right subtree
    binary_tree_postorder(tree->right, func);

    // Call the function on the current node
    func(tree->n);
}
