#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree (number of nodes).
 * If tree is NULL, returns 0.
 *
 * Description: The size is the total number of nodes present
 * in the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Size is 1 (current node) + size of left subtree + size of right subtree */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
