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
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  int choice;
  printf("0 to STOP, 1 to CONTINUE: ");
  scanf("%d",&choice);
  if (choice)
  {
    newnode->next = create();
  }
  else
  {
    newnode->next = NULL;
    return newnode;
  }
  return newnode;
}

void display(struct node *head)
{
  if (head == NULL)
  {
    return;
  }
  printf("%d ",head->data);
  display(head->next);
}
struct node *modify(struct node *start)
{
  struct node *fnode = start;
  struct node *temp = start;
  start = start->next;
  while (temp->next != NULL)
  {
    temp = temp->next; 
  }
  temp->next = fnode;
  fnode->next = NULL;
  return start;
}
int main()
{
  struct node *l1;
  printf("Enter List: \n");
  l1 = create();
  l1 = modify(l1);
  printf("After modification: ");
  display(l1);
}
