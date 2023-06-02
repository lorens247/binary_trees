#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Description: The depth of a node is the number of edges between\
 * the node and the root node
 * The function uses recursion
 *
 * Return: the value of the depth
 * if tree is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{	/* tree is a root node */
		return (0);
	}

	return (binary_tree_depth(tree->parent) + 1);
}
