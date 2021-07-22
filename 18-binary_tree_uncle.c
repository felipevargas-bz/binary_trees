#include "binary_trees.h"
/**
 * binary_tree_uncle - look for the uncle of a node
 * @node: pointer to node
 * Return: the pointer to a uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent)
		return (NULL);
	uncle = node->parent;
	if (!node->parent->parent)
		return (NULL);
	if (node->parent == uncle->parent->left)
	{
		if (uncle->parent->right)
		{
			return (uncle->parent->right);
		}
	}
	else
	{
		if (uncle->parent->left)
		{
			return (uncle->parent->left);
		}
	}
	return (NULL);
}
