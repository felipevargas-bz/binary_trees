#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root.
 * @node: node to check if is the root.
 * Return: 0 if not is root and 1 if is the root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent)
		return (0);
	return (1);
}
