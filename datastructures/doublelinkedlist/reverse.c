#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
void forward(struct node *head)
{
  while (head!=NULL)
  {
    printf("%d ",head->data);
    head = head->next;
  }
}
void backward (struct node *head)
{
  struct node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  while (temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp->prev;
  }
}
struct node *reverse(struct node *head)
{ 
  struct node *reversehead;
  struct node *reversestart = NULL;
  struct node *reversetemp = NULL;
  struct node *temp = head;
  while (temp->next!=NULL)
  {
    temp = temp->next;
  }
  while (temp!=NULL)
  {
    reversehead  = (struct node*)malloc(sizeof(struct node));
    reversehead->data = temp->data;
    reversehead->next = NULL;
    reversehead->prev = NULL;
    if (reversestart == NULL)
    {
      reversestart = reversetemp = reversehead;
    }
    else
    {
      reversetemp->next = reversehead;
      reversehead->prev = reversetemp;
      reversetemp = reversetemp->next;
    }
    temp = temp->prev;
  }
  return reversestart;
}
struct node *head,*newnode;
int main()
{
  head = NULL;
  struct node *temp;
  int choice = 1;
  while (choice)
  {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      newnode->prev = temp;
      temp = newnode;
    }
    printf("0 to Stop, 1 to Continue: ");
    scanf("%d",&choice);
  }
  printf("Forward printing: ");
  forward(head);
  printf("\nBackward printing: ");
  backward(head);
  head = reverse(head);
  printf("Forward printing after reversal: ");
  forward(head);
}
