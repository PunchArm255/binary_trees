#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node in left child of other node
 * @parent: pointer to parent node
 * @value: new node value
 *
 * Return: pointer to new node otherwise NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left)
		parent->left->parent = new_node;
	new_node->left = parent->left;
	parent->left = new_node;

	return (new_node);
}
