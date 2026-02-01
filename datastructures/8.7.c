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
struct node *modify(struct node *start)
{
  if (start->next->next == NULL)
  {
    start->next = NULL;
    return start;
  }
  modify(start->next);
  return start;
}
int display(struct node *start)
{
  struct node *temp = start;
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
  printf("Before Deletion: ");
  display(head);
  head = modify(head);
  printf("\nAfter Deletion: ");
  display(head);

}
