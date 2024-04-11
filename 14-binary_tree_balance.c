#include "binary_trees.h"

/**
 * binary_tree_balance - count blance level
 * @tree: pointer of the root
 * Return: count
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	const binary_tree_t *tmp = tree;
	size_t left = 1;
	size_t right = 1;

	while (tmp->left != NULL)
	{
		left += 1;
		tmp = tmp->left;
	}
	while (tree->right != NULL)
	{
		right += 1;
		tree = tree->right;
	}
	return (left - right);
}
