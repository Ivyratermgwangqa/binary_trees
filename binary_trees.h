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

/* Task 0 - Basic Binary Tree Functions */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);

/* Task 1 - Binary Tree Insertion */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 2 - Heap Insertion */
heap_t *heap_insert(heap_t **root, int value);

/* Task 3 - Heap Array to Binary Heap */
heap_t *array_to_heap(int *array, size_t size);

/* Task 4 - Heap Extract */
int heap_extract(heap_t **root);

/* Task 5 - Heap Sort */
int *heap_to_sorted_array(heap_t *heap, size_t *size);

/* Task 6 - Is Binary Heap */
int binary_tree_is_heap(const binary_tree_t *tree);

/* Task 7 - Lowest Common Ancestor in a BST */
bst_t *lowest_common_ancestor(bst_t *first, bst_t *second);

/* Task 8 - Is BST */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Task 9 - BST - Insert */
bst_t *bst_insert(bst_t **tree, int value);

/* Task 10 - BST - Array to BST */
bst_t *array_to_bst(int *array, size_t size);

/* Task 11 - BST - Search */
bst_t *bst_search(const bst_t *tree, int value);

/* Task 12 - BST - Remove */
bst_t *bst_remove(bst_t *root, int value);

/* Task 13 - AVL - Insert */
avl_t *avl_insert(avl_t **tree, int value);

/* Task 14 - AVL - Array to AVL */
avl_t *array_to_avl(int *array, size_t size);

/* Task 15 - AVL - Remove */
avl_t *avl_remove(avl_t *root, int value);

/* Task 16 - AVL - From Sorted Array */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* Task 17 - AVL - Is AVL */
int binary_tree_is_avl(const binary_tree_t *tree);

/* Task 18 - AVL - Balance Factor */
int binary_tree_balance(const binary_tree_t *tree);

/* Task 19 - AVL - Rotate Right */
avl_t *rotate_right(avl_t *tree);

/* Task 20 - AVL - Rotate Left */
avl_t *rotate_left(avl_t *tree);

/* Task 21 - AVL - AVL Tree - Insert */
avl_t *avl_insert(avl_t **tree, int value);

/* Task 22 - AVL - AVL Array to AVL Tree */
avl_t *array_to_avl(int *array, size_t size);

/* Task 23 - AVL - AVL Remove */
avl_t *avl_remove(avl_t *root, int value);

/* Task 24 - Is BST */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Task 25 - BST - Insert */
bst_t *bst_insert(bst_t **tree, int value);

/* Task 26 - BST - Array to BST */
bst_t *array_to_bst(int *array, size_t size);

/* Task 27 - BST - Search */
bst_t *bst_search(const bst_t *tree, int value);

/* Task 28 - BST - Remove */
bst_t *bst_remove(bst_t *root, int value);

/* Task 29 - AVL - Insert */
avl_t *avl_insert(avl_t **tree, int value);

/* Task 30 - AVL - Array to AVL */
avl_t *array_to_avl(int *array, size_t size);

/* Task 31 - AVL - Remove */
avl_t *avl_remove(avl_t *root, int value);

/* Task 32 - AVL - From Sorted Array */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* Task 33 - AVL - Is AVL */
int binary_tree_is_avl(const binary_tree_t *tree);

/* Task 34 - AVL - Balance Factor */
int binary_tree_balance(const binary_tree_t *tree);

/* Task 35 - AVL - Rotate Right */
avl_t *rotate_right(avl_t *tree);

/* Task 36 - AVL - Rotate Left */
avl_t *rotate_left(avl_t *tree);

/* Task 37 - AVL - AVL Tree - Insert */
avl_t *avl_insert(avl_t **tree, int value);

/* Task 38 - AVL - AVL Array to AVL Tree */
avl_t *array_to_avl(int *array, size_t size);

/* Task 39 - AVL - AVL Remove */
avl_t *avl_remove(avl_t *root, int value);

/* Task 40 - Is BST */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Task 41 - BST - Insert */
bst_t *bst_insert(bst_t **tree, int value);

#endif /* BINARY_TREES_H */
