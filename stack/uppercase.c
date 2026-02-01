#include <stdio.h>
#include <string.h>
int stack[20];
int top = -1;
void push(char ch)
{
  if (top == 18)
  {
    printf("STACK OVERFLOW1\n");
  }
  else
  {
    stack[++top] = ch;
  }
}
char pop()
{
  if (top == -1)
  {
    printf("STACK UNDERFLOW!\n");
  }
  else
  {
    if (stack[top] >= 65 && stack[top] <= 90)
    {
      stack[top] = stack[top] + 32;
      return stack[top--];
    }
    else if (stack[top] >= 97 && stack[top] <= 122)
    {
      stack[top] = stack[top]-32;
      return stack[top--];
    }
    else
    {
      return stack[top--];
    }
  }
}
int main()
{
  char str[20];
  strcpy(str,"Akhilsai");
  int i,j;
  for (i = 0;i<strlen(str);i++)
  {
    push(str[i]);
  }
  for(i=0;i<strlen(str);i++)
  {
    str[i] = pop();
  }
  printf("%s",str);
}
