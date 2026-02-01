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
    int k;
    printf("Enter the data: ");
    scanf("%d",&k);
    newnode->data = k;
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
    printf("0 to stop 1 to continue: ");
    scanf("%d",&choice);
  }
  
  temp = head;
  while (temp)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  temp = head;
  int pos;
  printf("Enter the position after which you wanna insert data: ");
  scanf("%d",&pos);
  int i = 1;
  while (i<pos)
  {
    temp = temp->next;
    i++;
  }
  insert = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data to be inserted: ");
  scanf("%d",&insert->data);
  insert->next = temp->next;
  temp->next = insert;
  temp = head;
  while (temp)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  


}
