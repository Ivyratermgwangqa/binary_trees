# binary_trees

# Binary Trees Project

This repository contains C code for various binary tree operations as part of a project. The tasks range from basic binary tree functionalities to more advanced operations on different types of binary trees.

## Table of Contents

- [Requirements](#requirements)
- [How to Use](#how-to-use)
- [Data structures](#data-structures)
- [Example Commands](#example-commands)
- [Task Descriptions](#task-descriptions)
- [Author](#author)

## Requirements

- Ubuntu 20.04 LTS
- Compiler: gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Editor: vi, vim, emacs
- Betty Style Guide

## How to Use

1. Clone the repository to your local machine.
2. Compile the C files using the provided compilation flags.
3. Execute the resulting binary.

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o binary_tree <your_files.c>
./binary_tree
```
Including information about the data structures and types for binary trees in the README.md file is indeed important, especially for anyone who wants to understand the structure of the code and the types used in the implementation. This information helps users, collaborators, or graders to navigate the codebase, understand the data structures involved, and use or review the code effectively.

In your README.md, you can create a section called "Data Structures" or something similar, and include the provided information about the binary tree structures. Here's an example of how you might include it in your README.md:

# Binary Trees Project

This project implements various operations on binary trees. The following data structures are used:

## Data Structures

### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree

```c
typedef struct binary_tree_s bst_t;
```

### AVL Tree

```c
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap

```c
typedef struct binary_tree_s heap_t;
```

## Example Commands

```bash
# Example command for Task 0
./binary_tree_task_0

# Example command for Task 1
./binary_tree_task_1
```

## Task Descriptions
```
Brief descriptions for each task from 0 to 41:
```

### Task 0: New Node
Create a function that creates a new binary tree node.

### Task 1: Insert Left
Write a function to insert a node as the left-child of another node.

### Task 2: Insert Right
Write a function to insert a node as the right-child of another node.

### Task 3: Delete
Write a function to delete an entire binary tree.

### Task 4: Is Leaf
Create a function to check if a node is a leaf in a binary tree.

### Task 5: Is Root
Write a function to check if a given node is the root of a binary tree.

### Task 6: Preorder Traversal
Implement a function to traverse a binary tree using pre-order traversal.

### Task 7: Inorder Traversal
Implement a function to traverse a binary tree using in-order traversal.

### Task 8: Postorder Traversal
Create a function to traverse a binary tree using post-order traversal.

### Task 9: Height
Write a function to calculate the height of a binary tree.

### Task 10: Depth
Implement a function to calculate the depth of a node in a binary tree.

### Task 11: Size
Create a function to calculate the size of a binary tree.

### Task 12: Leaves
Write a function to count the leaves in a binary tree.

### Task 13: Nodes at Depth
Implement a function to count the nodes at a specific depth in a binary tree.

### Task 14: Balance Factor
Write a function to calculate the balance factor of a binary tree.

### Task 15: Is Full
Create a function to check if a binary tree is full.

### Task 16: Is Perfect
Write a function to check if a binary tree is perfect.

### Task 17: Sibling
Implement a function to find the sibling of a node in a binary tree.

### Task 18: Uncle
Write a function to find the uncle of a node in a binary tree.

### Task 19: Lowest Common Ancestor
Create a function to find the lowest common ancestor of two nodes in a binary tree.

### Task 20: Level Order Traversal
Write a function to perform level-order traversal on a binary tree.

### Task 21: Is Complete
Implement a function to check if a binary tree is complete.

### Task 22: Rotate Left
Create a function to perform a left-rotation on a binary tree.

### Task 23: Rotate Right
Write a function to perform a right-rotation on a binary tree.

### Task 24: Is BST
Implement a function to check if a binary tree is a valid Binary Search Tree (BST).

### Task 25: BST - Insert
Write a function to insert a value into a Binary Search Tree (BST).

### Task 26: BST - Array to BST
Create a function to build a Binary Search Tree (BST) from an array.

### Task 27: BST - Search
Write a function to search for a value in a Binary Search Tree (BST).

### Task 28: BST - Remove
Implement a function to remove a node with a specific value from a Binary Search Tree (BST).

### Task 29: Big O #BST
Provide the average time complexities for various operations on a Binary Search Tree (BST).

### Task 30: Is AVL
Write a function to check if a binary tree is a valid AVL Tree.

### Task 31: AVL - Insert
Create a function to insert a value into an AVL Tree.

### Task 32: AVL - Array to AVL
Write a function to build an AVL Tree from an array.

### Task 33: AVL - Remove
Implement a function to remove a node with a specific value from an AVL Tree.

### Task 34: Big O #AVL Tree
Provide the average time complexities for various operations on an AVL Tree.

### Task 35: Big O #AVL Tree
Provide the average time complexities for various operations on an AVL Tree.

### Task 36: Is Binary Heap
Write a function to check if a binary tree is a valid Max Binary Heap.

### Task 37: Heap - Insert
Create a function to insert a value into a Max Binary Heap.

### Task 38: Heap - Array to Binary Heap
Write a function to build a Max Binary Heap tree from an array.

### Task 39: Heap - Extract
Implement a function to extract the root node of a Max Binary Heap.

### Task 40: Heap - Sort
Write a function to convert a Binary Max Heap to a sorted array of integers.

### Task 41: Big O #Binary Heap
Provide the average time complexities for various operations on a Binary Heap.
```
If you have specific questions about any task or need more details, feel free to ask!
```
## Author

[Lerato Mgwangqa]
```
Feel free to customize this template according to your needs. If you have specific instructions or details for each task, you can include them under each task's description.
```
