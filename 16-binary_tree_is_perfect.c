#include "binary_trees.h"

/**
 * depth_leftmost - find depth of leftmost leaf
 * @t: root
 * Return: depth in edges
 */
static size_t depth_leftmost(const binary_tree_t *t)
{
	size_t d = 0;

	while (t && t->left)
	{
		d++;
		t = t->left;
	}
	return (d);
}

/**
 * is_perfect_rec - check perfectness
 * @t: node
 * @depth: expected leaf depth
 * @level: current level
 * Return: 1 if perfect else 0
 */
static int is_perfect_rec(const binary_tree_t *t, size_t depth, size_t level)
{
	if (!t->left && !t->right)
		return (level == depth);
	if (!t->left || !t->right)
		return (0);
	return (is_perfect_rec(t->left, depth, level + 1) &&
		is_perfect_rec(t->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Check if tree is perfect
 * @tree: root
 * Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_perfect_rec(tree, depth_leftmost(tree), 0));
}
