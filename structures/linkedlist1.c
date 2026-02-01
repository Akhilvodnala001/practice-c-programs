#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* create()
{
  int x,choice;
  printf("Enter 1 to Continue and 0 to Stop: ");
  scanf("%d",&choice);
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  if (choice == 0)
  {
    return NULL;
  }
  printf("Enter the data: ");
  scanf("%d",&x);
  newnode->data = x;
  newnode->next = create();
  return newnode;
}
int printlinkedlist(struct node *head)
{
  if (head == NULL)
  {
    return 0;
  }
  struct node *temp;
  temp = head;
  head = head->next;
  printlinkedlist(head);
  printf("%d ",temp->data);
}
int main()
{
  struct node *head;
  head = create();
  printlinkedlist(head);
}
