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
struct node *reverse(struct node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  struct node *newHead = reverse(head->next);
  head->next->next = head;
  head->next = NULL;
  return newHead;
}
int display(struct node *head)
{
  while (head != NULL)
  {
    printf("%d ",head->data);
    head = head->next; 
  }
}
int main()
{
  struct node *head;
  head = create();
  head = reverse(head);
  display(head);
}
