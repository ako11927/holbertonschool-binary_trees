# 0x1C. C - Binary Trees

This project covers creating, traversing, and manipulating binary trees in C.

## Learning Objectives
- Understand what a binary tree is  
- Distinguish between binary trees and binary search trees  
- Know what complete, full, perfect, and balanced binary trees are  
- Learn traversal types: preorder, inorder, postorder  
- Measure depth, height, and size of a binary tree  

## Requirements
- Compiled on Ubuntu 20.04 LTS with:  
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`  
- Use **Betty** style  
- Max 5 functions per file, no global variables  

## Data Structure
```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
Files
File	Description
0-binary_tree_node.c	Create a binary tree node
1-binary_tree_insert_left.c	Insert node on the left
2-binary_tree_insert_right.c	Insert node on the right
3-binary_tree_delete.c	Delete a binary tree
4-binary_tree_is_leaf.c	Check if a node is a leaf
5-binary_tree_is_root.c	Check if a node is the root
6-binary_tree_preorder.c	Preorder traversal
7-binary_tree_inorder.c	Inorder traversal
8-binary_tree_postorder.c	Postorder traversal
9-binary_tree_height.c	Measure height
10-binary_tree_depth.c	Measure depth
11-binary_tree_size.c	Measure total nodes
12-binary_tree_leaves.c	Count leaves
13-binary_tree_nodes.c	Count non-leaf nodes
14-binary_tree_balance.c	Measure balance factor
15-binary_tree_is_full.c	Check if full
16-binary_tree_is_perfect.c	Check if perfect
17-binary_tree_sibling.c	Find sibling
18-binary_tree_uncle.c	Find uncle

Example Output
scss
Copy code
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
Compilation Example
bash
Copy code
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_tree_test
./binary_tree_test
Author
ako11927
Holberton School — Low-Level Programming

