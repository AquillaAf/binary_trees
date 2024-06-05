#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node- function creates a new node to a binary tree
 * @parent: A pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, else a NUll on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode = malloc(sizeof(binary_tree_t));

	if (Newnode == NULL)
		return (NULL);
	Newnode->n = value;
	Newnode->parent = parent;
	Newnode->left = NULL;
	Newnode->right = NULL;
	return (Newnode);
}
