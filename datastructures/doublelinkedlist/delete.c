#include <stdio.h>
#include <stdlib.h>
struct node 
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *create()
{
  struct node *newnode;
  static struct node *temp = NULL;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  newnode->prev = temp;
  int choice;
  printf("0 to Stop, 1 to Continue: ");
  scanf("%d",&choice);
  if (choice)
  {
    temp = newnode;
    newnode->next = create();
  }
  else
  {
    newnode->next = NULL;
    return newnode;
  }
  return newnode;
}
void display(struct node *start)
{
  while (start!=NULL)
  {
    printf("%d ",start->data);
    start = start->next;
  }
  return;
}
struct node *deletebegin(struct node *start)
{
  struct node *temp = start;
  struct node *freed = start;
  temp = temp->next;
  free(freed);
  temp->prev = NULL;
  return temp;
}
struct node *deleteend(struct node *start)
{
  struct node *temp = start;
  struct node *prev = NULL;
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }
  free(temp);
  prev->next = NULL;
  return start;
}
struct node *deletepos(struct node *start,int pos)
{
  struct node *currentnode = start;
  struct node *prevnode = NULL;
  struct node *nextnode = start;
  nextnode = nextnode->next;
  int i = 1;
  while (i<pos)
  {
    prevnode = currentnode;
    currentnode = currentnode->next;
    nextnode = nextnode->next;
    i++;
  }
  prevnode->next = nextnode;
  nextnode->prev = prevnode;
  free(currentnode);
  return start;
}
int main()
{
  struct node *head;
  head = create();
  printf("\nEntered list is ");
  display(head);
  head = deletebegin(head);
  printf("\nList after deleting 1st node: ");
  display(head);
  head = deleteend(head);
  printf("\nList after deleting last node: ");
  display(head);
  int pos;
  printf("Enter the position to delete the node: ");
  scanf("%d",&pos);
  head = deletepos(head,pos);
  printf("\nList after deleting node at a specific position: ");
  display(head);
}
