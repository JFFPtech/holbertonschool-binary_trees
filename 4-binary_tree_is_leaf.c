#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf of a binary tree
 * @node: pointer to the node
 *
 * Return: 1 if leaf, 0 if not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || (node->left != NULL || node->right != NULL))
		return (0);

	return (1);
}

