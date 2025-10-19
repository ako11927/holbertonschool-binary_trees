#include "binary_trees.h"

/**
 * binary_tree_uncle - Find uncle of a node
 * @node: node
 * Return: pointer to uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p;

	if (!node || !(p = node->parent) || !p->parent)
		return (NULL);
	if (p->parent->left == p)
		return (p->parent->right);
	return (p->parent->left);
}
