#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as right-child
 * @parent: node to insert into
 * @value: value for new node
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
