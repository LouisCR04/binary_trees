#include "binary_trees.h"

/**
 *binary_tree_height - Measures the height of a binary tree
 *@tree: Pointer to the root node
 *
 * Return: Height of the longer side
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (right > left)
		return (right + 1);

	return (left + 1);
}
