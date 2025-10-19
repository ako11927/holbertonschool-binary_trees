# Binary Trees Project

This project implements a set of functions for creating, manipulating, and analyzing **binary trees** in C.

## Learning Objectives

By completing this project, you should be able to:
- Understand what a binary tree is.
- Explain the difference between binary trees and binary search trees.
- Describe the concepts of height, depth, size, and balance factor.
- Implement tree traversal methods (preorder, inorder, postorder).
- Identify different types of trees (full, perfect, balanced).

## Requirements
- **Language:** C
- **Compiler:** gcc (Ubuntu 20.04)
- **Flags:** `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style:** Betty coding style
- **Editors allowed:** vi, vim, emacs

## Data Structures

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

