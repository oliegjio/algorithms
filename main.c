#include "binary_tree.h"

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  struct BinaryTree *t = binary_tree(5);
  struct BinaryTree *t2 = binary_tree(6);
  struct BinaryTree *t3 = binary_tree(7);
  struct BinaryTree *t4 = binary_tree(8);
  struct BinaryTree *t5 = binary_tree(3);
  struct BinaryTree *t6 = binary_tree(2);

  t->l = t2;
  t->r = t3;
  t2->l = t4;
  t2->r = t5;
  t3->r = t6;

  size_t elems = binary_tree_elements(t);
  printf("ELEMS: %zu \n", elems);

  size_t depth = binary_tree_depth(t);
  printf("DEPTH: %zu \n", depth);

  binary_tree_print(t);

  return 0;
}
