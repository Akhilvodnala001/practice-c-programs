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
  printf("0 to STOP, 1 to CONTINUE: ");
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
struct node *concat(struct node *l1,struct node *l2)
{
  struct node *temp = l1;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = l2;
  return l1;
}
void display(struct node *head)
{
  if (head == NULL)
  {
    return;
  }
  printf("%d ",head->data);
  display(head->next);
}
int main()
{
  struct node *l1,*l2;
  printf("List-1: \n");
  l1 = create();
  printf("List-2: \n");
  l2 = create();
  l1 = concat(l1,l2);
  printf("Concatenation of List-1 and List-2 is ");
  display(l1);
}
