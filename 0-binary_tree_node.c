#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: pointer parent node
 * @value: the node value
 *
 * Return: pointer new node (Success) | NULL (Failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;

	return (new_node);
}
