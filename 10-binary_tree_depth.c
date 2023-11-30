#include "binary_trees.h"

/**
 *binary_tree_depth - Measures the depth of a node in a binary tree
 *@tree: Pointer to the node
 *
 * Return: Depth of node else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		n += 1;
	}

	return (n);
}
