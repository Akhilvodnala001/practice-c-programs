#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create()
{
  int choice;
  printf("0 to stop 1 to Continue: ");
  scanf("%d",&choice);
  if (!choice)
  {
    return 0;
  }
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  int x;
  printf("Enter the data: ");
  scanf("%d",&x);
  newnode->data = x;
  newnode->next = create();
  return newnode;
}
int display(struct node *start)
{
  if (start == NULL)
  {
    return 0;
  }
  printf("%d ",start->data);
  display(start->next);
}
int main()
{
  struct node *head;
  head = create();
  display(head);
}
