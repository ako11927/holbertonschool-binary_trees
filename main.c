#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

void print_node(int n)
{
    printf("%d ", n);
}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_insert_left(root, 12);
    root->right = binary_tree_insert_right(root, 402);
    root->left->left = binary_tree_insert_left(root->left, 6);
    root->left->right = binary_tree_insert_right(root->left, 16);
    root->right->left = binary_tree_insert_left(root->right, 256);
    root->right->right = binary_tree_insert_right(root->right, 512);

    printf("Binary Tree:\n");
    binary_tree_print(root);

    printf("\nPreorder: ");
    binary_tree_preorder(root, print_node);

    printf("\nInorder: ");
    binary_tree_inorder(root, print_node);

    printf("\nPostorder: ");
    binary_tree_postorder(root, print_node);

    printf("\nHeight: %lu\n", binary_tree_height(root));
    printf("Size: %lu\n", binary_tree_size(root));
    printf("Leaves: %lu\n", binary_tree_leaves(root));
    printf("Nodes: %lu\n", binary_tree_nodes(root));
    printf("Balance: %d\n", binary_tree_balance(root));
    printf("Is full: %d\n", binary_tree_is_full(root));
    printf("Is perfect: %d\n", binary_tree_is_perfect(root));

    binary_tree_delete(root);
    return (0);
}
