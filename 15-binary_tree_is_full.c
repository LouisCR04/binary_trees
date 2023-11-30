#include "binary_trees.h"

/**
 *binary_tree_is_full - Checks if a tree is full
 *@tree: Pointer to root
 *
 * Return: 1 if full else NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int n = 0, m = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		n = binary_tree_is_full(tree->left);
		m = binary_tree_is_full(tree->right);

		if (n == 1 && m == 1)
			return (1);
	}

	return (0);
}
