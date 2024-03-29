#include "binary_trees.h"

/**
 * binary_tree_nodes - A short description
 *
 * Description: A long description
 *
 * @tree: The arg_1 description
 *
 * Return: It returns description.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left)
				+ binary_tree_nodes(tree->right));
	else
		return (0 + binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right));
}
