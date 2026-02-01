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
  printf("Enter 0 to STOP, 1 to CONTINUE: ");
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
void dealloc(struct node *start)
{
  if (start->next == NULL)
  {
    free(start);
    return;
  }
  dealloc(start->next);
  free(start);
}
struct node *reorder(struct node *start)
{
  struct node *temp = start;
  struct node *head = NULL;
  struct node *thead = NULL;
  while(temp!=NULL)
  {
    if (temp->data%2)
    {
      struct node *newnode = malloc(sizeof(struct node));
      newnode->data = temp->data;
      newnode->next = NULL;
      if (head ==  NULL)
      {
        head = thead = newnode;
      }
      else
      {
        thead->next = newnode;
        thead = thead->next;
      }
    }
    temp = temp->next;
  }
  temp = start;
  while(temp!=NULL)
  {
    if (!(temp->data%2))
    {
      struct node *newnode = malloc(sizeof(struct node));
      newnode->data = temp->data;
      newnode->next = NULL;
      if (thead->data%2)
      {
        thead->next = newnode;
        thead = thead->next;
      }
      else
      {
        thead->next = newnode;
        thead = thead->next;
      }
    }
    temp = temp->next;
  }
  dealloc(start);
  return head;
}
int main()
{
  struct node *head;
  head = create();
  printf("Before Re-ordering: ");
  display(head);
  head = reorder(head);
  printf("After Re-ordering: ");
  display(head);
} 
