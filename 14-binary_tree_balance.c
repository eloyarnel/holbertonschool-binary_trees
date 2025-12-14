#include "binary_trees.h"

/**
 * height - measures the height of a binary tree (in edges)
 * @tree: pointer to the root node of the tree
 *
 * Return: height
 */
static size_t height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL)
return (0);

left = tree->left ? 1 + height(tree->left) : 0;
right = tree->right ? 1 + height(tree->right) : 0;

return (left > right ? left : right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_h = 0, right_h = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_h = (int)height(tree->left) + 1;

if (tree->right)
right_h = (int)height(tree->right) + 1;

return (left_h - right_h);
}
