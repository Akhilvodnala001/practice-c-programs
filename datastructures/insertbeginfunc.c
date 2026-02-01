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
  printf("1 for Continue 0 for Stop: ");
  scanf("%d",&choice);
  if (!choice)
  {
    return 0;
  }
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&x);
  newnode->data = x;
  newnode->next = create();
  return newnode;
}
struct node* insert(struct node *start,int i)
{
  struct node *ins;
  ins = (struct node*)malloc(sizeof(struct node));
  ins->data = i;
  ins->next = start;
  start = ins;
  return start;
}
int print(struct node *start)
{
  if (start==NULL)
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
  printf("Enter the data to be inserted at the beginning: ");
  scanf("%d",&k);
  head = insert(head,k);
  print(head);
}
