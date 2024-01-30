#include "binary_trees.h"

/**
 * binary_tree_leaves - A short description
 *
 * Description: A long description
 *
 * @tree: The arg_1 description
 *
 * Return: It returns description.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0 + binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right));
}
