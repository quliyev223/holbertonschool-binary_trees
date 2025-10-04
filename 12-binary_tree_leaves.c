#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count leaves
 *
 * Return: Number of leaves in the tree. If tree is NULL, returns 0.
 *
 * Description: A leaf is a node with no children (no left and no right).
 * The function recursively traverses the tree and counts all leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If node is a leaf (no children), count it */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

