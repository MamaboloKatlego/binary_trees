#include "binary_trees.h"

/**
 * binary_tree_delete - A short description
 *
 * Description: A long description
 *
 * @tree: The arg_1 description
 *
 * Return: It returns description.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
