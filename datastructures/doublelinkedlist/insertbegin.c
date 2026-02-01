#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *head,*newnode;
struct node *create()
{
  static struct node *temp = NULL;
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data: ");
  scanf("%d",&newnode->data);
  newnode->prev = temp;
  temp = newnode;
  int choice;
  printf("0 to stop, 1 to continue: ");
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
void forward(struct node *start)
{
  if (start!=NULL)
  {
    printf("%d ",start->data);
    forward(start->next);
  }
  else
  {
    return;
  } 
}
void backward(struct node *start)
{
  struct node *temp = start;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  while (temp!=NULL)
  {
    printf("%d ",temp->data);
    temp = temp->prev;
  }
}
struct node *insertbegin(struct node *start)
{
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter data to insert at beginning: ");
  scanf("%d",&insert->data);
  insert->prev = NULL;
  start->prev = insert;
  insert->next = start;
  start = insert;
  return start;
}
struct node *insertend(struct node *start)
{
  struct node *temp;
  temp = start;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data to insert at ending: ");
  scanf("%d",&insert->data);
  temp->next = insert;
  insert->prev = temp;
  insert->next = NULL;
  return start;
}
struct node *position(struct node *start)
{
  int pos;
  struct node *temp = start;
  struct node *prevnode = NULL;
  printf("Enter the position: ");
  scanf("%d",&pos);
  int i = 1;
  while (i<pos)
  {
    prevnode = temp;
    temp = temp->next;
    i++;
  }
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("Enter Data: ");
  scanf("%d",&insert->data);
  prevnode->next = insert;
  insert->prev = prevnode;
  insert->next = temp;
  temp->prev = insert;
  return start;
}
int main()
{
  head = create();
  printf("Forward Traverse: ");
  forward(head);
  printf("\nBackward Traverse: ");
  backward(head);
  head = insertbegin(head);
  printf("\nForward Traverse: ");
  forward(head);
  printf("\nBackward Traverse: ");
  backward(head);
  head = insertend(head);
  printf("\nForward Traverse: ");
  forward(head);
  printf("\nBackward Traverse: ");
  backward(head);
  head = position(head);
  printf("\nForward Traverse: ");
  forward(head);
  printf("\nBackward Traverse: ");
  backward(head);
  
}
