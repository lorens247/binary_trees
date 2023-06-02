#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: The function traverses the tree in post-order (left, right, root)
 *              and deletes each node. It sets the parent's pointers to NULL to
 *              detach the nodes from the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    // Delete the left subtree
    binary_tree_delete(tree->left);

    // Delete the right subtree
    binary_tree_delete(tree->right);

    // Delete the current node
    free(tree);
}
