#include "binary_trees.h"
/**
 * binary_tree_height - levels of binary tree
 * @tree: root
 * Return: levels
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	else if (tree->right)
		right = binary_tree_height(tree->left) + 1;
	if (left >= right)
		return (left);
	else
		return (right);
}
