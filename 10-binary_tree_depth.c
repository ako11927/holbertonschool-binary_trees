#include "binary_trees.h"

/**
 * binary_tree_depth - Measure node depth
 * @tree: node to measure
 * Return: depth from root, 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		d++;
	}
	return (d);
}
