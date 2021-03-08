#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: parent
 * @value: value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *right_chd_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	right_chd_node = malloc(sizeof(binary_tree_t));
	if (right_chd_node == NULL)
	{
		return (NULL);
	}
	right_chd_node->parent = parent;
	right_chd_node->n = value;
	if (parent->right != NULL)
	{
		right_chd_node->right = parent->right;
		right_chd_node->right->parent = right_chd_node;
	}
	parent->right = right_chd_node;
	return (right_chd_node);
}
