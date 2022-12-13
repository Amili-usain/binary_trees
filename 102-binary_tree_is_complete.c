#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the binary tree to measured.
 * Return: size of the tree or 0 if tree is NULL;
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * tree_is_complete - checks if tree is complete
 * @tree: pointer to the root node of the tree to be checked.
 * @i: node index
 * @node_count: number of nodes
 * Return: 1 if tree is complete, 0 otherwise
 */
int tree_is_complete(const binary_tree_t *tree, int i, int node_count)
{
	if (tree == NULL)
		return (1);

	if (i >= node_count)
		return (0);

	return (tree_is_complete(tree->left, (2 * i) + 1, node_count) &&
		tree_is_complete(tree->right, (2 * i) + 2, node_count));
}


/**
 * binary_tree_is_complete - calls to tree_is_complete function
 * @tree: pointer to the root node of the tree
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t node_count;

	if (tree == NULL)
		return (0);

	node_count = binary_tree_size(tree);

	return (tree_is_complete(tree, 0, node_count));
}
