#include "binary_trees.h"

/**
 *binary_tree_node - Creates a binary tree node
 *@parent: Pointer to root of a tree
 *@value: Data a node contains
 *
 * Return: Pointer to the creates node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);
}
