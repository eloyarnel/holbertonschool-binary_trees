#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_leaves, right_leaves;
if (tree == NULL)
return (0);
if (binary_tree_is_leaf(tree))
return (1);
left_leaves = binary_tree_leaves(tree->left);
right_leaves = binary_tree_leaves(tree->right);
if (left_leaves != right_leaves)
return (0);
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 * Return: number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (binary_tree_is_leaf(tree))
return (1);
return (binary_tree_leaves(tree->left) +
binary_tree_leaves(tree->right));
}
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if the node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}
