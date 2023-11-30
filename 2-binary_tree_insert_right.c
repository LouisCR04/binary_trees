#include "binary_trees.h"

/**
 *binary_tree_insert_right - Inserts a node as the right-child of another
 *@parent: Pointer to the node to insert the right-child
 *@value: Value to store in the new node
 *
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}

	parent->right = new;
	return (new);
}
