#include <stdio.h>
#define n 5
int stack[n];
int top = -1;
void push()
{
  if (top == n-1)
  {
    printf("STACK OVERFLOW!\n");
    return;
  }
  else
  {
    printf("Enter data: ");
    scanf("%d",&stack[++top]);
  }
}
void pop()
{
  if (top == -1)
  {
    printf("STACK UNDERFLOW\n");
  }
  else
  {
    stack[--top];
  }
}
void peek()
{
  if (top == -1)
  {
    printf("STACK UNDERFLOW!");
  }
  else
  {
    printf("The peek element is %d\n",stack[top]);
  }
}
void display()
{
  if (top == -1)
  {
    printf("STACK UNDERFLOW\n");
  }
  else
  {
    for (int i = top;i>=0;i--)
    {
      printf("    %d \n",stack[i]);
    }
    //printf("");
  }
}
int main()
{
  int ch;
  do
  {
    printf("1 to PUSH data\n2 to POP\n3 for PEEK element\n4 to DISPLAY all the elements\n0 to TERMINATE\nPlease Choose from the above options: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push();
              break;
      case 2: pop();
              break;
      case 3: peek();
              break;
      case 4: display();
              break;
      case 0: break;
      default: printf("Invalid Input\n");
               break; 
    }
  }
  while (ch!=0);
  return 0;
}
