#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: binary tree node.
 * Return: number of leaves in binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (!tree ? 0 : !tree->right && !tree->left ? 1 :
	 binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
