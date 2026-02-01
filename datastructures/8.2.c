#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
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
int sum(struct node *start)
{
  if (start == NULL)
  {
    return 0;
  }
  return start->data + sum(start->next);
}
int main()
{
  struct node *head;
  head = create();
  int s;
  s = sum(head);
  printf("Sum of elements in the linked-list: %d",s);
}
