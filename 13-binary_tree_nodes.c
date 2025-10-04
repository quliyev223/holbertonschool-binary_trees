#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Return: Number of nodes with at least one child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	/* Recursively count nodes with children in the left subtree */
	left_nodes = binary_tree_nodes(tree->left);

	/* Recursively count nodes with children in the right subtree */
	right_nodes = binary_tree_nodes(tree->right);

	/* If the current node has at least one child, count it */
	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);

	/* Otherwise, don't count the current node */
	return (left_nodes + right_nodes);
}
