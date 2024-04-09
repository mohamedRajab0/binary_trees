#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value:  the value to put in the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (!parent)
	return (NULL);

binary_tree_t *newNode;
newNode = malloc(sizeof(binary_tree_t));

if (!newNode)
	return (NULL);

if (parent->left != NULL)
{
	binary_tree_t *tmp = parent->left;

	parent->left = newNode;
	newNode->left = tmp;
	tmp->parent = newNode;
	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
}
else
{
	newNode->left = NULL;
	parent->left = newNode;
	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
}
return (newNode);
}
