#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * @tree: pointer to the root of tree
 * @func: function to print value
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
