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
int search(struct node *head,int n)
{
  static int f = 1;
  if (head->data == n)
  {
    return f;
  }
  f++;
  search(head->next,n);
  if (head == NULL)
  {
    return 0;
  }
}
int main()
{
  struct node *head;
  head = create();
  int found;
  int num;
  printf("Enter the element you want to search: ");
  scanf("%d",&num);
  found = search(head,num);
  if (found == 0)
  {
    printf("Not Found!");
  }
  else
  {
    printf("Found at position-%d",found);
  }
  
  
}
