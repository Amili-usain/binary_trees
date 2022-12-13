#include "binary_trees.h"

/**
 * bst_in - checks if node is inserted
 * @tree: double pointer to the root node of the BST to insert the value.
 * @value: value stored in the node inserted
 * Return: pointer to the new node
 */
bst_t *bst_in(bst_t **tree, int value)
{
	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
			return (bst_in(&((*tree)->left), value));
	}

	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
			return (bst_in(&((*tree)->right), value));
	}

	return (NULL);
}
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: pointer to the root node of the bst. 
 * @value: node value
 * Return: pointer to the new node after insertion.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	return (bst_in(tree, value));
}
