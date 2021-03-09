#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree
 * @parent: parent
 * @value: value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t  *new_binary_tree;

	new_binary_tree = malloc(sizeof(binary_tree_t));
	if (new_binary_tree == NULL)
	{
		return (NULL);
	}
	new_binary_tree->parent = parent;
	new_binary_tree->n = value;
	new_binary_tree->left = NULL;
	new_binary_tree->right = NULL;
	return (new_binary_tree);
}
