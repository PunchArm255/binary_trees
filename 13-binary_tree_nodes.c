#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child in tree
 * @tree: root node pointer
 *
 * Return: node number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (tree && !tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
