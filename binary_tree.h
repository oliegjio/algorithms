#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include <stdlib.h>

struct BinaryTree {

  int v;
  struct BinaryTree *l;
  struct BinaryTree *r;

};

struct BinaryTree *binary_tree(int v);

int binary_tree_insert_node(struct BinaryTree *t, int e);
void binary_tree_delete_node(struct BinaryTree *t, int e);
void binary_tree_balance(struct BinaryTree *t);

size_t binary_tree_elements(struct BinaryTree *t);
size_t binary_tree_depth(struct BinaryTree *t);

void binary_tree_print(struct BinaryTree *t);

#endif // BINARY_TREE_H_
