#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is rooting
 * @node: node to be checked for root
 *
 * Return: 1 (is root) | 0 (not root)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
