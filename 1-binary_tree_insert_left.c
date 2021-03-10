#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: parent
 * @value: value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *left_chd_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	left_chd_node = malloc(sizeof(binary_tree_t));
	if (left_chd_node == NULL)
	{
		return (NULL);
	}
	left_chd_node->parent = parent;
	left_chd_node->n = value;
	left_chd_node->left = NULL;
	left_chd_node->right = NULL;
	if (parent->left != NULL)
	{
		left_chd_node->left = parent->left;
		left_chd_node->left->parent = left_chd_node;
	}
	parent->left = left_chd_node;
	return (left_chd_node);
}
