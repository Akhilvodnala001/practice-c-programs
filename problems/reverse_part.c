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
  newnode = malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  newnode->next = NULL;
  int ch;
  printf("0 to STOP,1 to CONTINUE: ");
  scanf("%d",&ch);
  if (ch)
  {
    newnode->next = create();
    return newnode;
  }
  else
  {
    return newnode;
  } 
} 
void display(struct node *start)
{
  if (start == NULL)
  {
    return;
  }
  printf("%d ",start->data);
  display(start->next);
}
struct node *reverse(struct node *start,int m, int n)
{
  int i = 1;
  struct node *curr = start;
  struct node *prev = NULL;
  struct node *next = start->next;
  while (i<m)
  {
    prev = curr;
    curr = curr->next;
    next = next->next;
    i++;
  }
  for (int j=1;j<=n-m;j++)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return start;
}
int main()
{
  struct node *head;
  head = create();
  printf("Original: ");
  display(head);
  int m,n;
  printf("Enter starting position: ");
  scanf("%d",&m);
  printf("Enter Ending position: ");
  scanf("%d",&n);
  head = reverse(head,m,n);
  printf("After removing duplicates: ");
  display(head);
}
