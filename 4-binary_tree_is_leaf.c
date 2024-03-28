#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leafing
 * @node: node to be checked for leaf
 *
 * Return: 1 (is leaf) | 0 (not leaf)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
