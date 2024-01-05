#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/* Basic Binary Tree Structure */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree Structure */
typedef struct binary_tree_s bst_t;

/* AVL Tree Structure */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap Structure */
typedef struct binary_tree_s heap_t;

/* Function Prototypes */

/* Create a new node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Insert a node as the left child */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Insert a node as the right child */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Delete a tree */
void binary_tree_delete(binary_tree_t *tree);

/* Check if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Check if a node is the root */
int binary_tree_is_root(const binary_tree_t *node);

/* Traverse the tree in preorder */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Traverse the tree in inorder */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Traverse the tree in postorder */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Get the height of the tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Get the depth of a node */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Get the size of the tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* Count the leaves in the tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Count the nodes in the tree */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Check the balance factor of the tree */
int binary_tree_balance(const binary_tree_t *tree);

/* Check if the tree is a full binary tree */
int binary_tree_is_full(const binary_tree_t *tree);

/* Check if the tree is a perfect binary tree */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Get the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Get the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Find the lowest common ancestor of two nodes */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second);

/* Traverse the tree in level order */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* Check if the tree is a complete binary tree */
int binary_tree_is_complete(const binary_tree_t *tree);

/* Rotate the tree to the left */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* Rotate the tree to the right */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* Check if the tree is a binary search tree (BST) */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Insert a value into a binary search tree (BST) */
bst_t *bst_insert(bst_t **tree, int value);

/* Create a binary search tree (BST) from an array */
bst_t *array_to_bst(int *array, size_t size);

/* Search for a value in a binary search tree (BST) */
bst_t *bst_search(const bst_t *tree, int value);

/* Remove a value from a binary search tree (BST) */
bst_t *bst_remove(bst_t *root, int value);

/* Check if the tree is an AVL tree */
int binary_tree_is_avl(const binary_tree_t *tree);

/* Insert a value into an AVL tree */
avl_t *avl_insert(avl_t **tree, int value);

/* Create an AVL tree from an array */
avl_t *array_to_avl(int *array, size_t size);

/* Remove a value from an AVL tree */
avl_t *avl_remove(avl_t *root, int value);

/* Create an AVL tree from a sorted array */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* Check if the tree is a binary heap */
int binary_tree_is_heap(const binary_tree_t *tree);

/* Insert a value into a binary heap */
heap_t *heap_insert(heap_t **root, int value);

/* Create a binary heap from an array */
heap_t *array_to_heap(int *array, size_t size);

/* Extract the root value from a binary heap */
int heap_extract(heap_t **root);

/* Convert a binary heap to a sorted array */
int *heap_to_sorted_array(heap_t *heap, size_t *size);

/* print function */
void binary_tree_print(const binary_tree_t *);

#endif /* BINARY_TREES_H */
