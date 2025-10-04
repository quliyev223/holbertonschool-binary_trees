#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node. If tree is NULL, returns 0.
 *
 * Description: Depth is the number of edges from the node
 * to the root node. The root node has depth 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

    /* Traverse up to the root, counting edges */
    	while (tree->parent)
    	{
        	depth++;
		tree = tree->parent;
	}

	return (depth);
}

