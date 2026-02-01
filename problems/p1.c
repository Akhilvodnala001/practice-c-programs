#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
  struct node *head = NULL;
  struct node *temp = NULL;
  int ch = 1;
  while(ch)
  {
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("Enter data: ");
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
    printf("Enter 0 to STOP, 1 to CONTINUE: ");
    scanf("%d",&ch);
  }
  return head;
}
void display(struct node *start)
{
  while(start!=NULL)
  {
    printf("%d->",start->data);
    start = start->next;
  }
  printf("NULL\n");
}
struct node *reverse(struct node *start,int m,int n)
{
  struct node *prev = start;
  int i = 1;
  while(i<m-1)
  {
    prev = prev->next;
    i++;
  }
  struct node *curr = prev->next;
  struct node *next = NULL;
  for (i=1;i<n-m;i++)
  {
    next = curr->next;
    curr->next = next->next;
    next->next = prev->next;
    prev->next = next;
  }
  return start;
}
int main()
{
  struct node *head;
  head = create();
  display(head);
  int m,n;
  printf("Enter start pos: ");
  scanf("%d",&m);
  printf("Enter end pos: ");
  scanf("%d",&n);
  if (m>=n)
  {
    printf("Invalid positions!!\n");
    return 1;
  }
  head = reverse(head,m,n);
  display(head);
}
