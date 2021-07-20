#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node.
 * @parent: ...
 * @value: ....
 * Return: ....
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	if (parent == NULL)
	{
		node->parent = NULL;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
	}
	else if (parent && value < parent->n)
	{
		parent->left = node;
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
		node->n = value;
	}
	else if (parent && value > parent->n)
	{
		parent->right = node;
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
		node->n = value;
	}

	return (node);
}
