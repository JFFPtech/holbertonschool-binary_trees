#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not or if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    int left = 0, right = 0;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
        left = binary_tree_is_full(tree->left);

    if (tree->right != NULL)
        right = binary_tree_is_full(tree->right);

    if ((left == 0 && right != 0) || (left != 0 && right == 0))
        return (0);

    if (left == 0 && right == 0)
        return (1);

    return (1);
}