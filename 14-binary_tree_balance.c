#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: Pointer to the root node of the tree to measure.
*
* Return: Balance factor of the tree, 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

left_height = (int)binary_tree_height(tree->left);
right_height = (int)binary_tree_height(tree->right);

return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t l = 0, r = 0;
l = tree->left ? binary_tree_height(tree->left) + 1 : 1;
r = tree->right ? binary_tree_height(tree->right) + 1 : 1;
return ((l > r) ? l : r);
}
return (0);
}
