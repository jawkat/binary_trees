#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a binary tree node in left
 *
 * @parent: parent node
 * @value: value of the node
 * Return: binary_tree_t*: pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *node_left;

    node_left =malloc(sizeof(binary_tree_t));
    if (node_left == NULL)
        return (NULL);

    node_left->n = value;
    node_left->left =NULL;
    node_left->right = NULL;

    if (!parent->left)
    {
        node_left->left = parent->left;
        parent->left = node_left;
    }

    return node_left;





}
