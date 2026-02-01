//Insert NODE at TOP
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
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter data: ");
  scanf("%d",&newnode->data);
  int choice;
  printf("1 to add next node, 0 to Terminate: ");
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
void display(struct node *start)
{
  if (start == NULL)
  {
    return;
  }
  printf("%d ",start->data);
  display(start->next);
}
struct node *insertstart(struct node *start)
{
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("\nInsert Data at start : ");
  scanf("%d",&insert->data);
  insert->next = start;
  start = insert;
  return start;
}
struct node *insertend(struct node *start)
{
  struct node *temp = start;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  struct node *insert;
  insert =  (struct node*)malloc(sizeof(struct node));
  printf("Insert data at End: ");
  scanf("%d",&insert->data);
  temp->next = insert;
  insert->next = NULL;
  return start;
}
struct node *insertpos(struct node *start)
{
  int pos;
  printf("Enter the position at where you wanna insert: ");
  scanf("%d",&pos);
  int i = 1;
  struct node *temp = start;
  struct node *prevnode = NULL;
  while (i<pos)
  {
    prevnode = temp;
    temp = temp->next;
    i++;
  }
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("Insert data at position-%d: ",pos);
  scanf("%d",&insert->data);
  prevnode->next = insert;
  insert->next = temp;
  temp = start;
  return start;
}
struct node *deletepos(struct node *start)
{
  int pos;
  printf("Enter the position: ");
  scanf("%d",&pos);
  struct node *temp = start;
  struct node *prev = NULL;
  int i = 1;
  while (i<pos)
  {
    prev = temp;
    temp = temp->next;
    i++;
  }
  if (prev == NULL)
  {
    start = start->next;
    return start;
  }
  prev->next = temp->next;
  return start;
}
struct node *deleteval(struct node *start)
{
  struct node *temp = start;
  struct node *prevnode = NULL;
  struct node *nextnode = start->next;
  int val;
  printf("Enter the value to be deleted: ");
  scanf("%d",&val);
  while (temp != NULL)
  {
    if (temp->data == val)
    {
      if (prevnode == NULL)
      {
        start = start->next;
        return start;
      }
      else
      {
        prevnode->next = nextnode;
        return start;
      }
    }
    prevnode = temp;
    temp = temp->next;
    nextnode = nextnode->next;
  }
}
void menu(struct node *head)
{
    int choice;
  printf("\nDisplay Menu: \n1.Insert at start \n2.Insert at end \n3.Insert at position \n4.Delete by Position\n5.Delete by value \n6.Exit \n");
  scanf("%d",&choice);
  if (choice == 1)
  {
    head = insertstart(head);
    printf("AFTER INSERTION AT TOP: ");
    display(head);
    menu(head);
    return;
  }
  else if (choice == 2)
  {
    head = insertend(head);
    printf("AFTER INSERTION AT END: ");
    display(head);
    menu(head);
    return;
  }
  else if (choice == 3)
  {
    head = insertpos(head);
    printf("AFTER INSERTION AT A POSITION: ");
    display(head);
    menu(head);
    return;
  }
  else if (choice == 4)
  {
    head = deletepos(head);
    printf("AFTER DELETION AT A SPECIFIC POSITION: ");
    display(head);
    menu(head);
    return;
  }
  else if (choice == 5)
  {
    head = deleteval(head);
    printf("AFTER DELETION OF DESIRED VALUE : ");
    display(head);
    menu(head);
    return;
  }
  else if (choice == 6)
  {
    return;
  }
}

int main()
{
  struct node *head;
  head = create();
  printf("\nORIGINAL LINKED-LIST: ");
  display(head);
  menu(head);
  return 0;

}
