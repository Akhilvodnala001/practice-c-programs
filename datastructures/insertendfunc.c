#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create()
{
  int choice;
  printf("0 to Continue 1 to Stop: ");
  scanf("%d",&choice);
  if (!choice)
  {
    return NULL;
  }
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  newnode->next = create();
  return newnode;
}
struct node* insert(struct node *start)
{
  struct node *head;
  head = start;
  struct node *insert;
  insert = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data to be inserted at the end of the list: ");
  scanf("%d",&insert->data);
  insert->next = NULL;
  while (start->next != NULL)
  {
    start = start->next;
  }
  start->next = insert;
  start = head;
  return start;
}
int print(struct node *start)
{
  if (!start)
  {
    return 0;
  }
  printf("%d ",start->data);
  print(start->next);

}
int main()
{
  struct node *head;
  head = create();
  int k;
  head = insert(head);
  print(head);
}
