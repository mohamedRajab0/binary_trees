#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value:  the value to put in the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	newNode->n = value;
	newNode->left = NULL;
	if (parent->right != NULL)
	{
		binary_tree_t *tmp = parent->right;
		parent->right = newNode;
		newNode->right = tmp;
		tmp->parent = newNode;
		newNode->parent = parent;
	}
	else
	{
		newNode->right = NULL;
		parent->right = newNode;
		newNode->parent = parent;
	}
	return (newNode);
}
