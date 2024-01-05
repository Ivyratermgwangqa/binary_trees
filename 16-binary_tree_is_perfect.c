#include "binary_trees.h"
/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 if tree is NULL or not perfect.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}

