#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
struct node *create(void)
{
  int x;
  printf("Enter the data: ");
  scanf("%d",&x);
  if (x == -1)
  {
    return 0;
  }
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = x;
  printf("Enter left child of %d\n",x);
  newnode->left = create();
  printf("Enter the right child of %d\n",x);
  newnode->right = create();
  return newnode;
  
}

int main()
{
  struct node *root;
  printf("Enter the data for root node: ");
  root = create();
  

}
