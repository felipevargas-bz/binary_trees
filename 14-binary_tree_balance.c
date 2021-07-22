#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree: root
 * Return: number leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL = 0;
	int heightR = 0;

	if (tree == NULL)
		return (0);

	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);

	return (heightL - heightR);

}
/**
 * binary_tree_height - goes through a binary tree using post-order
 * @tree: root
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l = 0;
	size_t count_r = 0;

	if (tree == NULL)
		return (0);

	count_l = (binary_tree_height(tree->left) + 1);
	count_r = (binary_tree_height(tree->right) + 1);

	if (count_l >= count_r)
		return (count_l);
	else
		return (count_r);
}
