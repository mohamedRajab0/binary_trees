#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of the node
 * @node: node to find it uncle
 * Return: uncle of node, else NULL if it do not have
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	binary_tree_t *tmp = node->parent->parent;

	if (tmp->left != node->parent)
		return (tmp->left);
	else if (tmp->right != node->parent)
		return (tmp->right);
	else
		return (NULL);
}
