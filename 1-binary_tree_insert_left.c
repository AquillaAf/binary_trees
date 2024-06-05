#include "binary_trees.h"
#include <stdlib.h>
/*
 * binary_tree_insert_left- a pointer to a function that inserts a node as the left-child
 * @parent: a pointer to the node to insert the left-child
 * @value: the value to store in new node
 *
 * Return: a pointer to the created node, else NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_left = malloc(sizeof(binary_tree_t));

	if (insert_left == NULL)
		return(NULL);
	else if(parent == NULL)
		return (NULL);
	insert_left->n = value;
	insert_left->left = parent->left;
	insert_left->parent = parent;
	insert_left->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = insert_left;
	parent->left = insert_left;
	
	return (insert_left);
}
