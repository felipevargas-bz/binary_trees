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
/**
 *	code in other form - the code in the line 9 is with ternar operator.
 *
 *	if (!tree)
 *		return (0);
 *	else
 *	{
 *		if (tree->right && tree->left)
 *		{
 *			return (binary_tree_nodes(tree->left) + 1
 *				+ binary_tree_nodes(tree->right));
 *		}
 *		else
 *		{
 *			if (tree->left && !tree->right)
 *				return (1);
 *			else
 *			{
 *				if (tree->right && !tree->left)
 *					return (1);
 *				else
 *				{
 *					return (binary_tree_nodes(tree->left) +
 *						binary_tree_nodes(tree->right));
 *				}
 *			}
 *		}
 *	}
 *
 *
**/
