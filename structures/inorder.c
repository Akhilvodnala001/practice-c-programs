#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
}
struct node *create(void)
{
  struct node *newnode;
  newnode->data = x;
  printf("Enter the left child: ");
  newnode->left = create();
  printf("Enter the right child: ");
  newnode->right = create();
  return newnode;
}

int main()
{
  struct node *root;
  root = create();
  inorder()
}
