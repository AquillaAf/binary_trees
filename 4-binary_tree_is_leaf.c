#include "binary_trees.h"
/**
 * binary_tree_is_leaf- function checks if node is a leaf
 * @node: pointeer to the node ot check
 *
 * Return: 1 if node is a leaf, otherwise error
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if ((node->left == NULL) && (node->right == NULL))
		return (1);
	return (0);
}
