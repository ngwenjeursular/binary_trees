#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	if (!root)
		return (1);

	root->left = binary_tree_node(root, 12);
	if (!root->left)
		return (1);

	root->right = binary_tree_node(root, 402);
	if (!root->right)
		return (1);

	binary_tree_print(root);
	printf("\n");

	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);

	binary_tree_print(root);

	return (0);
}
