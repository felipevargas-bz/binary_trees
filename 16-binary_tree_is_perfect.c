#include "binary_trees.h"
int equal_depth(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks a full binary trees.
 * @tree: binary tree root.
 * Return: 1 if is perfect or 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	left = equal_depth(tree->left);
	right = equal_depth(tree->right);

	if ((left - right) == 0)
		return (1);

	return (0);
}
/**
 * equal_depth - check for the size of binary tree.
 * @tree: binary tree root.
 * Return: a size.
 */
int equal_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (equal_depth(tree->left) + 1 + equal_depth(tree->right));
}
