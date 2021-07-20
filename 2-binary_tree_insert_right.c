#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node in right side
 * @parent: the parent node
 * @value: the value to insert into node
 * Return: a new node in the right of parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	if (parent->right == NULL)
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		parent->right = node;
	}
	else
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = parent->right;
		node->right->parent = node;
		parent->right = node;
	}

	return (node);
}
