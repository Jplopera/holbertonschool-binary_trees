#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
        return (1);
    return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}
	return (s);
}