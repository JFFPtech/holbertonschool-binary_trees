#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not or if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	if (tree->left == NULL)
		return (1);
	if ((tree->left->left == NULL) !=
		(tree->right->left == NULL))
		return (0);
	if (!binary_tree_is_perfect(tree->left)
		|| !binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}
