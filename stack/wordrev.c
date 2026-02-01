#include <stdio.h>
#include <string.h>
char stack[50];
int top = -1;
void push(char ch)
{
  if (top == 48)
  {
    printf("STACK OVERFLOW!\n");
  }
  else
  {
    top++;
    stack[top] = ch;
  }
}
char pop()
{
  if (top == -1)
  {
    printf("Underflow!\n");
  }
  else
  {
    return stack[top--];
  }
}
int main()
{
  char str[50];
  strcpy(str,"Hello This is akhil");
  int i,j;
  for (i=0;i<strlen(str);i++)
  {
    push(str[i]);
  }
  for (i=0;i<strlen(str);i++)
  {
    str[i] = pop();
  }
  int s = 0;
  for (i=0;i<=strlen(str);i++)
  {
    if (str[i] == ' ' || str[i] == '\0')
    {
      top = -1;
      for (int j = s;j<i;j++)
      {
        push(str[j]);
      }
      for (int j = s;j<i;j++)
      {
        str[j] = pop();
      }
      s = i+1;
    }
  }
  printf("%s",str);
}
