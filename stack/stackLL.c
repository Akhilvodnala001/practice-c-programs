#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top = NULL;
void push(int d)
{
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = d;
  newnode->next = top;
  top = newnode;
  return;
}
void display()
{
  if (top == NULL)
  {
    printf("STACKUNDERFLOW\n");
    return;
  }
  else
  {
    struct node *temp = top;
    while (temp!=NULL)
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
    printf("\n");
  }
}
void pop()
{
  struct node *temp = top;
  top = top->next;
  free(temp);
  return;
}
void peak()
{ 
  if (top == NULL)
  {
    printf("STACK UNDERFLOW!\n");
  }
  else
  {
    printf("The peak element in the stack is %d\n",top->data);
  }
}
int main()
{
  int ch,x;
  do
  {
    printf("1 to push\n2 to display()\n3 to pop()\n4 to peak\n0 to Terminate\nChoose from the above options: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Enter data: ");
      scanf("%d",&x);
      push(x);
      break;
      case 2: display();
      break;
      case 3: pop();
      break;
      case 4: peak();
      break;
      default : break;
    }
  }while (ch!=0);
}
