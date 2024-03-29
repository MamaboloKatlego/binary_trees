#include "binary_trees.h"

/**
 * binary_tree_insert_left - A short description
 *
 * Description: A long description
 *
 * @parent: The arg_1 description
 * @value: The arg_2 description
 *
 * Return: It returns description.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->left != NULL)
	{
		old_node = parent->left;
		old_node->parent = new_node;
		new_node->left = old_node;
	}
	else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;

	return (new_node);
}
