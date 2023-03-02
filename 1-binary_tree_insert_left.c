#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node of the node to insert the right-child in
 * @value: value to put in the new node
 *
 * Retur[2;2R[3;1Rn: a pointer to the new node, or NULL on failure
 [>0;10;1c*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->left)
			{
				node->left = parent->left;
				parent->left->parent = node;
			}
			parent->left = node;
		}
	}

	return (node);
}
