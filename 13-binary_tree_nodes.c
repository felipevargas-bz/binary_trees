#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the son in a binary tree.
 * @tree: binary tree node.
 * Return: number of son in binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (!tree ? 0 : tree->right && tree->left ? binary_tree_nodes(tree->left)
	 + 1 + binary_tree_nodes(tree->right) :
	 tree->left && !tree->right ? 1 : tree->right && !tree->left ? 1 :
	 binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
