#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete entire binary tree
 * @tree: pointer to root of binary tree
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree), tree = NULL;
}
