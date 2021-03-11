#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: node to find the sibling
 * Return: 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		if (node->parent->right != NULL)
		{
			return (node->parent->right);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		if (node->parent->left != NULL)
		{
			return (node->parent->left);
		}
		else
		{
			return (NULL);
		}
	}
}
