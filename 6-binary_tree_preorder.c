#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree with pre order traversal
 * @tree: pointer to tree roof
 * @func: pointer to func called on each node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
