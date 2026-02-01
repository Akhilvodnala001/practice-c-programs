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
  printf("0 to Stop, 1 to Continue: ");
  scanf("%d",&choice);
  if (choice == 0)
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
int search(struct node *start, int s)
{
  struct node *temp;
  temp = start;
  int count = 0;
  while (temp!=NULL)
  {
    if (temp->data == s)
    {
      count++;
    }
    temp = temp->next;
  }
  return count;
}
int main()
{
  struct node *list;
  list = create();
  int s;
  printf("Enter the element you want to search: ");
  scanf("%d",&s);
  int count;
  count = search(list,s);
  printf("%d occurred %d times in the given linked list..",s,count);
}
