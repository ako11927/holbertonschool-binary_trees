#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least 1 child
 * @tree: root
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((tree->left || tree->right) +
		binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
