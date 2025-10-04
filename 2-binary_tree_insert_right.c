#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * DEscription: If @parent already has a right-child, the new node takes its
 * place, and the old right-child becomes the right-child of the new node.
 *
 * Return: Pointer to the created node, or NULL on failure r if @parent
 * is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old_right;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	/* Save the current right child (if any) */
	old_right = parent->right;

	if (old_right != NULL)
	{
		new->right = old_right;
		old_right->parent = new;
	}
	parent->right = new;


	return (new);
}
