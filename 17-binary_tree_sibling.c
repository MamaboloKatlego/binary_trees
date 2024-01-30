#include "binary_trees.h"

/**
 * binary_tree_sibling - A short description
 *
 * Description: A long description
 *
 * @node: The arg_1 description
 *
 * Return: It returns description.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right != node)
		return (node->parent->right);
	return (node->parent->left);
}
