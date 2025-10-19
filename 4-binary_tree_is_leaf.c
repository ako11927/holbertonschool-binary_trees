#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is a leaf
 * @node: node to check
 * Return: 1 if leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
