#include "binary_trees.h"

/**
 * binary_tree_depth - A short description
 *
 * Description: A long description
 *
 * @tree: The arg_1 description
 *
 * Return: It returns description.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current_node;
	size_t depth = 0;

	if (tree == NULL)
		return (depth);
	current_node = (binary_tree_t *) tree;
	while (current_node->parent)
	{
		depth++;
		current_node = current_node->parent;
	}
	return (depth);
}
