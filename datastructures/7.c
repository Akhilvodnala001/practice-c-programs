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
  printf("0 to Stop, 1 to Continue: ");
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
struct node* modify(struct node *head)
{
  struct node *end;
  struct node *start;
  struct node *prev;
  end = start = head;
  while (end->next != NULL)
  {
    prev = end;
    end = end->next;
  }
  end->next = start;
  prev->next = NULL;
  return end;
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
  printf("Before modifying: ");
  print(head);
  head = modify(head);
  printf("\nAfter modifying: ");
  print(head);
}
