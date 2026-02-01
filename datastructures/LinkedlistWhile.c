#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int main()
{
  struct node *head = NULL,*newnode,*temp;
  int x,choice = 1;
  while (choice)
  {
    newnode = (struct node*)malloc(sizeof(struct node));
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
    printf("0 to stop: ");
    scanf("%d",&choice);
  }
  temp = head;
  while (temp)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }

}
