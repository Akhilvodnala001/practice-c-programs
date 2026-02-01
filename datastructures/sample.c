#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
}*head;
struct node *create(int n)
{
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  newnode->next = NULL;
  n = n-1;
  if (n)
  {
    newnode->next = create(n);
    return newnode;
  }
  else
  {
    return newnode;
  }
}
void display(struct node *start)
{
  while (start!=NULL)
  {
    printf("%d ",start->data);
    start = start->next;
  } 
} 
void reverse(struct node *start)
{
  if (start->next == NULL)
  {
    head = start;
    return;
  }
  reverse(start->next);
  start->next->next = start;
  start->next = NULL;
}
int main()
{
  int n;
  printf("No.of elements in the linked list: ");
  scanf("%d",&n);
  head = create(n);
  display(head);
  struct node *temp = head;
  reverse(temp);
  display(head);
} 
