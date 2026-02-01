#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int insertdata = 5; 
struct node *create()
{
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data: ");
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
  if (start->next == NULL)
  {
    struct node *insertnode;
    insertnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: ");
    scanf("%d",&insertnode->data);
    insertnode->next = NULL;
    start->next = insertnode;
    return 0;
  }
  modify(start->next);
  return start;
}
int display(struct node *start)
{
  while (start != NULL)
  {
    printf("%d ",start->data);
    start = start->next;
  }
}
int main()
{
  struct node *head;
  head = create();
  printf("Before Insertion: ");
  display(head);
  head = modify(head);
  printf("After Insertion: ");
  display(head);
}
