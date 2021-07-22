#include "binary_trees.h"
/**
 * binary_tree_is_full - checks for complete binary trees
 * @tree: root
 * Return: 1 when binary tree is complete 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
