#include "binary_trees.h"

/**
 * binary_tree_nodes - count of nodes that have at least 1 child
 * @tree: pointer of the root
 * Return: node count
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count += binary_tree_nodes(tree->left) + 1
				+ binary_tree_nodes(tree->right);

	return (count);
}
