#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node in left side
 * @parent: the parent node
 * @value: the value to insert into node
 * Return: a new node in the left of parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	if (parent == NULL)
	{
		free(node);
		return (NULL);
	}
	if (parent->left == NULL)
	{
		node->n = value;
	    node->parent = parent;
	    node->right = NULL;
	    node->left = NULL;
	    parent->left = node;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		node->parent = parent;
		parent->left = node;
		node->n = value;
	}
	return (node);
}
