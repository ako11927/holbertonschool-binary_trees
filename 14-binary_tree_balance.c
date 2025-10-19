#include "binary_trees.h"

/**
 * height_ - helper: height in edges
 * @t: node
 * Return: height
 */
static size_t height_(const binary_tree_t *t)
{
	size_t lh, rh;

	if (!t)
		return (0);
	lh = t->left ? 1 + height_(t->left) : 0;
	rh = t->right ? 1 + height_(t->right) : 0;
	return (lh > rh ? lh : rh);
}

/**
 * binary_tree_balance - Compute balance factor
 * @tree: root
 * Return: left height - right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((int)height_(tree->left) - (int)height_(tree->right));
}
