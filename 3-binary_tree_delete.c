#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an nentiry binary tree
 * #tree: Pointer to the root node og the tree to delete
 *
 * Description: Recursively frees all nodes in the binary tree
 * starting from the given root node.
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Base case: If tree is NULL, do nothing */
	if (tree == NULL)
		return;

	/* Recursively delete left subtree */
	binary_tree_delete(tree->left);

	/* Recursively delete right subtree */
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
