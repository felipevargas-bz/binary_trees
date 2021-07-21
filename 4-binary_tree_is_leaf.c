#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: node to check.
 * Return: 0 if no is leaf and 1 if es a leaf.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);
	return (1);
}
