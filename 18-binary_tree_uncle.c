#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if it doesn't exist
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	p = node->parent;

	if (p->parent->left == p)
		return (p->parent->right);
	return (p->parent->left);
}
