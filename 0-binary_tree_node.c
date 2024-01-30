#include "binary_trees.h"

/**
 * binary_tree_node - A short description
 *
 * Description: A long description
 *
 * @parent: The arg_1 description
 * @value: The arg_2 description
 *
 * Return: It returns description.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	return (new_node);
}
