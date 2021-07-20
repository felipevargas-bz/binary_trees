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

	if (parent == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

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
		if (value > parent->left->n)
		{
			node->n = value;
			node->right = NULL;
			node->left = parent->left;
			parent->left->parent = node;
			node->parent = parent;
			parent->left = node;
		}
		else
		{
			node->n = value;
			node->right = NULL;

			node = insert_node(node, parent->left);
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

	while (aux->left)
	{
		if (aux->n > node->n)
		{
			node->parent = aux->parent;
			aux->parent = node;

			node->parent->left = node;
			node->left = aux;
			return (node);
		}
		aux = aux->left;
	}
	node->parent = aux;
	aux->left = node;
	node->left = NULL;

	return (node);
}
