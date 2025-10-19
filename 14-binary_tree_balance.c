#include "binary_trees.h"

/**
 * height - Compute the height of a binary tree (in levels).
 * @tree: Pointer to the subtree root.
 *
 * Description:
 * This helper returns 0 for a NULL subtree and 1 for a leaf, i.e.,
 * it counts levels (not edges). It is used locally by
 * binary_tree_balance() to keep compilation self-contained for
 * the checker.
 *
 * Return: Height of the subtree in levels (size_t).
 */
static size_t height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = height(tree->left);
	rh = height(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Description:
 * The balance factor is defined here as:
 *      height(left subtree) - height(right subtree)
 * where height is measured in levels by the local helper `height()`
 * (NULL = 0, leaf = 1). If @tree is NULL, this function returns 0.
 *
 * Return: The balance factor as an int.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = (int)height(tree->left);
	r = (int)height(tree->right);

	return (l - r);
}
