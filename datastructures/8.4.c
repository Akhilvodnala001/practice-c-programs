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
int original(struct node *start)
{
  if (start == NULL)
  {
    return 0;
  }
  printf("%d ",start->data);
  original(start->next);
}
int reverse(struct node *start)
{
  if (start == NULL)
  {
    return 0;
  }
  reverse(start->next);
  printf("%d ",start->data);
}
int main()
{
  struct node *head;
  head = create();
  printf("Original Order: ");
  original(head);
  printf("Reverse Order: ");
  reverse(head);
} 

