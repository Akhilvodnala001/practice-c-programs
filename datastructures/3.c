#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
  int choice;
  printf("0 to Stop, 1 to Continue: ");
  scanf("%d",&choice);
  if  (choice == 0)
  {
    return 0;
  }
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  newnode->next = create();
  return newnode;
}
struct node* linkedlistcpy(struct node *start)
{
  struct node *copy = NULL, *temp = NULL, *head = NULL;
  while (start != NULL)
  {
    copy = (struct node*)malloc(sizeof(struct node));
    copy->data = start->data;
    copy->next = NULL;
    if (head == NULL)
    {
      head = temp = copy;
    }
    else
    {
      temp->next = copy;
      temp = temp->next;
    }
    start = start->next;
  }
  return head;
}
int print(struct node *start)
{
  if (start == NULL)
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
  struct node *copy;
  copy = linkedlistcpy(head);
  print(copy);
  return 1;
}

