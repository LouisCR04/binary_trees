#include "binary_trees.h"

/**
 *binary_tree_uncle - Finds the uncle of a node
 *@node: Pointer to the node
 *
 * Return: Pointer to the uncle node else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);


	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
