#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node* modify(struct node *start)
{
  struct node *temp = start;
  struct node *smallestnode = start;
  struct node *smallestprev = NULL;
  struct node *prev = NULL;
  while (temp != NULL)
  {
    if (smallestnode->data > temp->data)
    {
      smallestnode = temp;
      smallestprev = prev;
    }
    prev = temp;
    temp = temp->next;
  }
  
  if (smallestprev == NULL)
  {
    return 0;
  }
  
  temp = start;
  if (smallestnode->next == NULL)
  {
    smallestnode->next = temp;
    start = smallestnode;
    smallestprev->next = NULL;
  }
  else
  {
    smallestprev->next = smallestnode->next;
    smallestnode->next = temp;
    start = smallestnode;
  }
  return start;
}
int print(struct node *start)
{
  struct node *temp;
  temp = start;
  while (temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
} 
int main()
{
  struct node *head = NULL, *temp = NULL;
  int choice = 1;
  while (choice)
  {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
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
    printf("0 to stop, 1 to Continue: ");
    scanf("%d",&choice);
  }
  printf("Before Modifying: ");
  print(head);
  head = modify(head);
  printf("After Modifying: ");
  print(head);

}
