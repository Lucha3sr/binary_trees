#include "binary_trees.h"

/**
 * binary_tree_is_full - if a binary tree is full
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if it is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int x = 0;
	int y = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		x = binary_tree_is_full(tree->left);
		y = binary_tree_is_full(tree->right);
		if (x == 1 && y == 1)
			return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
