#include "binary_trees.h"

/**
 *binary_tree_insert_left - Inserts a new node to the left
 *@parent: Points to the current root onto which to insert the left node
 *@value: Data to insert in the node
 *
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	
	parent->left = new;

	return (new);
}
