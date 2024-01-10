#include "binary_trees.h"

/**
 * binary_tree_balance - balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (tree->left == NULL)
		lh = -1;

	if (tree->right == NULL)
		rh = -1;
	
	return (lh - rh);
}

/**
 * binary_tree_height - height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return (left_height > right_height ? left_height : right_height);
	}

	return (0);
}

