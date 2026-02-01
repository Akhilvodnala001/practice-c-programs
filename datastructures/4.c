#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node* modify(struct node *start)
{
  struct node *largestnode = start;
  struct node *largestprev = NULL;
  struct node *temp;
  struct node *prev = NULL;
  temp = start;
  while (temp != NULL)
  {
    if (largestnode->data < temp->data)
    {
      largestnode = temp;
      largestprev = prev;
    }
    prev = temp;
    temp = temp->next;
  }
  
  if (largestnode->next == NULL)
  {
    return start;
  }
  
  if (largestprev != NULL)
  {
    largestprev->next = largestnode->next;
  }
  else
  {
    start = start->next;
  }
  temp = start;
  while(temp->next != NULL)
  {
    temp = temp->next;
  }
  largestnode->next = NULL;
  temp->next = largestnode;
  return start;
}


int print(struct node *start)
{
  if (start == NULL)
  {
    return 0;
  }
  printf("%d ",start->data);
  print(start->next);
}

int main()
{
  struct node *head = NULL;
  struct node *temp;
  int choice = 1;
  while (choice != 0)
  {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if (head == NULL)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = temp->next;
    }
    printf("0 to Stop, 1 to Continue: ");
    scanf("%d",&choice);
  }
  head = modify(head);
  print(head);
}
