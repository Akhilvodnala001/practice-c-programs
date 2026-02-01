#include <stdio.h>
#include <stdlib.h>
#pragma pack(push,1)
struct node
{
  int data;
  struct node *next;
};
#pragma pack(pop)
struct node *head;
struct node *create()
{
  struct node *head = NULL;
  struct node *temp = NULL;
  int choice = 1;
  while (choice)
  {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    if (head == NULL)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
    printf("1 to Continue, 0 to Stop: ");
    scanf("%d",&choice);
  }
  return head;
}
void display(struct node *head)
{
  struct node *temp;
  temp = head;
  do 
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  while(temp!=head);
  return;
}
int main()
{
  head = create();
  display(head);
}
