#include "binary_trees.h"

/**
 * binary_tree_leaves - the leaves in a binary tree
 * @tree: pointer to the root
 * Return: count of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	binary_tree_leaves(tree->right);
	binary_tree_leaves(tree->right);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
