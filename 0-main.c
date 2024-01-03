#include <stdlib.h>
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
	root->left->left = binary_tree_node(root->left, 6);
	if (!root->left->left)
		return (1);
	root->left->right = binary_tree_node(root->left, 16);
	if (!root->left->right)
		return (1);

	root->right = binary_tree_node(root, 402);
	if (!root->right)
		return (1);
	root->right->left = binary_tree_node(root->right, 256);
	if (!root->right->left)
		return (1);
	root->right->right = binary_tree_node(root->right, 512);
	if (!root->right->right)
		return (1);

	binary_tree_print(root);
	return (0);
}
