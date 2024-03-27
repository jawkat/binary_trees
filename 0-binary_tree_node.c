#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 *
 * @parent: parent node
 * @value: value of the node
 * Return: binary_tree_t*: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (new_node);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	new_node->parent = parent;

	return (new_node);

}
