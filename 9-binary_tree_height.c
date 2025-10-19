#include "binary_trees.h"

/**
 * binary_tree_height - Measure height of a tree
 * @tree: root to measure from
 * Return: height (edges on longest path), 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);

	lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lh > rh ? lh : rh);
}
