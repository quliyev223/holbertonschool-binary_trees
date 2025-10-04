#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise or if tree is NULL
 *
 * A binary tree is full if every node has either 0 or 2 children.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If tree is NULL, it is not full */
	if (tree == NULL)
		return (0);

	/* If leaf node (no children), it is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both left and right children exist, check recursively */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* Otherwise, node has only one child, tree is not full */
	return (0);
}
