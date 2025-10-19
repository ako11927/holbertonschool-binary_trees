#include "binary_trees.h"

/* local height helper so this file compiles standalone in the checker */
static size_t height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);
	lh = height(tree->left);
	rh = height(tree->right);
	return ((lh > rh ? lh : rh) + 1);
}

/**
 * binary_tree_balance - balance factor = height(left) - height(right)
 * @tree: root
 * Return: balance, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	l = (int)height(tree->left);
	r = (int)height(tree->right);
	return (l - r);
}
