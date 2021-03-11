#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of measure the height
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (!(tree->left) && !(tree->right))
		return (0);
	left_height = binary_tree_height(tree->left);
	left_height++;
	right_height = binary_tree_height(tree->right);
	right_height++;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: depth
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		size = size + binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		size = size + binary_tree_size(tree->right);
	}
	return (size);
}

/**
 * _pow_recursion - pow.
 * @x:x
 * @y:y
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: tree
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;
	int height;
	int max;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	max = _pow_recursion(2, height + 1) - 1;
	if (max == size)
		return (1);
	else
		return (0);
}
