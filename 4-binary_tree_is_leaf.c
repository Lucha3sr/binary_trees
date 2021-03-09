#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return(0);
	}
	else if (node->left == NULL && node-> right == NULL)
	{
		return(1);
	}
