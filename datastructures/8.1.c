#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create()
{
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  int choice;
  printf("0 to Stop, 1 to Continue: ");
  scanf("%d",&choice);
  if (choice)
  {
    newnode->next = create();
  }
  else
  {
    return newnode;
  }
  return newnode;
}
int len(struct node *start)
{
  if (start == NULL)
  {
    return 0;
  }
  return 1 + len(start->next);
}
int main()
{
  struct node *head;
  head = create();
  int length;
  length = len(head);
  printf("Length of linked-list is %d",length);
}
