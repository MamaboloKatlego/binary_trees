#include "binary_trees.h"

/**
 * binary_tree_is_root - A short description
 *
 * Description: A long description
 *
 * @node: The arg_1 description
 *
 * Return: It returns description.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
