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
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  printf("0 to Enter, 1 to Continue: ");
  scanf("%d",&choice);
  if (choice)
  {
    newnode->next = create();
  }
  else
  {
    return newnode;
  }
  return newnode;
}
struct node *modify(struct node *head)
{
  struct node *end;
  struct node *start;
  struct node *temp = head;
  end = start = head;
  while (end->next != NULL)
  {
    end = end->next;
  }
  end->next = start;
  head = head->next;
  start->next = NULL;
  return head;
}
int print(struct node *start)
{
  struct node *temp;
  temp = start;
  while (temp!=NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
}
int main()
{
  struct node *head;
  head = create();
  printf("Before Modifying: ");
  print(head);
  head = modify(head);
  printf("\nAfter Modifying: ");
  print(head);
  return 0;
}
