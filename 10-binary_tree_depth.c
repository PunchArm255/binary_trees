#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: node depth to calculate
 *
 * Return: node depth
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
