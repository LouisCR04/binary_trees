#include "binary_trees.h"

/**
  * _pow - Gets the base raised to the power of.
  * @base: Value to multiply
  * @exponent: the times to multiply the value
  *
  * Return: the value multiplied y times
  */
int _pow(int base, int exponent)
{
	int i = 0, val = base;

	while (i < exponent)
	{
		val *= base;
		++i;
	}

	return (val);
}


/**
  * binary_tree_height - Measures the height of a binary tree
  * @tree: Pointer to the root of the tree
  *
  * Return: Height of the tree, else 0
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_side, left_side;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);
	return (right_side + 1);
}


/**
  * binary_tree_size - Measures the size of a binary tree
  * @tree: Pointer to the root node of the tree
  *
  * Return: Size of tree else 0
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (count);
}

/**
 *binary_tree_is_perfect - Checks if a binary tree is perfect
 *@tree: Pointer to the root of the tree
 *
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height, nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	nodes = _pow(2, height) - 1;

	if (size == nodes)
		return (1);

	return (0);
}
