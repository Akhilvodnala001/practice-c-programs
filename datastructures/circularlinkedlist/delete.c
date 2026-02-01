#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head,*chead = NULL;
struct node *create()
{
  struct node *head = NULL;
  struct node *temp = NULL;
  int choice = 1;
  while (choice)
  {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
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
    printf("0 to STOP, 1 to CONTINUE: ");
    scanf("%d",&choice);
  }
  temp->next = head;
  return head;
}

void display(struct node *start)
{
  struct node *temp = start;
  do
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  while (temp!=start);
  return;
}
struct node *deletebegin(struct node *start)
{
  struct node *temp = start;
  while (temp->next != start)
  {
    temp = temp->next;
  }
  temp->next = start->next;
  struct node *retval = start->next;
  free(start);
  return retval;
}
struct node *deleteend(struct node *start)
{
  struct node *temp = start;
  while (temp->next->next != start)
  {
    temp = temp->next;
  }
  struct node *freenode = temp->next;
  temp->next = start;
  free(freenode);
  return start;
}
struct node *deletepos(struct node *start)
{
  struct node *currentnode = start;
  struct node *prevnode = NULL;
  struct node *nextnode = start;
  nextnode = nextnode->next;
  int pos;
  printf("Enter position: ");
  scanf("%d",&pos);
  int i = 1;
  struct node *tail = start;
  while (tail->next != start)
  {
    tail = tail->next;
  }
  if (pos == 1)
  {
    tail->next = nextnode;
    free(start);
    return nextnode;
  }
  while (i<pos)
  {
    prevnode = currentnode;
    currentnode = currentnode->next;
    nextnode = nextnode->next;
    i++;
  }
  prevnode->next = nextnode;
  free(currentnode);
  return start;
}
int main()
{
  head = create();
  printf("List: ");
  display(head);
  head = deletebegin(head);
  printf("\nLIST After deleting first element: ");
  display(head);
  head = deleteend(head);
  printf("\nLIST After deleting last element: ");
  display(head);
  head = deletepos(head);
  printf("\nLIST After deleting element at a position: ");
  display(head);
  
}
