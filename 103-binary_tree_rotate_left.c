#include "binary_trees.h"

/**
 *binary_tree_rotate_left - Performs a left-rotation on a binary tree
 *@tree: Pointer to the root node
 *
 * Return: Pointer to the root of the new rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new = NULL;

	if (tree == NULL)
		return (NULL);

	new = tree->right;
	tree->right = new->left;
	new->parent = tree->parent;

	if (tree->right != NULL)
		tree->right->parent = tree;

	tree->parent = new;
	new->left = tree;

	return (new);
}
