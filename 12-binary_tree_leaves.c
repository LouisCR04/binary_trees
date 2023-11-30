#include "binary_trees.h"

/**
 *binary_tree_leaves - Counts leaves in a binary tree
 *@tree: Pointer to the root of the tree
 *
 * Return: Number of leaves else 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	n = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (n);
}
