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

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
