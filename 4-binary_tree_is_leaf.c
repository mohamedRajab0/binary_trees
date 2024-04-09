#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the leaf
 * Return: 1 if it leaf and 0 if not leaf
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}