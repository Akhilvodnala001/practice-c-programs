#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *create()
{
  int x;
  printf("Enter the data(-1 for no node): ");
  scanf("%d",&x);
  if (x == -1)
  {
    return 0;
  }
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = x;
  printf("Enter the left child: ");
  newnode->left = create();
  printf("Enter the right child: ");
  newnode->right = create();
  return newnode;
}

void inorder(struct node *root)
{
  if (root == NULL)
  {
    return;
  }
  inorder(root->left);
  printf("%d ",root->data);
  inorder(root->right);
}

void postorder(struct node *root)
{
  if (root == NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  printf("%d ",root->data);
}

void preorder(struct node *root)
{
  if (root == NULL)
  {
    return;
  }
  printf("%d ",root->data);
  preorder(root->left);
  preorder(root->right);
}

int main()
{
  struct node *root;
  printf("Enter the root node: ");
  root  = create();
  int choice;
  printf("Enter a number(1 for inorder traversal,2 for postorder traversal,3 for preorder traversal): ");
  scanf("%d",&choice);
  if (choice == 1)
  {
    inorder(root);
  }
  else if (choice == 2)
  {
    postorder(root);
  }
  else if (choice == 3)
  {
    preorder(root);
  }
  else
  {
    printf("Invalid input!");
  }
}
