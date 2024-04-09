#include "binary_trees.h"

/**
 * binary_tree_is_root -  checks if a given node is a root
 * @node: pointer to the root
 * Return: 1 if it root , 0 if it false
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);
	return (0);
}
