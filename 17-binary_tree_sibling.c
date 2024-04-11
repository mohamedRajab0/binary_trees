#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of the node
 * @node: node to find thier sibling
 * Return: sbling of the node, or NULL if it did not have
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	binary_tree_t *tmp = node->parent;

	if (tmp->left != node)
		return (tmp->left);
	else if (tmp->right != node)
		return (tmp->right);
	else
		return (NULL);
}
