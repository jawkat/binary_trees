#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a binary tree node as a left-child
 *                           of another
 * @parent: A pointer to the node to insrt the left_child
 * @value: value of the node created
 * Return: if parent is NULL or Errors - NULL
 *          otherwise - a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
