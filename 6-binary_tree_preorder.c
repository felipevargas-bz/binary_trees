#include "binary_trees.h"
/**
 * binary_tree_preorder - a binary tree using pre-order traversal
 * @tree: root.
 * @func: function pointer
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	if (tree->left)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right)
	{
		binary_tree_preorder(tree->right, func);
	}
}
