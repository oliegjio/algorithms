#include "binary_tree.h"

struct BinaryTree *binary_tree(int v) {
  
  struct BinaryTree *t = (struct BinaryTree *) malloc(sizeof(struct BinaryTree));
  if (t == NULL) return NULL;

  t->v = v;
  t->l = NULL;
  t->r = NULL;

  return t;
}

void binary_tree_insert_node(struct BinaryTree *t, int e) {
  
}

void binary_tree_delete_node(struct BinaryTree *t, int e) {
  
}

void binary_tree_balance(struct BinaryTree *t) {
  
}

void binary_tree_print_util(struct BinaryTree *t, size_t space) {
  
  size_t width = 3;

  space += 3;

  if (t->r != NULL) binary_tree_print_util(t->r, space);

  printf("\n");
  for (size_t i = width; i < space; i++) printf(" ");
  printf("%d\n", t->v);

  if (t->l != NULL) binary_tree_print_util(t->l, space);
}

void binary_tree_print(struct BinaryTree *t) {
  
  binary_tree_print_util(t, 0);
  printf("\n");
}

size_t binary_tree_elements(struct BinaryTree *t) {
  
  size_t s = 1;

  if (t->l != NULL) s += binary_tree_elements(t->l);
  if (t->r != NULL) s += binary_tree_elements(t->r);

  return s;
}

size_t binary_tree_depth(struct BinaryTree *t) {
  
  size_t d = 1;

  if (t->l != NULL) d += binary_tree_depth(t->l);

  return d;
}

