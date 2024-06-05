#include "binary_trees.h"
#include <stdlib.h>
/*
 * binary_tree_insert_right- a pointer to a function
 * that inserts a node as the right-child
 * @parent: a pointer to the node to insert the left-child
 * @value: the value to store in new node
 *
 * Return: a pointer to the created node, else NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *insert_right = malloc(sizeof(binary_tree_t));

        if (insert_right == NULL)
                return (NULL);
        else if (parent == NULL)
                return (NULL);
        insert_right->n = value;
        insert_right->right = parent->right;
        insert_right->parent = parent;
        insert_right->left = NULL;

        if (parent->right != NULL)
                parent->right->parent = insert_right;
        parent->right = insert_right;
        return (insert_right);
}
