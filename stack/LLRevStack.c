#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top = NULL;
void push(int n)
{
  struct node *newnode;
  newnode = malloc(sizeof(struct node));
  newnode->data = n;
  newnode->next = top;
  top = newnode;
}
int pop()
{
  if (top == NULL)
  {
    printf("STACK UNDERFLOW\n");
  }
  else
  {
    struct node *temp = top;
    top = top->next;
    int x = temp->data;
    free(temp);
    return x;
  }
}
int main()
{
  struct node *head = NULL;
  struct node *temp = NULL;
  int ch  = 1;
  while (ch)
  {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
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
    printf("0 to STOP, 1 to CONTINUE: ");
    scanf("%d",&ch);
  }
  temp = head;
  printf("ORIGINAL LL: ");
  while (temp!=NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  temp = head;
  while (temp!=NULL)
  {
    push(temp->data);
    temp = temp->next;
  }
  temp = head;
  while (temp!=NULL)
  {
    temp->data = pop();
    temp = temp->next;
  }
  temp = head;
  printf("Reversed LL: ");
  while (temp!=NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
}
