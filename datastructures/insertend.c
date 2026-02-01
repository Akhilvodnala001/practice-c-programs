#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int main()
{
  struct node *head = NULL, *newnode, *temp, *insert;
  int choice = 1;
  while (choice)
  {
    newnode = (struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter the data: ");
    scanf("%d",&x);
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
    printf("0 to Stop,1 to Continue: ");
    scanf("%d",&choice);
  }
  
  insert = (struct node*)malloc(sizeof(struct node));
  int k;
  printf("Enter the data to be inserted: ");
  scanf("%d",&k);
  temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  insert->data = k;
  insert->next = NULL;
  temp->next = insert;
  temp = head;
  while (temp)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
}
