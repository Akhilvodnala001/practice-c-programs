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

int print(struct node *head)
{
  while (head != NULL)
  {
    printf("%d ",head->data);
    head = head->next;
  }
}

struct node* reverse(struct node *start)
{
  struct node *prevnode,*currentnode,*nextnode;
  prevnode = NULL;
  currentnode = nextnode = start;
  while (nextnode != NULL)
  {
    nextnode = nextnode->next;
    currentnode->next = prevnode;
    prevnode = currentnode;
    currentnode = nextnode;
  }
  start = prevnode;
  return start;
}

int main()
{
  struct node *head;
  head = create();
  head = reverse(head);
  print(head);
}
