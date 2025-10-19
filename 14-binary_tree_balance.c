#include "binary_trees.h"

/**
 * binary_tree_balance - Compute the balance factor of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: height(left subtree) - height(right subtree).
 *         If tree is NULL, return 0.
 *         Height here is measured in edges (leaf => 0), and
 *         binary_tree_height(NULL) returns 0 — matching project examples.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((int)binary_tree_height(tree->left)
	      - (int)binary_tree_height(tree->right));
}
