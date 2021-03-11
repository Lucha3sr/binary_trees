#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: depth
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		leaf++;
	}
	leaf = leaf + binary_tree_leaves(tree->left);
	leaf = leaf + binary_tree_leaves(tree->right);
	return (leaf);
}
