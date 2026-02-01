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
struct node *remdup(struct node *start)
{
  struct node *i,*j,*temp;
  struct node *prev = NULL;
  for (i=start;i->next!=NULL;i=i->next)
  {
    prev = i;
    j = prev->next;
    while(j!=NULL)
    {
      if (i->data == j->data)
      {
        temp = j;
        prev->next = j->next;
        prev = prev->next;
        j = j->next;
        free(temp);
      }
      else
      {
        prev = prev->next;
        j = j->next;
      }
    }
  }
  return start;
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
int main()
{
  struct node *head;
  head = create();
  printf("Original: ");
  display(head);
  head = remdup(head);
  printf("After removing duplicates: ");
  display(head);
}
