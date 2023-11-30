#include "binary_trees.h"

/**
 *binary_tree_rotate_right - Performs a right-rotation on a binary tree
 *@tree: Pointer to the root node of the tree
 *
 * Return: Pointer to the root of the new rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new = NULL;

	if (tree == NULL)
		return (NULL)

	new = tree->left;
	tree->left = new->right;
	new->parent = tree->parent;

	if (tree->left != NULL)
		tree->left->parent = tree;

	tree->parent = new;
	new->right = tree;

	return (new);
}
