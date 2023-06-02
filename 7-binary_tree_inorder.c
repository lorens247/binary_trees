#include "binary_trees.h"

/**
 * binary_tree_inorder - go through a binary tree using inorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function
 *
 * Description: If tree or func is NULL, do nothing
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
