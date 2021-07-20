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

	if (parent == NULL || parent->n > value)
	{
		return (NULL);
	}
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
		if (value < parent->right->n)
		{
			node->n = value;
			node->left = NULL;
			node->right = parent->right;
			parent->right->parent = node;
			node->parent = parent;
			parent->right = node;
		}
		else
		{
			node->n = value;
			node->left = NULL;

			node = insert_node(node, parent->right);
		}
	}
	return (node);
}
/**
 * insert_node - insert a node if the aux is greter than node
 * @node: node to insert.
 * @parent: parent of node.
 * Return: node.
 */
binary_tree_t *insert_node(binary_tree_t *node, binary_tree_t *parent)
{
	binary_tree_t *aux = parent;

	while (aux->right)
	{
		if (aux->n < node->n)
		{
			node->parent = aux->parent;
			aux->parent = node;

			node->parent->right = node;
			node->right = aux;
			return (node);
		}
		aux = aux->right;
	}
	node->parent = aux;
	aux->right = node;
	node->right = NULL;

	return (node);
}
