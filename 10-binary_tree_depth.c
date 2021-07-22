#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: node to count profundicer.
 * Return: 0 if the prufundizer is 0 n profu...
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;
	const binary_tree_t *aux = tree;

	if (!tree || !tree->parent)
		return (0);

	while (aux->parent)
	{
		count++;
		aux = aux->parent;
	}

	return (count);
}
