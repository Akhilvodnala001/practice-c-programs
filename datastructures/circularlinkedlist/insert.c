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
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  if(chead == NULL)
  {
    chead = newnode;
  }
  int choice;
  printf("0 to Stop, 1 to Continue: ");
  scanf("%d",&choice);
  if (choice)
  {
    newnode->next = create();
  }
  else
  {
    newnode->next = chead;
    return newnode;
  }
  return newnode;
}
void display(struct node *start)
{
  struct node *temp = start;
  do
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  while(temp!=start);
  return;
}
struct node *insertbegin(struct node *start)
{
  struct node *temp = start->next;
  while (temp->next != start)
  {
    temp = temp->next; 
  }
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter data to insert at beginning: ");
  scanf("%d",&insert->data);
  temp->next = insert;
  insert->next = start;
  return insert;
}
struct node *insertend(struct node *start)
{
  struct node *temp = start->next;
  while (temp->next != start)
  {
    temp = temp->next;
  }
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter data to insert at end: ");
  scanf("%d",&insert->data);
  temp->next = insert;
  insert->next = start;
  return start;
}
struct node *insertpos(struct node *start)
{
  struct node *temp = start;
  struct node *prev = NULL;
  int pos;
  printf("\nEnter the position: ");
  scanf("%d",&pos);
  int i = 1;
  while (i<pos)
  {
    prev = temp;
    temp = temp->next;
    i++;
  }
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter data: ");
  scanf("%d",&insert->data);
  prev->next = insert;
  insert->next = temp;
  return start;
}
int main()
{
  head = create();
  printf("The circular linked-list is ");
  display(head);
  head = insertbegin(head);
  printf("The circular linked-list after inserting data at beginning ");
  display(head);
  head = insertend(head);
  printf("The circular linked-list after inserting data at end ");
  display(head);
  head = insertpos(head);
  printf("The circular linked-list after inserting data at a position: ");
  display(head);

}
