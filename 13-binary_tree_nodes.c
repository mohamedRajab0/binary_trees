#include "binary_trees.h"

/**
 * binary_tree_nodes - count of nodes that have at least 1 child
 * @tree: pointer of the root
 * Return: node count
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree->left != NULL || tree->right != NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
		return (0);

	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) );
}
