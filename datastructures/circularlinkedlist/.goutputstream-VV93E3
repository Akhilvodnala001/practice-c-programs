#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
  struct node *head = NULL;
  struct node *temp = NULL;
  int choice = 1;
  while (choice)
  {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if (head == NULL)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = temp->next;
    }
    printf("0 to STOP, 1 to CONTINUE: ");
    scanf("%d",&choice);
  }
  temp->next = head;
  return head;
  
}
void display(struct node *start)
{
  struct node *temp = start;
  do
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  while (temp!=start);
  return;
}
struct node *reverse(struct node *start)
{
  struct node *tail = start;
  while (tail->next != start)
  {
    tail = tail->next;
  }
  struct node *prevnode = start;
  struct node *currentnode = start->next;
  struct node *nextnode = currentnode->next;
  prevnode->next = tail;
  while (currentnode != start)
  {
    currentnode->next = prevnode;
    prevnode = currentnode;
    currentnode = nextnode;
    nextnode = currentnode->next;
  }
  return tail;
}
int main()
{
  struct node *head;
  head = create();
  printf("Circular List: ");
  display(head);
  head = reverse(head);
  printf("Reverse Circular List: ");
  display(head);
  
}
