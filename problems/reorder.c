#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
}*tail;
struct node *create()
{
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  newnode->next = NULL;
  int ch;
  printf("0 to STOP, 1 to CONTINUE: ");
  scanf("%d",&ch);
  if (ch)
  {
    newnode->next = create();
    return newnode;
  }
  else
  {
    tail = newnode;
    return newnode;
  }
}
struct node *reorder(struct node *start)
{
  struct node *last = start;
  struct node *plast = NULL;
  while (last->next != tail)
  {
    plast = last;
    last = last->next;
  }
  plast->next = NULL;
  struct node *temp = last;
  int i = 0;
  while (temp!=NULL)
  {
    i++;
    temp = temp->next;
  }
  struct node *head = start;
  temp = last->next;
  for (int j=0;j<i;j++)
  {
    temp->next = head->next;
    head->next = temp;
    head = head->next->next;
    temp = last;
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
  printf("Before Reordering: ");
  display(head);
  head = reorder(head);
  printf("After Reordering: ");
  display(head);
}
