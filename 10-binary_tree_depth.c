#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of the tree
 * @tree:  pointer to the node to measure the depth
 * Return: the depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t depth = 0;

	while (tree->parent)
	{
		depth++;
		tree->parent;
	}
	return (depth);
}