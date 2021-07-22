#include "binary_trees.h"
/**
 * binary_tree_height - levels of binary tree
 * @tree: root
 * Return: levels
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->left) + 1;
	if (left >= right)
		return (left);
	else
		return (right);
}
