#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as left right of other node
 * @parent: pointer to parent node
 * @value: new node value
 *
 * Return: pointer new node otherwise NULL in failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right)
		parent->right->parent = new_node;
	new_node->right = parent->right;
	parent->right = new_node;

	return (new_node);
}
