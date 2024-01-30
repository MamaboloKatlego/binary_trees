#include "binary_trees.h"

/**
 * binary_tree_uncle - A short description
 *
 * Description: A long description
 *
 * @node: The arg_1 description
 *
 * Return: It returns description.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
